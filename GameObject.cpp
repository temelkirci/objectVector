#include "GameObject.h"

GameObject :: GameObject()
{
	objectName = "";
	objectNumber = 0;
	objectHealth = 0.0;
}

GameObject :: GameObject(string name , int number , float health)
{
	objectName = name;
	objectNumber = number;
	objectHealth = health;
}

GameObject :: ~GameObject()
{
	
}

string GameObject :: getName() const
{
	return objectName;
}

int GameObject :: getNumber() const
{
	return objectNumber;
}

float GameObject :: getHealth() const
{
	return objectHealth;
}


void GameObject :: setName(string name)
{
	objectName = name;
}

void GameObject :: setNumber(int number)
{
	objectNumber = number;
}

void GameObject :: setHealth(float health)
{
	objectHealth = health;
}