// InheritanceExampleFall2024.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Manager.h"
#include "Employee.h"

int main()
{
	Employee e1("James", 2000);

	Manager m1("Mary",5000,"Finance1");

	/*m1.setName("Mary");
	m1.setSalary(5000);
	m1.setTeamName("Finance1");*/

	e1.PrintInfo();

	m1.PrintInfo();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
