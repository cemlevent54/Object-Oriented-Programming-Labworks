#pragma once
#include <iostream>
#include <string>
#include "Food.h"
#include "Animal.h"
using namespace std;

class Bird : public Animal {
public:
    Bird(const std::string& name, int age);
    ~Bird();

    void layEggs() const;

    // pure virtual
    void makeSound() const override;
    void eat(const Food& food) override; // const Food& ile düzenlendi
    void move() const override;
    void climb() const override;
    void fly() const override;
};

// Metot tanýmlarý
Bird::Bird(const std::string& name, int age) : Animal(name, age) {}

Bird::~Bird() {
}

void Bird::layEggs() const {
    std::cout << name << " is laying eggs." << std::endl;
}

void Bird::makeSound() const {
    std::cout << name << " makes a bird-specific sound." << std::endl;
}

void Bird::eat(const Food& food) { // const Food& ile düzenlendi
    std::cout << name << " pecks at " << food.getName() << "." << std::endl;
}

void Bird::move() const {
    std::cout << name << " is flying like a bird." << std::endl;
}

void Bird::climb() const {
    cout << name << " can not climb " << endl;
}

void Bird::fly() const {
    cout << name << " can fly" << endl;
}
