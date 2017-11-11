#pragma once

class Student {
private:
	int note;
	std::string name;
public:
	Student();
	void setNote(int n);
	int getNote();
};
class StudentsGroup {
private:
	int studentsNumber;
	Student *studentsList;
public:
	StudentsGroup(int n);
	void showStudentsInGroup();
};
