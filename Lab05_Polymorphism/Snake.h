#pragma once
#include <iostream>
using namespace std;
#include <string>
#include "Animal.h"
#include "Food.h"
#include "Reptile.h"

class Snake : public Reptile {
public:
	Snake(const string& name, int age) : Reptile(name, age) {}
	~Snake();
	void makeSound() const override;
	void move() const override;
	void fly() const override;
	void climb() const override;
};

Snake::~Snake() {
}

void Snake::makeSound() const {
	cout << name << " hisses softly." << endl;
}

void Snake::move() const {
	cout << name << " slithers silently." << endl;
}

void Snake::fly() const {
	cout << name << " can not fly" << endl;
}

void Snake::climb() const {
	cout << name << " is climbing" << endl;
}
