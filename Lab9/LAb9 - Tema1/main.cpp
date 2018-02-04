#include <iostream>
#include <string>
#include <cmath>

using namespace std;


class Form
{
protected:
	string name;
	string color;

	Form(string name, string color)
	{
		this->name = name;
		this->color = color;
	}

	~Form(){
	}

public:

	virtual void showMessage(){
		cout << "This is a message for Form class" << "\n";
	}

	virtual int computeArea() = 0;

	virtual int computePerimeter() = 0;

};

class Rectangle :public Form
{
protected:
	int width;
	int height;

public:
	Rectangle(string name, string color, int height, int width) :Form(name, color){
		this->height = height;
		this->width = width;
	}

	~Rectangle(){
		cout << "Delete rectangle" << "\n";
	}

	void setWidth(int width){
		this->width = width;
	}

	int getWidth(){
		return this->width;
	}

	void setHeight(int height){
		this->height = height;
	}

	int getHeight(){
		return this->height;
	}

	string getColor(){
		return this->color;
	}

	void showMessage(){
		cout << "This is a message for Rectangle class" << "\n";
	}

	int computeArea(){
		return (this->width * this->height);
	}

	int computePerimeter(){
		return (2 * this->width + 2 * this->height);
	}
};

class Square :public Form
{
private:
	int side;

public:
	Square(string name, string color, int side) :Form(name, color){
		this->side = side;
	}

	~Square(){
		cout << "Delete square" << "\n";
	}

	void setSide(int side){
		this->side = side;
	}

	int getSide(){
		return this->side;
	}

	void showMessage(){
		cout << "This is a message for Square class" << "\n";
	}

	int computeArea(){
		return (this->side*this->side);
	}

	int computePerimeter(){
		return (4 * this->side);
	}
};

int main(){

	Form* f;
	Rectangle* r = new Rectangle("rectangle", "blue", 40, 25);
	Square* s = new Square("square", "orange", 9);



	cout << "Perimetrul dreptunghiului: " << r->computePerimeter() << "\n";
	cout << "Perimetrul patratului: " << s->computePerimeter() << "\n";





return 0;
}
