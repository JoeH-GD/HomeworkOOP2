// HomeworkOOP2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Fruit.h"

int main()
{

    Apple MyApple("red");
    Banana MyBanana;
    GrannySmith MyGranny;

    std::cout<< "My " << MyApple.getName() << " is " <<MyApple.getColor()<<".\n";
    std::cout << "My " << MyBanana.getName() << " is " << MyBanana.getColor() << ".\n";
    std::cout << "My " << MyGranny.getName() << " is " << MyGranny.getColor() << ".\n";

}
