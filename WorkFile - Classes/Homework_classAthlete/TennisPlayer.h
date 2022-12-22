#pragma once

#include "Athlete.h"

class TennisPlayer : public Athlete {

private:
	int currentWorldRanking;

public:
	TennisPlayer();
	TennisPlayer(const char* name, int annyalSalary, int currentWorldRanking);

	int getCurrentWorldRanking();
	void setCurrentWorldRanking(int currentWorldRanking);

	void Print();

};