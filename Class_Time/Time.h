#pragma once

class Time
{
private:
	int hour;
	int minutes;
	int seconds;

public:
	Time();
	Time(int newHour, int newMinutes, int newSeconds);

	void print();
};
