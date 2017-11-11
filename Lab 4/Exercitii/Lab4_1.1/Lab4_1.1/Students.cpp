#include "stdafx.h"
#include "Students.h"
using namespace std;

Student::Student() {
	note = 0;
}
void Student::setNote(int n) {
	note = n;
}
int Student::getNote() {
	return note;
}
StudentsGroup::StudentsGroup(int n) {
	studentsNumber = n;
	studentsList = new Student[studentsNumber];
}
void StudentsGroup::showStudentsInGroup() {
	for (int i = 0; i < studentsNumber;i++) {
		cout << i << " " << studentsList[i].getNote() << endl;
	}
}