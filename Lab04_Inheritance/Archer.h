#pragma once
#include "Character.h"
#include <iostream>
using namespace std;
#include <string>

class Archer : public Character {
private:
	int arrows;
public:
	Archer(string name, int level, int health, int arrows);
	int getArrows();
	void setArrows(int arrows);
	void useArrow();
	void useArrow(Character& target);
	void printInfo();
};