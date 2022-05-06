#include <iostream>
#include <cstdlib>
#include <iomanip>

const double premium_price = 74.00;
const double unleaded_price = 73.00;
const double diesel_price = 76.00;

void itemsList();

int main()
{
	//Variable Declarations
	char customertype;
	int amountFill;
	double totalLiters;
	int customerCash;
	int change;

	std::cout << std::fixed << std::showpoint;
	std::cout << std::setprecision(2);

	itemsList();

	//Cashier's Input *type*
	std::cout << "TYPE: ";
	std::cin >> customertype;
	std::cout << std::endl;

	switch (customertype)
	{
	case 'A':
	case 'a':
		//Customer's Input
		std::cout << "Amount to Fill: ";
		std::cin >> amountFill;
		std::cout << std::endl;

		//Amount of Liters 
		totalLiters = amountFill / premium_price;
		std::cout << "Total no. of Liters: " << totalLiters << '\n';
		std::cout << "Pay: " << amountFill << '\n';
		std::cout << std::endl;
		
		//Cashier's input
		std::cout << "Customer's Cash: ";
		std::cin >> customerCash;
		{
			if (customerCash < amountFill)
				std::cout << "INSUFFICIENT FUNDS";
			    std::cout << std::endl;
		}
		change = customerCash - amountFill;
		std::cout << "Change: " << change;
		std::cout << std::endl;
		break;

	case 'B':
	case 'b':
		//Customer's Input
		std::cout << "Amount to Fill: ";
		std::cin >> amountFill;
		std::cout << std::endl;

		//Amount of Liters
		totalLiters = amountFill / unleaded_price;
		std::cout << "Total no. of Liters: " << totalLiters << '\n';
		std::cout << "Pay: " << amountFill << '\n';
		std::cout << std::endl;

		//Cashier's input
		std::cout << "Customer's Cash: ";
		std::cin >> customerCash;
		{
			if (customerCash < amountFill)
				std::cout << "INSUFFICIENT FUNDS";
			    std::cout << std::endl;
		}
		change = customerCash - amountFill;
		std::cout << "Change: " << change;
		std::cout << std::endl;
		break;

	case 'C':
	case 'c':
		//Customer's Input
		std::cout << "Amount to Fill: ";
		std::cin >> amountFill;
		std::cout << std::endl;

		//Amount of Liters
		totalLiters = amountFill / diesel_price;
		std::cout << "Total no. of Liters: " << totalLiters << '\n';
		std::cout << "Pay: " << amountFill << '\n';
		std::cout << std::endl;

		//Cashier's input
		std::cout << "Customer's Cash: ";
		std::cin >> customerCash;
		{
			if (customerCash < amountFill)
				std::cout << "INSUFFICIENT FUNDS";
			    std::cout << std::endl;
		}
		change = customerCash - amountFill;
		std::cout << "Change: " << change;
		std::cout << std::endl;
		break;

	default:
		std::cout << "INVALID INPUT!" << std::endl;
	} //end switch

	std::cout << "Thank you Come Again." << std::endl;

	return 0;
}

void itemsList()
{

	//Item's List
	std::cout << "**********PETRON GASOLINE STATION**********";
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << std::setw(2) << "KEY"
		<< std::setw(11) << "TYPE"
		<< std::setw(25) << "PRICE";
	std::cout << '\n';

	std::cout << std::setw(2) << "[A]"
		<< std::setw(14) << "PREMIUM"
		<< std::setw(22) << "74.00";
	std::cout << '\n';

	std::cout << std::setw(2) << "[B]"
		<< std::setw(15) << "UNLEADED"
		<< std::setw(21) << "73.00";
	std::cout << '\n';

	std::cout << std::setw(2) << "[C]"
		<< std::setw(13) << "DIESEL"
		<< std::setw(23) << "76.00";
	std::cout << '\n';
	std::cout << std::endl;
}