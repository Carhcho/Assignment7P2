#pragma once
#include <string>
#include <iostream>
#include "NumDays.h"
using namespace std;

class TimeOff
{
private:
	string name; //name of employee
	int empNum; //employee ID
	NumDays maxSickDays;
	NumDays sickTaken;
	NumDays maxVacation;
	NumDays vacTaken;
	NumDays maxUnpaid;
	NumDays unpaidTaken;
public:
	TimeOff();
	
	void SetName(string n);
	void SetEmpNum(int number);
	void SetTimeOff(double maxSickDays, double sickTaken, double maxVacation, double vacTaken, double maxUnpaid, double unpaidTaken);
	string GetName();
	int GetEmpNum();
};