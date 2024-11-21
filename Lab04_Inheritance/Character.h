#pragma once
#include<iostream>
using namespace std;
#include <string>

class Character {
private:
	string name;
	int level;
	int health;
public:
	Character(string name, int level, int health);
	string getName();
	int getLevel();
	int getHealth();
	void setName(string name);
	void setLevel(int level);
	void setHealth(int health);
	void printInfo();
};
