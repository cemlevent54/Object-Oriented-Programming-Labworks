#pragma once
#include <iostream>
#include <string>
#include "Food.h"

class Animal {
protected:
    std::string name;
    int age;

public:
    Animal(const std::string& name, int age);

    virtual ~Animal();

    std::string getName() const; // const ile iþaretlendi
    int getAge() const;          // const ile iþaretlendi

    void setName(const std::string& name);
    void setAge(int age);

    // pure virtual
    virtual void makeSound() const = 0;
    virtual void eat(const Food& food) = 0; // const Food& ile düzenlendi
    virtual void move() const = 0;

    // add climb and fly
    virtual void climb() const = 0;
    virtual void fly() const = 0;

    // Sanal olmayan metot
    void sleep() const;


};

// Sýnýf dýþý metot tanýmlarý
Animal::Animal(const std::string& name, int age) : name(name), age(age) {}

Animal::~Animal() {
}

std::string Animal::getName() const {
    return name;
}

int Animal::getAge() const {
    return age;
}

void Animal::setName(const std::string& name) {
    this->name = name;
}

void Animal::setAge(int age) {
    this->age = age;
}

void Animal::sleep() const {
    std::cout << name << " is sleeping." << std::endl;
}
