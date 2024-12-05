#pragma once
#include <iostream>
#include <string>

class Food {
protected:
    std::string name;

public:
    // Yap�c�
    Food(const std::string& name);

    // Y�k�c�
    ~Food();

    // Getter (const referans d�ner)
    const std::string& getName() const;

    // Setter (const std::string& al�r)
    void setName(const std::string& name);
};

// S�n�f d���ndaki metot tan�mlar�
Food::Food(const std::string& name) : name(name) {}

Food::~Food() {
}

const std::string& Food::getName() const {
    return name;
}

void Food::setName(const std::string& name) {
    this->name = name;
}
