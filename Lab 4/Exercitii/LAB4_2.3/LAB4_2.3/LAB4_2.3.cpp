// LAB4_2.3.cpp : Defines the entry point for the console application.
//Implementati studentsList cu lista simplu sau dublu inlantuita de Student

#include "stdafx.h"




#include <iostream>
#include <list>
#include <string>

using namespace std;

class Student {

	int note;
	string name;

public:
	Student(int note = 0, string name = "Joe Doe") {
		this->note = note;
		this->name = name;
	}
	void setNote(int n) {
		this->note = n;
	}
	int getNote() {
		return this->note;
	}
	string getName() {
		return this->name;
	}
	void setName(string name) {
		this->name = name;
	}

};

class StudentsGroup {

	int studentsNumber;
	list<Student> student_list;

public:

	StudentsGroup(int studentsNumber) {

		this->studentsNumber = studentsNumber;
		list<Student> student_list;

	}
	void showStudentsInGroup() {

		for (auto it = student_list.begin(); it != student_list.end(); it++) {

			cout << it->getName() << ": " << it->getNote() << '\n';

		}
	}

	void readStudentGroup() {
		string student_name;
		int student_note;

		for (int i = 0; i < this->studentsNumber; i++) {

			cout << "Student " << i << " name: ";
			cin >> student_name;
			cout << "Student " << i << " note: ";
			cin >> student_note;

			Student f(student_note, student_name);
			student_list.push_back(f);

		}
	}
};

int main()
{

	StudentsGroup *studentsGroup = new StudentsGroup(3);
	studentsGroup->readStudentGroup();
	studentsGroup->showStudentsInGroup();


	return 0;
}
