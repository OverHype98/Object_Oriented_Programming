/*

T.7.2 Proiectați o structură pentru gestionarea unei liste de studenți utilizănd și clasa Persoană și Sofer.
Un student este o persoana și poate fi și sofer. Folosiți clase prietene și imbricate. Aplicația trebuie să permită:
• Crearea unor grupe de studenți
• Adăugarea/ștergerea/modificarea unui student dintr-o grupă
• Afișarea tuturor studenților dintr-o grupă
• Schimbarea numelui grupei, considerată ca trecerea în an superior
• Mutarea unui student dintr-o grupă în alta


*/


#include <iostream>
#include <list>
#include <string>
#include <string.h>

using namespace std;




class Persoana{

    public:
    Persoana() {}

    class Sofer{
        public:
            string nume;
            string categoriePermis;

            Sofer(string nume , string categoriePermis){
                this->nume = nume;
                this->categoriePermis = categoriePermis;
            }

    };
  friend class Student;

};


class Student {
public:
    string nume;
    int varsta;
    int sofer;

    Student (string nume , int varsta , int sofer){
        this->nume = nume;
        this->varsta = varsta;
        this->sofer = sofer;

        if (sofer == 1 ){
            string categorie;
            cout<<"Ce categorie de permis ? (A,B,C,D,E) \n";
            cin>>categorie;
            Persoana::Sofer(nume, categorie);
        }
    }

    friend class Grupa;
};


class Grupa {
public:
    string nume;
    int an;
    int nrStudenti;

    list<Student> GrupaStudenti;

    Grupa(string nume , int an, int nrStudenti){
        this->nume = nume;
        this->an = an;
        this->nrStudenti = nrStudenti;

        for(int i=1; i<=nrStudenti ; i++){
            string nume;
            int varsta;
            int sofer;
            cout << "Introduceti detaliile unui student : \n";
            cin>>nume;
            cin>>varsta;
            cin>>sofer;

            this->GrupaStudenti.push_back(Student(nume,varsta,sofer));

        }

    }

    void AdaugaStudent(string nume, int varsta, int sofer){

		this->GrupaStudenti.push_back(Student(nume, varsta, sofer));
	}



    void StergeStudent(string nume){
        auto it = GrupaStudenti.begin();
        for (auto it = GrupaStudenti.begin(); it != GrupaStudenti.end(); ) {
            if (it->nume == nume)
                it = GrupaStudenti.erase(it);
            else ++it;

        }

    }

    void ModificaStudent(string nume, string numeNou){
        auto it = GrupaStudenti.begin();
        for(it = GrupaStudenti.begin(); it != GrupaStudenti.end(); ++it ){
            if(it->nume == nume ){
                it->nume = numeNou;
            }
        }
    }

    void SchimbareGrupa(string nume, list<Student> AltaGrupa){

		auto it = this->GrupaStudenti.begin();
		for (it = this->GrupaStudenti.begin(); it != this->GrupaStudenti.end();) {
            if(it->nume == nume ){
                AltaGrupa.push_back(*it);
                it = this->GrupaStudenti.erase(it);
            }
            else ++it;
        }
    }

    void ArataStudenti(){
        auto it = this->GrupaStudenti.begin();
        for (it = this->GrupaStudenti.begin(); it != this->GrupaStudenti.end() ; ++it) {
                cout << it->nume << "  " << it->varsta << "  " <<it->sofer <<"\n";

        }
    }

    void AnUrmator(){
        this->an = this->an +1;
    }


};






int main()
{
    Grupa* grupa1 = new Grupa("CE",2,3);
    Grupa* grupa2 = new Grupa("CR",2,2);

    grupa1->ArataStudenti();

    cout<<"\n";
    grupa2->ArataStudenti();



    grupa1->AdaugaStudent("Adrian", 21, 0);
    cout<<"Adauga studentul ...\n";
    grupa1->ArataStudenti();

    grupa1->ModificaStudent("Adrian", "Adi");
    cout<<"Modifica studentul ...\n";
    grupa1->ArataStudenti();

    grupa1->StergeStudent("Adi");
    cout<<"Sterge studentul ...\n";
    grupa1->ArataStudenti();

    grupa2->SchimbareGrupa("Andrei",grupa1->GrupaStudenti);

    grupa1->ArataStudenti();

    grupa2->ArataStudenti();




    return 0;

}
