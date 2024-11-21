#include<iostream>
using namespace std;
#include <string>
#include "Mage.h"

Mage::Mage(string _name, int _level, int _health, int _mana) : Character(_name, _level, _health) {
	mana = _mana;
}

int Mage::getMana() {
	return mana;
}

void Mage::setMana(int _mana) {
	mana = _mana;
}

void Mage::useSpell() {
	cout << "Mage " << getName() << " used spell" << endl;
}

void Mage::printInfo() {
	Character::printInfo();
	cout << "Mana: " << mana << endl;
}


