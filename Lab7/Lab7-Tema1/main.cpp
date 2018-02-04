/*
T.7.1 Proiectați o structură de 5 clase: Persoana, Sofer, Angajat, Copil, Parinte.
Folosiți clase prietene și imbricate, după cum considerați necesar. În definirea structurii de clase țineți cont că:
• Un sofer este o persoana
• Un angajat este sofer si persoana
• Un copil este o persoana
• Un parinte este persoana, sofer, angajat si are unul sau mai mulți copii

Aplicația trebuie să permită următoarele operații:
 • Adăugarea și modificarea datelor unui sofer
 • Stergerea unui sofer
 • Adăugarea și modificarea datelor unui angajat
 • Stergerea unui angajat
 • Adăugarea și modificarea datelor unui parinte
 • Adăugarea și modificarea datelor unui copil
 • Afisarea tuturor soferilor
 • Afisarea tuturor angajatilor
 • Afisarea tuturor parintilor
 • Afisarea tuturor copiilor

Pe baza operațiilor de mai sus, care este relația între clasele:
• Sofer si Persoana
• Angajat, Sofer si Persoana
• Copil și Persoana
• Parinte, Persoana, Sofer, Angajat, Copil

*/
#include <iostream>
#include <list>
#include <string>
#include <string.h>

using namespace std;

class Persoana{

    public:
    Persoana(){};

    class Sofer{
        public:
            string nume;
            string categoriePermis;

            static list<Sofer> Soferi;

            Sofer(string nume , string categoriePermis){
                this->nume = nume;
                this->categoriePermis = categoriePermis;
                Soferi.push_back(*this);
            }

            void setNume (string numeVechi, string numeNou){

                auto it = Soferi.begin();
                for (it = Soferi.begin(); it != Soferi.end() ; ++it) {
                    if(it->nume == numeVechi){
                        it->nume = numeNou;
                    }
                }

            }

            void setCategoriePermis (string nume, string categorieNoua){

                auto it = Soferi.begin();
                for (it = Soferi.begin(); it != Soferi.end() ; ++it) {
                    if(it->nume == nume){
                        it->categoriePermis = categorieNoua;
                    }
                }

            }

            void StergereSofer(string nume){

                auto it = Soferi.begin();
                for (it = Soferi.begin(); it != Soferi.end() ; ++it) {
                    if(it->nume == nume){
                        Soferi.erase(it);
                    }
                }

            }

            void ArataSoferi(){
                auto it = Soferi.begin();
                for (it = Soferi.begin(); it != Soferi.end() ; ++it) {
                    cout << it->nume << " are permis categoria " << it->categoriePermis << "\n";

                }
            }



    friend class Angajat;

    };

    class Angajat{
        public:
            string nume;
            int aniVechime;

            static list<Angajat> Angajati;

            Angajat(string nume,int aniVechime){
                this->nume = nume;
                this->aniVechime = aniVechime;
                Angajati.push_back(*this);
            }

            void setNume (string numeVechi, string numeNou){

                auto it = Angajati.begin();
                for (it = Angajati.begin(); it != Angajati.end() ; ++it) {
                    if(it->nume == numeVechi){
                        it->nume = numeNou;
                    }
                }

            }

            void setAniVechime (string nume, int vechimeNoua){

                auto it = Angajati.begin();
                for (it = Angajati.begin(); it != Angajati.end() ; ++it) {
                    if(it->nume == nume){
                        it->aniVechime = vechimeNoua;
                    }
                }

            }

            void StergereAngajat(string nume){

                auto it = Angajati.begin();
                for (it = Angajati.begin(); it != Angajati.end() ; ++it) {
                    if(it->nume == nume){
                        Angajati.erase(it);
                    }
                }

            }

            void ArataAngajati(){
                auto it = Angajati.begin();
                for (it = Angajati.begin(); it != Angajati.end() ; ++it) {
                    cout << it->nume << " are " << it->aniVechime << " ani de vechime\n";

                }
            }




    };

    class Copil{
        public:
            string nume;
            int varsta;

            static list<Copil> Copii;

            Copil(string nume, int varsta){
                this->nume = nume;
                this->varsta = varsta;
                Copii.push_back(*this);
            }

            void setNume (string numeVechi, string numeNou){

                auto it = Copii.begin();
                for (it = Copii.begin(); it != Copii.end() ; ++it) {
                    if(it->nume == numeVechi){
                        it->nume = numeNou;
                    }
                }

            }

            void setVarsta (string nume, int varstaNoua){

                auto it = Copii.begin();
                for (it = Copii.begin(); it != Copii.end() ; ++it) {
                    if(it->nume == nume){
                        it->varsta = varstaNoua;
                    }
                }

            }

            void ArataCopii(){
                auto it = Copii.begin();
                for (it = Copii.begin(); it != Copii.end() ; ++it) {
                    cout << it->nume << " are " << it->varsta << " ani \n";

                }
            }




    };





    friend class Parinte;
};




class Parinte{
    public:
        string nume;
        string categoriePermis;
        int varsta;
        int aniVechime;
        int nrCopii;

        static list<Parinte> Parinti;

        Parinte(string nume, int varsta,int nrCopii, int aniVechime, string categoriePermis){
            this->nume = nume;
            this->varsta = varsta;
            this->nrCopii = nrCopii;
            this->aniVechime = aniVechime;
            this->categoriePermis = categoriePermis;

            for(int i = 1; i<=nrCopii; i++){
               string nume_copil;
               int varsta_copil;

               cout<<"Numele si varsta copilului "<<i<<" :\n";
               cin>> nume_copil;
               cin>> varsta_copil;

               Persoana::Copil(nume_copil, varsta_copil);

            }

            Persoana::Angajat(nume, aniVechime);
            Persoana::Sofer(nume,categoriePermis);

            Parinti.push_back(*this);


        }

        void setNume (string numeVechi, string numeNou){

            auto it = Parinti.begin();
            for (it = Parinti.begin(); it != Parinti.end() ; ++it) {
                if(it->nume == numeVechi){
                    it->nume = numeNou;
                }
            }

        }

        void setVarsta (string nume, int varstaNoua){

            auto it = Parinti.begin();
            for (it = Parinti.begin(); it != Parinti.end() ; ++it) {
                if(it->nume == nume){
                    it->varsta = varstaNoua;
                }
            }

        }

        void setAniVechime (string nume, int vechimeNoua){

            auto it = Parinti.begin();
            for (it = Parinti.begin(); it != Parinti.end() ; ++it) {
                if(it->nume == nume){
                    it->aniVechime = vechimeNoua;
                }
            }

        }

        void setCategoriePermis (string nume, string categorieNoua){

            auto it = Parinti.begin();
            for (it = Parinti.begin(); it != Parinti.end() ; ++it) {
                if(it->nume == nume){
                    it->categoriePermis = categorieNoua;
                }
            }

        }

        void ArataParinti(){
            auto it = Parinti.begin();
            for (it = Parinti.begin(); it != Parinti.end() ; ++it) {
                cout << it->nume << " are : " << it->varsta << " ani, "<<it->nrCopii<<" copii, lucreaza de "<<it->aniVechime<<" ani si are permis cateoria "<<it->categoriePermis<<'\n';

            }
        }




};



list<Persoana::Sofer> Persoana::Sofer::Soferi;
list<Persoana::Angajat> Persoana::Angajat::Angajati;
list<Persoana::Copil> Persoana::Copil::Copii;
list<Parinte> Parinte::Parinti;

int main()
{
    // Soferi :
    Persoana::Sofer* soferi = new Persoana::Sofer("Idi Amin", "B, C" );
    Persoana::Sofer("Benito Mussolini", "B");
    Persoana::Sofer("Adolf Hitler", "A");

    cout<<"Soferi : \n";
    soferi->ArataSoferi();

    // Angajati :
    Persoana::Angajat* angajati = new Persoana::Angajat("Vladimir Lenin", 20);
    Persoana::Angajat("Mao Zedong", 40);

    cout<<"Angajati : \n";
    angajati->ArataAngajati();

    // Parinte:
    Parinte* parinti = new Parinte("Joseph Stalin", 53 , 2, 30,"B");

    cout<<"Parinti : \n";
    parinti->ArataParinti();




    return 0;
}
