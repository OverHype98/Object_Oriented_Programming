/*
T.6.4. Rescrieți clasa Operații de la T.6.4. care să folosească metode statice, supraîncărcate,
 cu doi parametrii (două numere double respectiv două NumarComplex) și să calculeze suma, diferența,
 produsul și împărțirea parametrilor.

*/
#include <iostream>
#include <cmath>

using namespace std;


class NumarComplex{
public:
    double real;
    double imaginar;

    NumarComplex( double real=0, double imaginar=0){
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


    static void Adunare(double x , double y){
        cout << "Suma : " <<x+y<<endl;

    }

    static void Adunare(NumarComplex a, NumarComplex b){
        cout << "Suma : "<<(a.real+b.real)<<" + "<<((a.imaginar+b.imaginar))<<"i"<<endl;
    }

    static void Diferenta(double x , double y){
        cout << "Diferenta : " <<x-y<<endl;

    }

    static void Diferenta(NumarComplex a, NumarComplex b){
        cout << "Diferenta : "<<(a.real-b.real)<<" + ("<<(a.imaginar-b.imaginar)<<")i"<<endl;
    }

    static void Inmultire(double x , double y){
        cout << "Inmultire : " <<x*y<<endl;

    }

    static void Inmultire(NumarComplex a, NumarComplex b){
        cout << "Inmultire : "<<(a.real*b.real)<<" + ("<<(a.imaginar*b.imaginar)<<")i"<<endl;
    }

    static void Impartire(double x , double y){
        cout << "Impartire : " <<x/y<<endl;

    }

    static void Impartire(NumarComplex a, NumarComplex b){
        cout << "Impartire : "<<(a.real/b.real)<<" + ("<<(a.imaginar/b.imaginar)<<")i"<<endl;
    }


};




int main()
{
     double x = 2.34;
     double y = 1.11;

    NumarComplex* nrcomplex1 = new NumarComplex(3,5);
    NumarComplex* nrcomplex2 = new NumarComplex(2,4);


    Operatii::Adunare(x,y);
    Operatii::Diferenta(x,y);
    Operatii::Inmultire(x,y);
    Operatii::Impartire(x,y);

    cout<<endl;

    Operatii::Adunare(*nrcomplex1, *nrcomplex2);
    Operatii::Diferenta(*nrcomplex1, *nrcomplex2);
    Operatii::Inmultire(*nrcomplex1, *nrcomplex2);
    Operatii::Impartire(*nrcomplex1, *nrcomplex2);

    return 0;
}

