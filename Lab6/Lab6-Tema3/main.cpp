/*
T.6.3. Scrieti o clasa Operatii care va avea 2 constructori cu parametrii doi double respectiv două clase NumarComplex.
Clasa Operatii implementeaza metode supraîncărcate pentru calculul sumei, diferenței, produsului și împărțirii a două numere, double sau NumarComplex.
Metodele folosite vor fi supraîncărcate (același nume).
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


    void Adunare(double x , double y){
        cout << "Suma : " <<x+y<<endl;

    }

    void Adunare(NumarComplex a, NumarComplex b){
        cout << "Suma : "<<(a.real+b.real)<<" + "<<((a.imaginar+b.imaginar))<<"i"<<endl;
    }

     void Diferenta(double x , double y){
        cout << "Diferenta : " <<x-y<<endl;

    }

    void Diferenta(NumarComplex a, NumarComplex b){
        cout << "Diferenta : "<<(a.real-b.real)<<" + ("<<(a.imaginar-b.imaginar)<<")i"<<endl;
    }

    void Inmultire(double x , double y){
        cout << "Inmultire : " <<x*y<<endl;

    }

    void Inmultire(NumarComplex a, NumarComplex b){
        cout << "Inmultire : "<<(a.real*b.real)<<" + ("<<(a.imaginar*b.imaginar)<<")i"<<endl;
    }

    void Impartire(double x , double y){
        cout << "Impartire : " <<x/y<<endl;

    }

    void Impartire(NumarComplex a, NumarComplex b){
        cout << "Impartire : "<<(a.real/b.real)<<" + ("<<(a.imaginar/b.imaginar)<<")i"<<endl;
    }


};




int main()
{
     double x = 2.34;
     double y = 1.11;

    NumarComplex* nrcomplex1 = new NumarComplex(3,5);
    NumarComplex* nrcomplex2 = new NumarComplex(2,4);

    Operatii* nr = new Operatii(x,y);

    nr->Adunare(x,y);
    nr->Diferenta(x,y);
    nr->Inmultire(x,y);
    nr->Impartire(x,y);

    cout<<endl;

    nr->Adunare(*nrcomplex1, *nrcomplex2);
    nr->Diferenta(*nrcomplex1, *nrcomplex2);
    nr->Inmultire(*nrcomplex1, *nrcomplex2);
    nr->Impartire(*nrcomplex1, *nrcomplex2);

    return 0;
}

