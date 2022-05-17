#include "Fruit.h"

Fruit::Fruit()
{

}

Fruit::Fruit(std::string uColor) : color(uColor)
{

}

std::string Fruit::getName() const
{
	return name;
}

std::string Fruit::getColor() const
{
	return color;
}

Apple::Apple()
{
}

Apple::Apple(std::string uColor): color(uColor)
{

}

std::string Apple::getName() const
{
	return name;
}

std::string Apple::getColor() const
{
	return color;
}

Banana::Banana()
{
}

std::string Banana::getName() const
{
	return name;
}

std::string Banana::getColor() const
{
	return color;
}

GrannySmith::GrannySmith()
{

}

std::string GrannySmith::getName() const
{
	return name;
}

std::string GrannySmith::getColor() const
{
	return color;
}
