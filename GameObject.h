#pragma once
#include <iostream>
#include <string>

using namespace std;

class GameObject
{
public:
	GameObject(); // varsay�lan yap�c�
	GameObject(string , int , float); // A��r� y�klenmi� yap�c�
	~GameObject(); // varsay�lan y�k�c�

	string getName() const;
	int getNumber() const;
	float getHealth() const;

	void setName(string);
	void setNumber(int);
	void setHealth(float);

private:
	string objectName;
	int objectNumber;
	float objectHealth;
};