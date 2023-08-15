/******************************************

Assignment 7

This assignment uses two classes which utilize the concept of aggregation. One class will be called TimeOff. This class makes use of another class called NumDays. Then you will create a driver (main) that will handle the personnel records for a company and generate a report.

TimeOff class will keep track of an employee’s sick leave, vacation, and unpaid time off. It will have appropriate constructors and member functions for storing and retrieving data in any of the member objects.

Author: Cesar Roncancio

Created : 10/17/2021

Revisions : 10/17/2021 I created the TimeOff class using the NumDays clas for the hours and created Rich employee object and inputed the hours through a SetTimeOff method.
******************************************/
#include <iostream>
#include "TimeOff.h"
using namespace std;

int main()
{
	TimeOff rich;

	rich.SetName("Richard Specioso");
	rich.SetEmpNum(541);

	rich.SetTimeOff(100, 55, 240, 100, 100, 20);

	cout << "The employee name is " << rich.GetName() << endl;
	cout << "The employee ID is " << rich.GetEmpNum() << endl;

	return 0;
}