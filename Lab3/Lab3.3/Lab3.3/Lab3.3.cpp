/// 3. Creati o lista simplu inlantuita de studenti ( class Student). Afisati
/// lista. Proiectati structura astfel incit sa pot afisa lista plecind de la
/// oricare element al ei. Gasiti un mod simplu de a numara citi studenti s-au creat.

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
	int nr_students = 0;
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


	void readStudent() {
		int students_read;
		cin >> students_read;

		for (int i = 0; i < students_read; i++) {
			nr_students++;
			cout << "Student " << i << " name: ";
			cin >> name;
			cout << "Student " << i << " grade: ";
			cin >> grade;

			Student student1(grade, name);
			student_list.push_back(student1);

		}
	}

	void showStudents() {

		for (auto it = student_list.begin(); it != student_list.end(); it++) {

			cout << it->getName() << ": " << it->getGrade() << '\n';

		}
	}



};



int main()
{
	Student a;
	a.readStudent();
	a.showStudents();
	cout << a.nr_students;
    return 0;
}

