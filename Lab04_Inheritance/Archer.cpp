#include<iostream>
#include<string>
#include "Archer.h"

using namespace std;

Archer::Archer(string _name, int _level, int _health, int _arrows) : Character(_name, _level, _health) {
    arrows = _arrows;
}

int Archer::getArrows() {
    return arrows;
}

void Archer::setArrows(int _arrows) {
    arrows = _arrows;
}

void Archer::useArrow() {
    if (arrows > 0) {
        arrows--;
        cout << "Archer " << getName() << " used an arrow. " << getName() << " has " << arrows << " arrows left." << endl;
    }
    else {
        cout << "Archer " << getName() << " has no arrows left!" << endl;
    }
}

void Archer::useArrow(Character& target) {
    if (arrows > 0) {
        int damage = getLevel();
        arrows--;

        target.setHealth(target.getHealth() - damage);

        cout << getName() << " shoots an arrow at " << target.getName()
            << " (" << damage << " points)" << endl;
        cout << getName() << " has " << arrows << " arrows left." << endl;
    }
    else {
        cout << getName() << " tried to shoot an arrow at " << target.getName()
            << ", but has no arrows left!" << endl;
    }
}

void Archer::printInfo() {
    cout << "Archer " << getName() << endl
        << "Level: " << getLevel() << endl
        << "Health: " << getHealth() << endl
        << "Arrows: " << arrows << endl;
}
