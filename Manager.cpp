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

Manager::Manager()
{
	// Employee::Employee();
	Employee::Employee("Not provided yet", 3000);
	setTeamName("Not assigned yet");

}

Manager::Manager(string n, float s, string tn):Employee(n,s)
{
	setTeamName(tn);

}
