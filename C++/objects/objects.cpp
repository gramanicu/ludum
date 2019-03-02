#include <iostream>
#include <string>

#define EMAX 100

class Elev {
    private:
        int clasa;
        double medie;
        std::string nume;
        std::string prenume;
        static int numarElevi;

    public:
        Elev() {
            std::cout << "Un elev fara nume a fost adaugat\n";
            numarElevi++;
        }

        Elev(std::string _nume, std::string _prenume) {
            nume = _nume;
            prenume = _prenume;
            numarElevi++;
        }

        ~Elev() {
            std::cout << this->nume << " " << this->prenume << " a fost eliminat\n";
            numarElevi--;
        }

        void set_nume(std::string _nume) {
            this->nume = _nume;
        }

        void set_prenume(std::string _prenume) {
            this->prenume = _prenume;
        }

        void set_clasa(int _clasa) {
            this->clasa = _clasa;
        }
        
        void set_medie(double _medie) {
            this->medie = _medie;
        }

        std::string get_nume() {
            return this->nume;
        }

        std::string get_prenume() {
            return this->prenume;
        }

        int get_clasa() {
            return this->clasa;
        }

        double get_medie() {
            return this->medie;
        }

        static int get_numarElevi() {
            return numarElevi;
        }

};

int Elev::numarElevi = 0;

int main() {
    Elev* elevi = new Elev[EMAX];
    int i;

    for(i=0; i<EMAX; i++) {
        elevi[i].set_clasa(i%12+1);
        elevi[i].set_medie(9 + double(i)/EMAX);
        elevi[i].set_nume(std::to_string(i));
        elevi[i].set_prenume(std::to_string(i));
    }

    std::cout << Elev::get_numarElevi()<< "\n";
    for(i=0; i<EMAX; i++) {
        std::cout << elevi[i].get_nume() << " " << elevi[i].get_prenume() << " " << elevi[i].get_medie() << " " << elevi[i].get_clasa() << "\n";
    }
    
    delete[] elevi;


    return 0;
}