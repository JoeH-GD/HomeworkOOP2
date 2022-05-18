#include "Person.h"
#include <iostream>

int Student::countStudents = 0;

Person::Person()
{
}

void Person::setName(std::string userName)
{
	name = userName;
}

void Person::setAge(int userAge)
{
	if (userAge>0) age = userAge;
}

void Person::setWeight(int userWeight)
{
	if (userWeight > 0) weight = userWeight;
}

void Person::getPersonInfo()
{
	{
		std::cout << "Name: " << name << std::endl;
		std::cout << "Gender: " << gender << std::endl;
		std::cout << "Age: " << age << std::endl;
		std::cout << "Weight " << weight << std::endl;
	}

	
}


Student::Student(std::string userName, std::string userGender, int userAge, int userWeight, int userCourse):
	                                    name(userName), gender(userGender), age(userAge), weight(userWeight), course(userCourse)
{
	countStudents++;
}

void Student::setCourse(int userCourse)
{
	if (userCourse > 0) course = userCourse;
}

int Student::count()
{
	return countStudents;
}

void Student::incrementCourse(int userCourse)
{
	if (userCourse > course) course = userCourse;
}

void Student::getStudentInfo()
{

	std::cout << "Name: " << name << std::endl;
	std::cout << "Gender: " << gender << std::endl;
	std::cout << "Age: " << age << std::endl;
	std::cout << "Weight " << weight << std::endl;
	std::cout << "Course: " << course << std::endl;
}

int Student::getStudentCount()
{
	return countStudents;
}

