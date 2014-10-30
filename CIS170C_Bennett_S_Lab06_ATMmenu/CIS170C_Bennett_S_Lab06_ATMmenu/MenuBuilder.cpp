/*Developer: Steven Bennett
	Assignment: Week 6 Lab 06 ATM menu simulator
	Date: April 13, 2013
*/

#include "MenuBuilder.h"

MenuBuilder::MenuBuilder(void) //constructor for MenuBuilder. Balance will be initialized to $5000
{
	balance = 5000.00;
}

MenuBuilder::~MenuBuilder(void) //destructor
{
}

//output ATM menu
void MenuBuilder::buildMenu()
{
	cout << endl;
	cout << "Welcome to DeVry Bank Automated-Teller-Machine\n" << endl;
	cout << "1. Check balance" << endl;
	cout << "2. Make withdrawal" << endl;
	cout << "3. Make deposit" << endl;
	cout << "4. View account information" << endl;
	cout << "5. View statement" << endl;
	cout << "6. View bank information" << endl;
	cout << "7. Exit" << endl;
	cout << "\nEnter menu choice: ";
}

//process user's choice
void MenuBuilder::processInput(int choice)
{
	double withdrawal = 0;
	double deposit = 0;

	switch (choice)
	{
	case 1: 
		cout << "\nCurrent balance is: $" << fixed << setprecision(2) << balance << endl;
		break;
	case 2: 
		cout << "\nHow much would you like to withdraw? $";
		cin >> withdrawal;
		if ((balance > withdrawal) && (withdrawal > 0))
		{
			balance -= withdrawal;
			cout << "Your new balance is: $" << fixed << setprecision(2) << balance << endl;
		}
		else
			cout << "Invalid withdrawal amount. " << endl;
		break;
	case 3: 
		cout << "\nHow much would you like to deposit? $";
		cin >> deposit;
		if (deposit > 0)
		{
			balance += deposit;
			cout << "Your new balance is: $" << fixed << setprecision(2) << balance << endl;
		}
		else
			cout << "Invalid deposit amount." << endl;
		break;
	case 4:
		cout << "\nAccount owner: Steven Bennett" << endl;
		cout << "Account number: 0123456789" << endl;
		break;
	case 5:
		cout << "\nAccount Statement" << endl;
		cout << "--------------------------------" << endl;
		cout << "01/01/11 - McDonald's -   $6.27" << endl;
		cout << "01/15/11 - Kwik Trip  -  $34.93" << endl;
		cout << "02/28/11 - Target     - $124.21" << endl;
		break;
	case 6:
		cout << "\nDeVry Bank, Established 2011" << endl;
		cout << "(123)456-7890" << endl;
		cout << "12345 1st St." << endl;
		cout << "Addison, IL 12345" << endl;
		break;
	case 7:
		cout << "Good-bye" << endl;
		break;
	default:
		cout << "Invalid menu choice." << endl;
		break;
	}
}

