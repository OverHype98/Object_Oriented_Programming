// Lab_5.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"



#include "stdafx.h"
#include "Lab_5.h"
#include <iostream>
#include<string>
using namespace std;







int main()
{
	Form *f = new Form();
	f->SetName("forma1");
	cout << "forma: " << f->GetName() << endl;

	Rectangle *r = new Rectangle();
	r->SetWidth(5);
	r->SetName("rectangle 1");

	cout << "rectangle name: " << r->GetName() << " width:" << r->GetWidth() << endl;
	//r->setColor("blue");	da eroare

	return 0;
}



