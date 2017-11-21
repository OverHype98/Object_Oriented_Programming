#pragma once
#include <string>
//declaram variabilele si scriem prototipul functiilor
using namespace std;
class Form {
private:
	string color;
protected:
	string name;
	void setColor(string color);
	string getColor();
public:
	string GetName();
	void SetName(string name);

};
class Rectangle :public Form {
protected:
	int width, height;
public:
	int GetWidth();
	int GetHeight();
	void SetWidth(int width);
	void SetHeight(int height);

};







