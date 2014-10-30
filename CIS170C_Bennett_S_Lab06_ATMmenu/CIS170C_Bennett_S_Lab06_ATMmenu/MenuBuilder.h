/* Developer: Steven Bennett
	Assignment: Week 6 Lab 06 ATM Menu Simulator
	Date: April 13, 2013
*/

#pragma once //open header file only once
#ifndef MENUBUILDER_H
#define MENUBUILDER_H
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class MenuBuilder
{
private:
	double balance;
public:
	MenuBuilder(); //constructor
	~MenuBuilder(void); //destructor
	//methods
	void buildMenu();
	void processInput(int);
};

#endif