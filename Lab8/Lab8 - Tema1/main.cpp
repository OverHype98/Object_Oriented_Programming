#include <iostream>
#include <math.h>

using namespace std;


 template <class T>
 T GetMax (T a, T b) {

    T result;
    result = (a>b)? a : b;

    return (result);

}

template <class T>
 T GetMin (T a, T b) {

    T result;
    result = (a<b)? a : b;

    return (result);

}





class Complex{
public:
	double real, imaginar, dist;
	Complex(double real, double imaginar)
	{
		this->real = real ;
		this->imaginar = imaginar;
		this->dist = sqrt((this->imaginar*this->imaginar) + (this->real*this->real));
	}

};


 int main () {

     int i=5, j=6, k;
     long l=10, m=5, n;
     k=GetMax<int>(i,j);
     n=GetMax<long>(l,m);
     cout << k << endl;
     cout << n << endl;

     cout << '\n';


     Complex x(2.0 ,3.2);
     Complex y(5.1, 1.2);


     double Minim = GetMin<double>(x.dist, y.dist);
     cout<< Minim;

     return 0;
}


