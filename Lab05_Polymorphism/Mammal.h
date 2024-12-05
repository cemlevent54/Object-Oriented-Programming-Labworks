#pragma once
#include <iostream>
using namespace std;
#include <string>
#include "Food.h"
#include "Animal.h"

class Mammal : public Animal {
public:
    // Yapýcý ve yýkýcý
    Mammal(const std::string& name, int age);
    ~Mammal();

    // Ekstra metot
    void giveBirth();

    // Saf sanal metotlarýn override edilmesi
    void makeSound() const override;
    void eat(const Food& food) override; // const Food& olarak güncellendi
    void move() const override;
};


Mammal::Mammal(const std::string& name, int age) : Animal(name, age) {}

Mammal::~Mammal() {
}

void Mammal::giveBirth() {
    std::cout << name << " is giving birth." << std::endl;
}

void Mammal::makeSound() const {
    std::cout << name << " makes a mammal-specific sound." << std::endl;
}

void Mammal::eat(const Food& food) { // const Food& parametresi ile uyumlu hale getirildi
    std::cout << name << " is eating " << food.getName() << "." << std::endl;
}

void Mammal::move() const {
    std::cout << name << " is moving like a mammal." << std::endl;
}
