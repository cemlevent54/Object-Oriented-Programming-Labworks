#pragma once
#include "Character.h"
#include <iostream>
using namespace std;
#include <string>

class Warrior : public Character {
private:
	int strength;
public:
	Warrior(string name, int level, int health, int strength);
	int getStrength();
	void setStrength(int strength);
	void useSword();
	void useSword(Character& target);
	void printInfo();
};