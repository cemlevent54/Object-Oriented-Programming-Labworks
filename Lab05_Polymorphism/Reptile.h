#pragma once
#include <iostream>
#include <string>
#include "Food.h"
#include "Animal.h"
using namespace std;

class Reptile : public Animal {
public:
    Reptile(const std::string& name, int age);
    ~Reptile();

    void layEggs() const;

    // pure virtual
    void makeSound() const override;
    void eat(const Food& food) override; // const Food& ile düzenlendi
    void move() const override;
    void fly() const override;
    void climb() const override;
};

Reptile::Reptile(const std::string& name, int age) : Animal(name, age) {}

Reptile::~Reptile() {
}

void Reptile::layEggs() const {
    cout << name << " is laying eggs." << std::endl;
}

void Reptile::makeSound() const {
    cout << name << " makes a reptile sound (hiss)." << std::endl;
}

void Reptile::eat(const Food& food) { // const Food& ile uyumlu
    cout << name << " consumes " << food.getName() << "." << std::endl;
}

void Reptile::move() const {
    cout << name << " is crawling like a reptile." << std::endl;
}

void Reptile::climb() const {
    cout << name << " is climbing" << endl;
}

void Reptile::fly() const {
    cout << name << " can not fly" << endl;
}

