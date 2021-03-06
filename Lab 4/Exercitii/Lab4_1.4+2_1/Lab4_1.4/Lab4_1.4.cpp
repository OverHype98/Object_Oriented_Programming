// Implementati o metoda readStudents in clasa StudentsGroup pentru citirea studentilor

//Optimizati codul de mai sus astfel incit in loc de studentsList[i].setNote(note) si studentsList[i].setName(studentName); sa folosim studentsList[i] = Student(note, studentName);

#include "stdafx.h"


#include <iostream>
#include <string>
using namespace std;
class Student {
private:
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
private:
	int studentsNumber;
	Student *studentsList;
public:
	StudentsGroup(int studentsNumber) {
		this->studentsNumber = studentsNumber;
		studentsList = new Student[studentsNumber];
	}
	void showStudentsInGroup() {
		for (int i = 0; i<this->studentsNumber;i++) {
			cout << i << " " << studentsList[i].getName() << " " << studentsList[i].getNote() << endl;
		}
	}
	void readStudentGroup() {
		int note;
		string studentName;
		for (int i = 0; i<studentsNumber;i++) {
			cout << "student " << i << " name:";
			cin >> studentName;
			cout << "note ";
			cin >> note;
			studentsList[i].setNote(note);
			studentsList[i].setName(studentName);
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

