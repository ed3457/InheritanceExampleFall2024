#pragma once
#include "Employee.h"
class Manager:public Employee 
{
private:
	string teamName;

public:
	void setTeamName(string tn);
	string getTeamName();
	void PrintInfo();// override 

	Manager();
	Manager(string n, float s, string tn);
};

