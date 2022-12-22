#include "TennisPlayer.h"

TennisPlayer::TennisPlayer() {
	currentWorldRanking = 0;
}

TennisPlayer::TennisPlayer(const char* name, int annyalSalary, int currentWorldRanking) : Athlete(name, annyalSalary) {
	this->currentWorldRanking = currentWorldRanking;
}

int TennisPlayer::getCurrentWorldRanking() {
	return currentWorldRanking;
}

void TennisPlayer::setCurrentWorldRanking(int currentWorldRanking) {
	this->currentWorldRanking = currentWorldRanking;
}

void TennisPlayer::Print() {
	Athlete::Print();
	std::cout << "CurrentWorldRanking" << currentWorldRanking << std::endl;
}


