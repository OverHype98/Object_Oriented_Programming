/*


T.6.1 Scrieti o clasa Operatii care va avea 2 constructori cu parametrii un double respectiv o clasa NumarComplex.
Definiti clasa NumarComplex. Clasa Operatii implementeaza o metodă pentru calculul modulului numartului transmis ca parametru, doule sau numar complex.
Clasa Operatii va avea o metoda afisare, supraîncărcată, care afișează un număr real sau complex.

*/



#include <iostream>
#include <cmath>

using namespace std;


class NumarComplex{
public:
    int real;
    int imaginar;

    NumarComplex( int real=0, int imaginar=0){
        this->real = real;
        this->imaginar = imaginar;
    }



};

class Operatii:NumarComplex {

protected:
    double x;
    NumarComplex y;
    double modul;

public:


    Operatii (double x = 0){
        this->x = x;
    }

    Operatii (NumarComplex y=0){
        this->y = y;
    }



    double Modul(NumarComplex z)
	{
		return sqrt(z.real * z.real + z.imaginar * z.imaginar);
	}

	double Modul(double nr)
	{
		return abs(nr);
	}

	void afisareNumar(NumarComplex z)
	{
		cout << z.real << " + " << z.imaginar << "i";
	}

	void afisareNumar(double nr)
	{
		cout << nr;
	}

};




int main()
{
    double x= 2.34;

    NumarComplex* nrcomplex = new NumarComplex(3,5);

    Operatii* nr = new Operatii(x);


    nr->afisareNumar(*nrcomplex); // Punem " * " fiindca e pointer la un obiect din alta clasa
    cout<<endl;
    nr->afisareNumar(x);

    return 0;
}
