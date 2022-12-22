#include "Time.h"

Time::Time()
{
	hour = minutes = seconds = 0;
}

Time::Time(int newHour, int newMinutes, int newSeconds)
{
	hour = newHour;
	minutes = newMinutes;
	seconds = newSeconds;
}