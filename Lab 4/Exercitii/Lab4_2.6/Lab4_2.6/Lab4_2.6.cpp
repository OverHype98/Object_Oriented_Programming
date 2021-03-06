// Lab4_2.6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


// Lab4_2.4.cpp : Defines the entry point for the console application.
//Scrieti o metoda care sorteaza tabloul / lista de Student, studentsList, dupa name/note

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
	void sortStudentsByNote() {

		student_list.sort([](Student & student1, Student & student2) { return student1.getNote() < student2.getNote(); });

	}

	void sortStudentsByName() {

		student_list.sort([](Student & student1, Student & student2) { return student1.getName().compare(student2.getName()) < 0; });

	}
	Student noteEquals5() {
		Student *note_5 = new Student(5, " ");
		for (auto it = student_list.begin();it != student_list.end();it++) {
			if (note_5->getNote() == it->getNote()) {
				*note_5 = *it;
				break;
			}

		}
		
		return *note_5;
	}
};

int main()
{

	StudentsGroup *studentsGroup = new StudentsGroup(3);
	Student *f = new Student();
	studentsGroup->readStudentGroup();
	studentsGroup->showStudentsInGroup();
	studentsGroup->sortStudentsByNote();
	studentsGroup->sortStudentsByName();
	studentsGroup->showStudentsInGroup();
	*f = studentsGroup->noteEquals5();
	
	cout << "\nThe first student with the grade 5 : " << f->getName();
	
	
	return 0;
}
