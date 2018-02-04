/*


T.6.2. Rescrieti clasa Operatii de la T.6.1. astfel incit sa existe o metoda statica,
supraincarcată pentru calculul modulului unui double respectiv al unui număr complex.
 Analog, o metodă statică pentru afișarea numărului real sau complex.
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



    static double Modul(NumarComplex z)
	{
		return sqrt(z.real * z.real + z.imaginar * z.imaginar);
	}

	static double Modul(double nr)
	{
		return abs(nr);
	}

    static void afisareNumar(NumarComplex z)
	{
		cout << z.real << " + " << z.imaginar << "i";
	}

	static void afisareNumar(double nr)
	{
		cout << nr;
	}

};




int main()
{
    double x= 2.34;

    NumarComplex* nrcomplex = new NumarComplex(3,5);

    Operatii* nr = new Operatii(x);

    Operatii::afisareNumar(x);
    cout<<'\n';
    Operatii::afisareNumar(*nrcomplex);

//Diferenta e ca daca punem static le putem apela direct prin " :: " , fara a avea nevoie de un obiect declarat(cum am facut in tema 1)

    return 0;
}
