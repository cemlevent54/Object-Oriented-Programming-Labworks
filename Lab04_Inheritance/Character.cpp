#include "Character.h"
#include "Mage.h"
#include "Warrior.h"
#include <iostream>
using namespace std;
#include <string>

Character::Character(string _name, int _level, int _health) {
	name = _name;
	level = _level;
	health = (_health < 0) ? 0 : _health;
}

string Character::getName() {
	return name;
}

int Character::getLevel() {
	return level;
}

int Character::getHealth() {
	return health;
}

void Character::setName(string _name) {
	name = _name;
}

void Character::setLevel(int _level) {
	level = _level;
}

void Character::setHealth(int _health) {
	if (_health < 0) {
		health = 0;
	}
	else {
		health = _health;
	}
}

void Character::printInfo() {
	cout << "Name: " << name << endl;
	cout << "Level: " << level << endl;
	cout << "Health: " << health << endl;
}

