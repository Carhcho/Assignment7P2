#include "NumDays.h"

NumDays::NumDays()
{
	hours = 0.0;
	days = hours;
}

void NumDays::SetHours(double h)
{
	hours = h;
}

void NumDays::SetDays(double d)
{
	days = hours/8;
}

double NumDays::GetHours()
{
	return hours;
}

double NumDays::GetDays()
{
	return days;
}

void NumDays::SetMaxSickDays(double ms)
{
	ms = 240;
}


