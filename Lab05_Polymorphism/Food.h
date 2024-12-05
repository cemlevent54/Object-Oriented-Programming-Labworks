#pragma once
#include <iostream>
#include <string>

class Food {
protected:
    std::string name;

public:
    // Yapýcý
    Food(const std::string& name);

    // Yýkýcý
    ~Food();

    // Getter (const referans döner)
    const std::string& getName() const;

    // Setter (const std::string& alýr)
    void setName(const std::string& name);
};

// Sýnýf dýþýndaki metot tanýmlarý
Food::Food(const std::string& name) : name(name) {}

Food::~Food() {
}

const std::string& Food::getName() const {
    return name;
}

void Food::setName(const std::string& name) {
    this->name = name;
}
