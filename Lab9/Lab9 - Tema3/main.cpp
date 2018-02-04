#include <iostream>

using namespace std;

class Plant{
public:
virtual void SetColor() = 0;


};


class FoodSource{
public:
virtual void CalculeazaCalorii() = 0;


};

class Carrot:public Plant{
public:
    string color;
    Carrot(string color){
        this->color = color;
    }

    void SetColor(){
        this->color = "portocaliu";
    }


};

class Chicken:public FoodSource{
public:
    int nr;
    Chicken(int nr){
        this->nr = nr;
    }

    void CalculeazaCalorii(){
        this->nr = 230;
    }



};


class Apple:public Plant, FoodSource{
public:

    string color;
    int nr;
    Apple(string color, int nr){
        this->color = color;
        this->nr = nr;
    }

    void SetColor(){
        this->color = "verde";
    }

    void CalculeazaCalorii(){
        this->nr = 35;
    }

};


int main()
{
    Carrot* x = new Carrot("");
    x->SetColor();
    cout<<"Culoare morcov : "<<endl;
    cout<< x->color<<endl;

    cout<<'\n';

    Chicken* y = new Chicken(0);
    y->CalculeazaCalorii();
    cout<<"Calorii pui : "<<endl;
    cout<< y->nr<<"/100g"<<endl;

    cout<<'\n';
    cout<<'\n';

    Apple* z = new Apple("",0);
    z->CalculeazaCalorii();
    z->SetColor();
    cout<<"Culoare mar : "<<endl;
    cout<< z->color<<endl;
    cout<<"Calorii mar : "<<endl;
    cout<< z->nr<<"/100g"<<endl;

    cout<<'\n';

    return 0;
}
