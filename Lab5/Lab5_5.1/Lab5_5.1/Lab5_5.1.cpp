// Lab5_5.1.cpp : Defines the entry point for the console application.
//Scrieti o clasa From cu un membru variabila name. Scrieti un getter/setter pentru name. Folositi clasa. Derivati o clasa Rectangle din Form. Clasa Rectangle are membrii witdh si height.
//Scrieti pentru fiecare un getter si un setter. Pentru Rectangle, setati un name si un width si afisati-le.
//in clasa Form declarati private: string color; si un getter/setter, private sau protected. Accesati-le din Rectangle sau prin r si verificati daca sunt disponibili.
#include "stdafx.h"
#include <iostream>
#include<string>
using namespace std;

class Form {
private:
	string color;
protected:
	string name;
	string setColor(string color) {
		this->color = color;
	}
	string getColor() {
		return this->color;
	}
public:
	string GetName() {
		return name;
	}
	void SetName(string name) {
		this->name = name;
	}
	
};
class Rectangle :public Form {
protected:
	int width, height;
public:
	int GetWidth() {
		return width;
	}
	int GetHeight() {
		return height;
	}
	void SetWidth(int width){
		this->width = width;

	}
	void SetHeight(int height) {
		this->height = height;
	}

};







int main()
{
	Form *f = new Form();
	f->SetName("forma1");
	cout << "forma: " << f->GetName() << endl;

	Rectangle *r = new Rectangle();
	r->SetWidth(5);
	r->SetName("rectangle 1");
	
	cout << "rectangle name: " << r->GetName() << " width:" << r->GetWidth() << endl;
	//r->setColor("blue");	da eroare

    return 0;
}

