#pragma once
#include "Employee.h"
class Manager:public Employee 
{
private:
	string teamName;

public:
	void setTeamName(string tn);
	string getTeamName();
};

