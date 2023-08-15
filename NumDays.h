#pragma once
#include <string>
#include <iostream>
using namespace std;
class NumDays
{
private:
	double hours;
	double days;

public:
	NumDays();
	
	void SetHours(double h);
	void SetDays(double d);
	double GetHours();
	double GetDays();
	void SetMaxSickDays(double ms);
	void SetSickTaken(double st);
	void SetMaxVacation(double mv);
	void SetVacTaken(double vt);
	void SetMaxUnpaid(double mu);
	void SetUnpaidTaken(double ut);


};

