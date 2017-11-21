#include "stdafx.h"
#include "Lab_5.h"
#include <iostream>
#include<string>
using namespace std;



	void Form::setColor(string color) {
		this->color = color;
	}
	string Form::getColor() {
		return this->color;
	}

	string Form::GetName() {
		return name;
	}
	void Form::SetName(string name) {
		this->name = name;
	}



	int Rectangle::GetWidth() {
		return width;
	}
	int Rectangle::GetHeight() {
		return height;
	}
	void Rectangle::SetWidth(int width) {
		this->width = width;

	}
	void Rectangle::SetHeight(int height) {
		this->height = height;
	}









