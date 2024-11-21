#include <iostream>
#include <string>
using namespace std;
#include "Warrior.h"
#include "Mage.h"
#include "Archer.h"


// Class implementations

int main()
{
    // name, level, health, ...
    Warrior warrior("Ahmet", 33, 200, 30);
    Mage mage("Mehmet", 65, 90, 40);
    Archer archer("Zeynep", 50, 95, 3);

    cout << "------------------------------\n";
    cout << "Character Information:\n";
    warrior.printInfo();
    cout << "---------------\n";
    mage.printInfo();
    cout << "---------------\n";
    archer.printInfo();
    cout << "------------------------------\n";

    cout << "Characters in Action:\n";
    warrior.useSword(mage);
    cout << "---------------\n";
    mage.useSpell();
    cout << "---------------\n";
    archer.useArrow(mage);
    cout << "---------------\n";
    archer.useArrow(mage);
    cout << "---------------\n";
    warrior.useSword(archer);
    cout << "---------------\n";
    archer.useArrow(warrior);
    cout << "---------------\n";
    archer.useArrow(warrior);

    cout << "------------------------------\n";
    cout << "Updated Character Information:\n";
    warrior.printInfo();
    cout << "---------------\n";
    mage.printInfo();
    cout << "---------------\n";
    archer.printInfo();
    cout << "------------------------------\n";

    return 0;
}