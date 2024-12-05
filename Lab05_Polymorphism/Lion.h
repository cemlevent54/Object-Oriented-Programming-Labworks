#pragma once
#include <iostream>
using namespace std;
#include <string>
#include "Animal.h"
#include "Food.h"
#include "Mammal.h"

class Lion : public Mammal {
public:
	Lion(const string& name, int age) : Mammal(name, age) {}
	~Lion();
	void makeSound() const override;
	void move() const override;
	void fly() const override;
	void climb() const override;
};

Lion::~Lion() {
}

void Lion::makeSound() const {
	cout << name << " roars loudly." << endl;
}

void Lion::move() const {
	cout << name << " runs swiftly across the savannah." << endl;
}

void Lion::fly() const {
	cout << name << " can not fly" << endl;
}

void Lion::climb() const {
	cout << name << " can not climb" << endl;
}