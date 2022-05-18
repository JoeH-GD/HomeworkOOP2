#pragma once
#include <string>



class Person {

private:

	std::string name = "None";
	std::string gender = "None";
	int age = 12;
	int weight = 100;

public:
	Person();
	void setName(std::string userName);
	void setAge(int userAge);
	void setWeight(int userWeight);

	void getPersonInfo();
	
};



class Student : public Person {

private:

	std::string name;
	std::string gender;
	int age;
	int weight;
	static int countStudents;
	int course=1;

public: 
	

	Student();
	Student(std::string userName, std::string userGender, int userAge, int userWeight, int userCourse);

	void setCourse(int userCourse);
	void incrementCourse(int userCourse);
	void getStudentInfo();
	int getStudentCount();
	static int count();
};

