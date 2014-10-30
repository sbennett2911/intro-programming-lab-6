/* Developer: Steven Bennett
	Assignment: Week 6 Lab 06 ATM Menu Simulator
	Date: April 13, 2013
*/

#include "MenuBuilder.h"

int main()
{
	int choice = 0;
	MenuBuilder ATM; //instantiate object

	while (choice != 7)
	{
		ATM.buildMenu(); //make call to buildMenu()
		cin >> choice;
		ATM.processInput(choice); //make call to processInput(int)
	}
	return 0;
}
