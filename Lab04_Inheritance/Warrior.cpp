#include<iostream>
using namespace std;
#include <string>
#include "Warrior.h"

Warrior::Warrior(string _name, int _level, int _health, int _strength) : Character(_name, _level, _health) {
	strength = _strength;
}

int Warrior::getStrength() {
	return strength;
}

void Warrior::setStrength(int _strength) {
	strength = _strength;
}

void Warrior::useSword() {
	cout << "Warrior " << getName() << " used sword" << endl;
}

void Warrior::useSword(Character& target) {
	int damage = strength;
	target.setHealth(target.getHealth() - damage);

	cout << getName() << " used sword on " << target.getName()
		<< " (" << damage << " points)" << endl;
}

void Warrior::printInfo() {
	Character::printInfo();
	cout << "Strength: " << strength << endl;
}
