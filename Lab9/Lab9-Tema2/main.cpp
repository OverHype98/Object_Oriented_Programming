#include <iostream>
#include <string>

using namespace std;

class Weapon{
protected:
    int damage;
    string ammo;

public:
    Weapon(int damage, string ammo){
        this->damage = damage;
        this->ammo = ammo;
    }

virtual void Damage() = 0;

virtual void Ammo() = 0;

virtual ~Weapon(){};

};


class Sling:public Weapon{
public:

    Sling(int damage,string ammo):Weapon(damage, ammo){}

    void Damage(){
        this->damage = 1;
    }

    void Ammo(){
        this->ammo = "Small stones";
    }

    int getDamage(){
        return this->damage;
    }

    string getAmmo(){
        return this->ammo;
    }



};



class AtomicBomb:public Weapon{
public:

    AtomicBomb(int damage,string ammo):Weapon(damage, ammo){}

    void Damage(){
        this->damage = 99999999;
    }

    void Ammo(){
        this->ammo = "TNT";
    }

    int getDamage(){
        return this->damage;
    }

    string getAmmo(){
        return this->ammo;
    }



};

class Gun:public Weapon{
public:
    int fire_rate;

    virtual void FireRate() = 0;

    Gun(int damage,string ammo, int fire_rate):Weapon(damage, ammo){}

    void Damage(){
        this->damage = 10;
    }

    void Ammo(){
        this->ammo = "Bullets";
    }

    int getDamage(){
        return this->damage;
    }

    string getAmmo(){
        return this->ammo;
    }



};

class Rifle:public Gun{
public:
    Rifle(int damage, string ammo, int fire_rate):Gun(damage,ammo,fire_rate){}

    void Damage(){
        this->damage = 10;
    }

    void Ammo(){
        this->ammo = "Bullets 5.52mm";
    }

    void FireRate(){
        this->fire_rate = 5;

    }

    int getDamage(){
        return this->damage;
    }

    string getAmmo(){
        return this->ammo;
    }

    int getFireRate(){
        return this->fire_rate;
    }

};

class MachineGun:public Rifle{
public:
    MachineGun(int damage, string ammo, int fire_rate):Rifle(damage,ammo,fire_rate){}

    void Damage(){
        this->damage = 15;
    }

    void Ammo(){
        this->ammo = "Bullets 7.62mm";
    }

    void FireRate(){
        this->fire_rate = 12;

    }

    int getDamage(){
        return this->damage;
    }

    string getAmmo(){
        return this->ammo;
    }

    int getFireRate(){
        return this->fire_rate;
    }





};



int main()
{
    Sling* prastie= new Sling(0,"");
    prastie->Ammo();
    prastie->Damage();
    cout<<" Prastie "<<endl;
    cout<<"AMMO :"<<prastie->getAmmo()<<endl;
    cout<<"Damage : "<<prastie->getDamage()<<endl;

    cout<<'\n';

    AtomicBomb* bomba= new AtomicBomb(0,"");
    bomba->Ammo();
    bomba->Damage();
    cout<<" Grenade "<<endl;
    cout<<"AMMO :"<<bomba->getAmmo()<<endl;
    cout<<"Damage : "<<bomba->getDamage()<<endl;

    cout<<'\n';

    Rifle* ak = new Rifle(0,"",0);
    ak->Ammo();
    ak->Damage();
    ak->FireRate();
    cout<<" Kalashnikov "<<endl;
    cout<<"AMMO :"<<ak->getAmmo()<<endl;
    cout<<"Damage : "<<ak->getDamage()<<endl;
    cout<<"Fire rate : "<<ak->getFireRate()<<endl;

    cout<<'\n';

    MachineGun* M24 = new MachineGun(0,"",0);
    M24->Ammo();
    M24->Damage();
    M24->FireRate();
    cout<<" M24 "<<endl;
    cout<<"AMMO :"<<M24->getAmmo()<<endl;
    cout<<"Damage : "<<M24->getDamage()<<endl;
    cout<<"Fire rate : "<<M24->getFireRate()<<endl;

//Apar probleme daca incercam sa folosim o clasa abstracta la declarare .De exemplu nu putem declara o arma cu clasa "Gun" , trebuie cu una din clasele derivate (Rifle/MachineGun)
    return 0;
}
