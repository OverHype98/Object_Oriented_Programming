// Lab4_5.2TT.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


class Dessert {
protected:
	string name;
	int calories,pret;
public:

	 Dessert(int pret,string name) {
		this->pret = pret;
		this->name = name;
	}
	 string getName() {
		 return this->name;
	}
	 void setName(string name) {
		 this->name = name;
	 }
	 int getCalories() {
		 return this->calories;
	 }
	 void setCalories(int calories) {
		 this->calories = calories;
	 }
	 ~Dessert() {
		 cout << "Dessert's destructor";
	 }
	 void printPrice() {

		 cout << "Not available " << '\n';

	 }
	 int getPrice() {

		 return this->pret;

	 }

};


class Prajitura : public Dessert {
protected:
	int calories;
public:
	Prajitura(int pret, string name, int calories) :Dessert(pret, name)
		{ this->calories = calories; };

	void setCalories(int calories) {
		this->calories = calories;
	}
	int getCalories() {
		return this->calories;
	}

	void printPrice() {

		cout << getName() << "-->" << getCalories() << "kcal  \n";

	}
};
class tortAniversare : public Dessert {
protected:
	int calories;
public:
	tortAniversare(int pret, string name, int calories) :Dessert(pret, name)
	{ this->calories = calories; };

	void setCalories(int calories) {
		this->calories = calories;
	}
	int getCalories() {
		return this->calories;
	}
	void printPrice() {
		cout << getName() << "--> " << getCalories() << " kcal \n";
	}
};




int main()
{
	Dessert *a = new Dessert(0, "a");
	cout << "Desert name: " << a->getName() << '\n';
	cout << "Desert price: " << a->getPrice() << "$$ \n";
	

	Prajitura *savarina = new Prajitura(10, "amandina", 500);
	cout << "Desert name: " << savarina->getName() << '\n';
	cout << "Desert price: " << savarina->getPrice() << "$$ \n";
	cout<<savarina->getCalories()<<" kcal\n";

	tortAniversare *tort_capsuni = new tortAniversare(20, "tort cu capsuni", 5000);
	cout << "Desert name: " << tort_capsuni->getName() << '\n';
	cout << "Desert price: " << tort_capsuni->getPrice() << "$$ \n";
	
	cout<< tort_capsuni->getCalories() <<" kcal\n";

    return 0;
}

