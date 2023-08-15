#include "TimeOff.h"

TimeOff::TimeOff()
{
	name = " ";
	empNum = 0;
	
}

void TimeOff::SetName(string n)
{
	name = n;
}

void TimeOff::SetEmpNum(int number)
{
	empNum = number;
}

void TimeOff::SetTimeOff(double maxSickDays, double sickTaken, double maxVacation, double vacTaken, double maxUnpaid, double unpaidTaken)
{
	maxSickDays = maxSickDays;
	sickTaken = sickTaken;
	maxVacation = 240;
	vacTaken = vacTaken;
	maxUnpaid = maxUnpaid;
	unpaidTaken = unpaidTaken;
}

string TimeOff::GetName()
{
	return name;
}

int TimeOff::GetEmpNum()
{
	return empNum;
}


