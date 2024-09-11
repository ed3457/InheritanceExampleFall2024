#include "Employee.h"
void Employee::setName(string n)
{
	name = n;

}

string Employee::getName()
{
	return name;

}

void Employee::setSalary(float s)
{
	if (s >= 1000) // validation 
		salary = s;

}
float Employee::getSalary()
{   // This function will set the salary
	// Input: None
	// Output: The employee salary, Type: float

	return salary;
}

void Employee::PrintInfo()
{
	cout << "Employee Name:" << getName() << endl;
	cout << "Employee Salary:" << getSalary() << endl;
}

Employee::Employee()
{
	setName("Not Assigned yet!");
	setSalary(1000);
}

Employee::Employee(string n, float s)
{
	setName(n);
	setSalary(s);

}
