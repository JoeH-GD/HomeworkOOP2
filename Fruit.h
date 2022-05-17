#pragma once
#include <string>

class Fruit {

private:
	std::string name = "fruit";
	std::string color = "any color";

public:

	Fruit();

	Fruit(std::string uColor);

	std::string getName() const;

	std::string getColor() const;

	//No setters because YANGI
};

class Apple : public Fruit
{
private:

	std::string name = "apple";
	std::string color = "green";

public:
	Apple();
	Apple(std::string uColor);

	std::string getName() const;

	std::string getColor() const;
};

class Banana : public Fruit {
private:

	std::string name = "banana";
	std::string color = "yellow";

public:
	
	Banana();

	std::string getName() const;

	std::string getColor() const;
};

class GrannySmith : public Apple {

private:
	//I just wanted to see if I could do less hard coding
	std::string name = "Granny Smith " + Apple::getName();
	std::string color = "green";

public:

	GrannySmith();

	std::string getName() const;

	std::string getColor() const;

};