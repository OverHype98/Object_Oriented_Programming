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
    double x, y;
    NumarComplex a,b;
    double modul;

public:


    Operatii (double x = 0, double y = 0){
        this->x = x;
        this->y = y;
    }

    Operatii (NumarComplex a=0, NumarComplex b = 0){
        this->a = a;
        this->b = b;
    }

    static double Modul(NumarComplex z){
		return sqrt(z.real * z.real + z.imaginar * z.imaginar);
	}

	static double Modul(double nr){
		return abs(nr);
	}

	static NumarComplex RidicarePutere(NumarComplex z, int nr){
        NumarComplex result = NumarComplex() ;
        int i = nr;
	    double x = z.real;
	    double y = z.imaginar;
		while (i != 1){
            z.real = z.real * x;
            z.imaginar = z.imaginar * y;
            i = i-1;
		}
		result.real = z.real;
		result.imaginar = z.imaginar;
		return result;
	}

    static void afisareNumar(NumarComplex z)
	{
		cout << z.real << " + (" << z.imaginar << ")i";
	}

    friend class Supraincarcare_Operatori;
};

class Supraincarcare_Operatori: NumarComplex
{

public:
	Supraincarcare_Operatori(double x, double y) :NumarComplex(x, y) {
    }

	double operator~ () {
		return Operatii::Modul(*this);
	}

	NumarComplex operator^ (int nr)	{
        return Operatii::RidicarePutere(*this, nr);
	}

};



int main()
{

    Supraincarcare_Operatori nr(3,5);
    int x = 2;
    cout << ~nr<<endl;


    Operatii::afisareNumar(nr ^ x);
    return 0;
}
