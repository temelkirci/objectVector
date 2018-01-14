#include <iostream>
#include <vector>
#include <string>
#include "GameObject.h"

using namespace std;

void fillVector(vector<GameObject>&); // vektörü GameObject ile doldur
void printVector(const vector<GameObject>&); // vektörün içerisindeki GameObject leri ekrana yazdýr

int main()
{
	vector<GameObject> obj;

	fillVector(obj); 
	printVector(obj);

	system("pause");
	return 0;
}

void fillVector(vector<GameObject>& objectVector)
{
	string name ;
	int number;
	float health;

	cout<<"Kac adet GameObject istiyorsun : ";
	int numberGameObject;
	cin >> numberGameObject;

	cout<<endl;

	for (size_t i=0 ; i != numberGameObject ; ++i)
	{
		cout<<"GameObject Name : ";
		cin>>name;
	
		cout<<"GameObject Number : ";
		cin>>number;

		cout<<"GameObject Health : ";
		cin>>health;

		cout<<endl;

		GameObject GameObject(name , number , health);
		objectVector.push_back(GameObject);
	}
	cout<<endl;
}

void printVector(const vector<GameObject>& objectVector)
{
	int sizeVector = objectVector.size(); // vektörün boyutunu al

	for(size_t i=0 ; i != sizeVector ; ++i)
	{
		cout<<"------------------------------------------"<<endl;
		cout<<"GameObject Name : "<<objectVector[i].getName()<<endl;
		cout<<"GameObject Number : "<<objectVector[i].getNumber()<<endl;
		cout<<"GameObject Health : "<<objectVector[i].getHealth()<<endl;
	}

	cout<<"------------------------------------------"<<endl;
	cout<<endl;
}