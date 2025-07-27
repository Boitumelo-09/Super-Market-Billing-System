#include"Product.h"
#include <iostream>


int main() {
	Product product{ "Apple",1123,-5,6.90 };
	int menuChoice;
	do
	{
		displayMenu(menuChoice);
		switch (menuChoice)
		{
		case 1: {
			clearScreen();
			std::cout << "\t\t\t\tdoing it";
			clearScreenWithMessage();
			break;
		}
		case 2: {
			clearScreen();
			std::cout << "\t\t\t\tdoing number 2";
			clearScreenWithMessage();
			break;
		}
		case 3: {
			clearScreen();
			std::cout << "\t\t\t\tdoing number 3";
			clearScreenWithMessage();
			break;
		}
		default : 
			clearScreen();
			std::cout << "\t\t\t\tFailure!!";
			clearScreenWithMessage();
		}
	} while (menuChoice >=1 && menuChoice<=3);

}