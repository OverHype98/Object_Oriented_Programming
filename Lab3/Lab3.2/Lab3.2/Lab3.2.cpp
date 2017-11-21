/// 2. Folositi un membru variabila declarat static cu care sa numarati citi
/// studenti sunt creati in acest moment. Adresati membrul static in
/// constructor si destructor pentru a incrementa, decrementa numarul de studenti.

#include "stdafx.h"
#include <iostream>
#include <list>
#include <string>
using namespace std;




class Student {
private:

	int grade;
	string name;
	
public:
	static int nr_students;
	Student(int grade = 8, string name = "Andrei") {
		this->name = name;
		this->grade = grade;
		nr_students++;
		
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
	int getNrStudents() {
		return nr_students;
	}
	~Student() {
		nr_students--;
	}


	



};
int Student::nr_students = 0;

int main()
{
	Student a;
	
	cout << a.nr_students;
    return 0;
}

