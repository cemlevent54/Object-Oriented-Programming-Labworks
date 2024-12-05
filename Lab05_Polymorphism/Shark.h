#pragma once
#include <iostream>
using namespace std;
#include <string>
#include "Animal.h"
#include "Food.h"
#include "Fish.h"

class Shark : public Fish {
public:
	Shark(const string& name, int age) : Fish(name, age) {}
	~Shark();
	void makeSound() const override;
	void move() const override;
	void fly() const override;
	void climb() const override;
};

Shark::~Shark() {
}

void Shark::makeSound() const {
	cout << name << " remains silent but deadly." << endl;
}

void Shark::move() const {
	cout << name << " swims powerfully through the ocean." << endl;
}

void Shark::fly() const {
	cout << name << " can not fly" << endl;
}

void Shark::climb() const {
	cout << name << " can not climb" << endl;
}



