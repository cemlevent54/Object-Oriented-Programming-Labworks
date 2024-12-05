#pragma once
#include <iostream>
using namespace std;
#include <string>
#include "Animal.h"
#include "Food.h"
#include "Bird.h"

class Eagle : public Bird {
public:
	Eagle(const string& name, int age) : Bird(name, age) {}
	~Eagle();
	void makeSound() const override;
	void move() const override;
	void fly() const override;
	void climb() const override;
};

Eagle::~Eagle() {
}

void Eagle::makeSound() const {
	cout << name << " screeches sharply." << endl;
}

void Eagle::move() const {
	cout << name << " is moving like an eagle." << endl;
}


void Eagle::fly() const {
	cout << name << " soars in the sky." << endl;
}

void Eagle::climb() const {
	cout << name << " can not climb!" << endl;
}