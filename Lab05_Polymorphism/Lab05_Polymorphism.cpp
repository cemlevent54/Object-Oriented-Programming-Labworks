#include <iostream>
#include <vector>
#include "Animal.h"
#include "Lion.h"
#include "Eagle.h"
#include "Shark.h"
#include "Snake.h"
#include "Food.h"
#include "Monkey.h"
#include "Bat.h"

int main()
{
    try {


        Lion* lion = new Lion("Simba", 5);
        lion->makeSound();
        lion->move();
        lion->sleep();
        lion->eat(Food("meat"));
        cout << "-------------------\n" << endl;

        Eagle* eagle = new Eagle("Freedom", 3);
        eagle->makeSound();
        eagle->fly();
        eagle->sleep();
        eagle->eat(Food("rodent"));
        eagle->fly();
        cout << "-------------------\n" << endl;

        Shark* shark = new Shark("Jaws", 7);
        shark->makeSound();
        shark->move();
        shark->sleep();
        shark->eat(Food("fish"));
        cout << "-------------------\n" << endl;

        Snake* snake = new Snake("Slither", 2);
        snake->makeSound();
        snake->move();
        snake->sleep();
        snake->eat(Food("rodent"));
        cout << "-------------------\n" << endl;

        Bat* bat = new Bat("Bruce", 1);
        bat->makeSound();
        bat->fly();
        bat->sleep();
        bat->eat(Food("insect"));
        bat->fly();
        cout << "-------------------\n" << endl;


        Monkey* monkey = new Monkey("George", 10);
        monkey->makeSound();
        monkey->move();
        monkey->sleep();
        monkey->eat(Food("fruit"));
        monkey->climb();




    }
    catch (const std::exception& ex) {
        std::cerr << ex.what() << std::endl;
    }


    return 0;
}

