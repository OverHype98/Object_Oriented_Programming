// Lab4_1.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Students.h"


using namespace std;

int main()
{
	StudentsGroup *group = new StudentsGroup(3);
	group->showStudentsInGroup();
	return 0;
}