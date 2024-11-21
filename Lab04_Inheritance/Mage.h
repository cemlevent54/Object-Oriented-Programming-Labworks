#pragma once
#include "Character.h"
#include <iostream>
using namespace std;
#include <string>

class Mage : public Character {
private:
	int mana;
public:
	Mage(string name, int level, int health, int mana);
	int getMana();
	void setMana(int mana);
	void useSpell();
	void printInfo();
};