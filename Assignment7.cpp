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
