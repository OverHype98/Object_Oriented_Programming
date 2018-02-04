#include <iostream>
#include <list>

using namespace std;

class Persoana{
public:
            string nume;
            int varsta;

            Persoana(string nume,int varsta){
                this->nume = nume;
                this->varsta = varsta;
            }

            static Persoana Adaugare(){
                string nume;
                int varsta;
                cout<<"Ati ales sa creati o lista de persoane. Introduceti numele/varsta pt fiecare persoana :"<<endl;
                cin>>nume;
                cin>>varsta;
                return Persoana(nume, varsta);


            }

            void Afisare(){

                cout<<this->nume<<" "<<this->varsta<<endl;

            }

};



class Angajat{
        public:
            string nume;
            int aniVechime;

            Angajat(string nume,int aniVechime){
                this->nume = nume;
                this->aniVechime = aniVechime;
            }

            static Angajat Adaugare(){
                string nume;
                int aniVechime;
                cout<<"Ati ales sa creati o lista de angajati. Introduceti numele/Ani de vechime, pt fiecare persoana :"<<endl;
                cin>>nume;
                cin>>aniVechime;
                return Angajat(nume, aniVechime);


            }

             void Afisare(){

                cout<<this->nume<<" "<<this->aniVechime<<endl;

            }



};




class Parinte{
    public:
        string nume;
        int varsta;
        int nrCopii;

        Parinte(string nume, int varsta,int nrCopii){
            this->nume = nume;
            this->varsta = varsta;
            this->nrCopii = nrCopii;

        }

        static Parinte Adaugare(){
                string nume;
                int varsta, nrCopii;
                cout<<"Ati ales sa creati o lista de persoane. Introduceti numele/varsta/nr. de copii, pt fiecare persoana :"<<endl;
                cin>>nume;
                cin>>varsta;
                cin>>nrCopii;
                return Parinte(nume, varsta, nrCopii);


        }

         void Afisare(){

                cout<<this->nume<<" "<<this->varsta<<" "<<this->nrCopii<<endl;

            }

};

template <class T>
class CreareLista
{
public:
	int nr;

	list<T> lista;

	CreareLista(int nr)
	{
		this->nr = nr;

		for (int i = 1; i <= this->nr; ++i)
		{
			lista.push_back(T::Adaugare());
		}
	}

	void AfisareLista()
	{
		for (auto it = lista.begin(); it != lista.end(); ++it)
		{
			it->Afisare();
		}
	}

};

int main()
{
    cout<<"     MENU     \n";
    cout<<" 1 -> Lista persoane \n";
    cout<<" 2 -> Lista angajati \n";
    cout<<" 3 -> Lista parinti \n";
    cout<<" Introduceti alegerea dorita (1/2/3) : ";

    int alegere;
    cin>> alegere;

    if(alegere == 1){
        CreareLista<Persoana>* p = new CreareLista<Persoana>(2);
        p->AfisareLista();
    }

    if(alegere == 2){
        CreareLista<Angajat>* p = new CreareLista<Angajat>(2);
        p->AfisareLista();
    }

    if(alegere == 3){
        CreareLista<Parinte>* p = new CreareLista<Parinte>(2);
        p->AfisareLista();
    }



    return 0;
}
