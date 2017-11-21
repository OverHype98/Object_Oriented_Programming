// Lab3.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <list>
#include <string>
using namespace std;




class Student {
private:

	int grade;
	string name;
	list<Student> student_list;
public:
	
	Student(int grade = 8, string name = "Andrei") {
		this->name = name;
		this->grade = grade;
		
		list<Student> student_list;
	}
	void setName(string name) {
		this->name = name;
	}
	string getName() {
		return this->name;
	}
	int getGrade() {
		return this->grade;
	}
	void setGrade(int grade) {
		this->grade = grade;
	}
	
	~Student() {
	
	}
};

int main()
{
	Student a;
    return 0;
}

