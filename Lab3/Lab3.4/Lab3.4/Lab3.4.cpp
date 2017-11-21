// Lab3.4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;



class Car {

private:
	string color;
	int speed;
	string name;
	int durability;
	Car() {
		
	}
public:
	void showCar() {
		cout << "Color = " << color<<endl;
		cout << "Speed = " << speed << endl;
		cout << "Name = " << name << endl;
		cout << "Durability = " << durability << endl;

	}

	Car(string color, string name): Car() 
	{
		this->color = color;
		this->name = name;

	}
	Car(string color, string name, int speed, int durability): Car(color, name) {
		this->speed = speed;
		this->durability = durability;
	}
};

int main()
{
	Car mustang("negru", "OverHype", 250, 3);

	mustang.showCar();

    return 0;
}

