// Lab5_5.2T.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>
#include <string>
using namespace std;
class Form {
private:
	string color;
protected:
	string name;
	void setColor(string color) {
		this->color = color;
	}
public:
	Form(string name) {
		this->name = name;
	}
	string getName() {
		return this->name;
	}
	void setName(string name) {
		this->name = name;
	}
	void showMessage() {
		cout << "mesaj din Form" << endl;
	}
	void calculArie() {
		cout << "Not available  for Form\n";
	}
	void calculPerimetru() {
		cout << "Not available for Form\n";
	}
};
class Rectangle :public Form {
protected:
	int width;
	int height;
public:
	Rectangle(string name, int width, int height) :Form(name) {
		this->width = width;
		this->height = height;
	}
	void setWidth(int width) {
		this->width = width;
	}
	int getWidth() {
		return this->width;
	}
	void showMessage() {
		Form::showMessage(); // operator :: folosit pentru a apela showMessage din clasa de baza
		cout << "mesaj din Rectangle" << endl;
	}
	void calculArie() {
		cout << getName() << " area: " << width * height << '\n';

	}
	void calculPerimetru() {
		cout << getName() << " perimeter: " << height*2 + width*2 << " \n ";

	}
};
class Square :public Form {
protected:
	int side;
public:
	Square(string name, int side) :Form(name) {
		this->side = side;
	}
	void setSide(int side) {
		this->side = side;
	}
	int getSide() {
		return this->side;
	}
	void showMessage() {
		cout << "mesaj din Square" << endl;
	}
	void calculArie() {

		cout << getName() << " area: " << side * side << '\n';

	}
	void calculPerimetru() {
		cout<<getName()<< "    perimeter : "<< 4*side <<" \n ";
	}
};
int main()
{
	Form *f = new Form("forma1");

	f->calculArie();
	cout << '\n';
	f->calculPerimetru();
	Rectangle *r = new Rectangle("rectangle 1", 1, 2);

	r->calculArie();
	cout << '\n';
	r->calculPerimetru();

	Square *s = new Square("square 1", 20);

	s->calculArie();
	cout << '\n';
	s->calculPerimetru();

	return 0;
}
