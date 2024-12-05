#pragma once
#include <iostream>
using namespace std;
#include "Animal.h"
#include "Mammal.h"

class Bat : public Mammal {
public:
	Bat(const string& name, int age) : Mammal(name, age) {}
	~Bat();
	void makeSound() const override;
	void move() const override;
	void fly() const override;
	void climb() const override;
};

Bat::~Bat() {

}

void Bat::makeSound() const {
	cout << name << " emits ultrasonic sounds." << endl;
}

void Bat::move() const {
	cout << name << " is moving like a Bat" << endl;
}

void Bat::fly() const {
	cout << name << " flies swiftly throught the night sky." << endl;
}

void Bat::climb() const {
	cout << name << " can not climb" << endl;
}