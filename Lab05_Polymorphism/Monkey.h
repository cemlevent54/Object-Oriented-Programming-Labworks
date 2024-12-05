#pragma once
#include <iostream>
using namespace std;
#include "Animal.h"
#include "Mammal.h"

class Monkey : public Mammal {
public:
	Monkey(const string& name, int age) : Mammal(name, age) {}
	~Monkey();
	void makeSound() const override;
	void move() const override;
	void fly() const override;
	void climb() const override;
};

Monkey::~Monkey() {

}

void Monkey::makeSound() const {
	cout << name << " chatters excitedly" << endl;
}

void Monkey::move() const {
	cout << name << " moves playfully on the ground" << endl;
}

void Monkey::fly() const {
	cout << name << " can not fly" << endl;
}

void Monkey::climb() const {
	cout << name << " climbs swiftly up the trees." << endl;
}