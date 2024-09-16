#include "Manager.h"

void Manager::setTeamName(string tn)
{
	teamName = tn;
}

string Manager::getTeamName()
{
	return teamName;
}

void Manager::PrintInfo()// override 
{
	Employee::PrintInfo();// call to the base class PrintInfo
	cout << "Team:" << getTeamName() << endl;
}
