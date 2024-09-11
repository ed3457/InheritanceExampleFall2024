#pragma once
#include <string>
#include <iostream>
using namespace std;

class Employee
{
private:
	string name;
	float salary;
public:
	// setters and getters
	void setName(string n);
	string getName(); 

	void setSalary(float s);
	float getSalary();

	// functions 

	void PrintInfo(); 

	// Constructors 
	Employee();
	Employee(string n, float s);


};

