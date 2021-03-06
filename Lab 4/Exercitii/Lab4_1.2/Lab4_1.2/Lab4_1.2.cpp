// Lab4_1.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//Modificati codul astfel incit in constructorii Student si StudentsGroup sa folositi cuvintul cheie this.

using namespace std;
class Student {
private:
	int note;
	string name;
public:
	Student(int note = 0) {
		this->note = note;
	}
	void setNote(int n) {
		note = n;
	}
	int getNote() {
		return note;
	}
};
class StudentsGroup {
private:
	int studentsNumber;
	Student *studentsList;
public:
	StudentsGroup(int studentsNumber = 0) {
		this->studentsNumber = studentsNumber;
		studentsList = new Student[studentsNumber];
	}
	void showStudentsInGroup() {
		for (int i = 0; i<studentsNumber;i++) {
			cout << i << " " << studentsList[i].getNote() << endl;
		}
	}
};
int main()
{
	StudentsGroup *group = new StudentsGroup(3);
	group->showStudentsInGroup();
	return 0;
}
