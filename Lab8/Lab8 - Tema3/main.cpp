#include <iostream>
#include <time.h>
#include <random>

using namespace std;

class Complex{
public:
	double real, imaginar;
	Complex(double real, double imaginar)
	{
		this->real = real ;
		this->imaginar = imaginar;
	}

	void Afisare(){
        cout<<this->real << " + ("<<this->imaginar<<")i"<<endl;
	}

};

template <class T>
T returneazaValoare( T tip){

	if(tip == 0){
        int a = 5;
        cout<<"Int : " << a;

	}

	if(tip == 1){
        double a = 3.435;
        cout<<"Double : " << a;

	}

	if(tip == 2){
        int a = 2.465346;
        cout<<"Long : " << a;

	}


	if(tip == 3){
        int a = 6;
        int b = 3;
        Complex* z = new Complex(a,b);
        cout<<"NrComplex : ";
        z->Afisare();

	}

}






int main()
{

    srand(time(NULL));
	int tip = rand() % 4;
    returneazaValoare(tip);


    return 0;
}
