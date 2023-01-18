#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

class Pays{
public :
    Pays(const string& nom, unsigned long nbreHabitants, unsigned long superficie);
    //getter
    string        getNom()            const;
    unsigned long getNbreHabitants()  const; //unité
    unsigned long getSuperficie()     const;    //km^2
private :
    string        nom;
    unsigned long nbreHabitants; //unité
    unsigned long superficie;    //km^2
};

//---------------------------------------------------------------------------------
ostream& operator<<(ostream& os, const Pays& pays) {
    os << pays.nom() <<
}

Pays::Pays(const string& nom, unsigned long nbreHabitants, unsigned long superficie) {
    this->nom           = nom;
    this->nbreHabitants = nbreHabitants;
    this->superficie    = superficie;
}
string Pays::getNom() const {
    return nom;
}

unsigned long Pays::getNbreHabitants() const {
    return nbreHabitants;
}

unsigned long Pays::getSuperficie() const {
    return superficie;
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
