#pragma once
#include <iostream>
#include <string>
#include "Food.h"
#include "Animal.h"
using namespace std;

class Fish : public Animal {
public:
    // Yapýcý ve yýkýcý
    Fish(const std::string& name, int age);
    ~Fish();

    // Ekstra metot
    void layEggs() const;

    // Saf sanal metotlarýn override edilmesi
    void makeSound() const override;
    void eat(const Food& food) override; // const Food& ile düzenlendi
    void move() const override;
    void fly() const override;
    void climb() const override;
};

// Metot tanýmlarý
Fish::Fish(const std::string& name, int age) : Animal(name, age) {}

Fish::~Fish() {
}

void Fish::layEggs() const {
    std::cout << name << " is laying eggs." << std::endl;
}

void Fish::makeSound() const {
    std::cout << name << " makes a fish sound (bubbles)." << std::endl;
}

void Fish::eat(const Food& food) { // const Food& ile uyumlu
    std::cout << name << " swallows " << food.getName() << "." << std::endl;
}

void Fish::move() const {
    std::cout << name << " is swimming gracefully." << std::endl;
}

void Fish::fly() const {
    cout << name << " can not fly." << endl;
}

void Fish::climb() const {
    cout << name << " can not fly." << endl;
}