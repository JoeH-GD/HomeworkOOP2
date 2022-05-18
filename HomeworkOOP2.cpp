// HomeworkOOP2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Fruit.h"
#include "Person.h"

int main()
{
    Student studentOne("Boris", "male", 17, 76, 1);
    Student studentTwo("Gen", "Female", 19, 66, 3);
    Student studentThree("Zen", "Nonbinary", 20, 58, 4);

    studentOne.getStudentInfo();
    std::cout << "\n";
    studentTwo.getStudentInfo();
    std::cout << "\n";
    studentThree.getPersonInfo();
    std::cout << "\n";
    
    //Demo of counter 
    std::cout << Student::count();
    std::cout << "\n";
    std::cout << "\n";
    Apple MyApple("red");
    Banana MyBanana;
    GrannySmith MyGranny;

    std::cout<< "My " << MyApple.getName() << " is " <<MyApple.getColor()<<".\n";
    std::cout << "My " << MyBanana.getName() << " is " << MyBanana.getColor() << ".\n";
    std::cout << "My " << MyGranny.getName() << " is " << MyGranny.getColor() << ".\n";

}

/*Далее по - русски: проект игры. 
* тип правил: Американские правила, количество колод (2)
Классы: класс крупье, класс игрок (базовый) -> класс игрок-человек и игрок AI, класс карта (базовый) -> класс колода, 
класс UI

Класс крупье: переменные: int numCardsDealt, int money, int numCardInDeck; 
функции: void TakeOwnCards, void PlaceOwnCards, void CardsToPlayers, bool CheckWin, bool CheckLose, void HandlePlayerMove,
void MakeMove, int HandleChips;

Класс игрок: переменные: int bet, int numCardsDealt, int money, функции void PlaceBet, 
void MakeMove(), void DoubleDown(), void Split(), void Insure(), void Surrender();

игрок человек + void QuitGame, + void CallForHint;

игрок AI +void CeckCards();

Класс карта: char Value, int points;

класс колода: int numOfCards, счетчик карт определенного достоинства (каждой карты не может быть в колоде больше восьми),
я пока точно не представляю как его реализовать, но делать 13 переменных не представляется лучшим выходом. 
void SetRandomCardValue();

класс UI: void DisplayCards, void DisplayMoney, void displayPoints; 
*/