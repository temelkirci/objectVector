#pragma once
#include <iostream>
#include <string>

using namespace std;

class GameObject
{
public:
	GameObject(); // varsayýlan yapýcý
	GameObject(string , int , float); // Aþýrý yüklenmiþ yapýcý
	~GameObject(); // varsayýlan yýkýcý

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