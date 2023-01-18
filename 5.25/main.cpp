//---------------------------------------------------------
// Nom            : Exercice 5.25
// Fichier        : main.cpp
// Version        : 01 - 29-11-2022
// Auteur(s)      : HÄFFNER EDWIN
// But            : Vérifier si deux tableaux sont égaux (au sens ensembliste du terme)
// Modifications  :
// Remarque(s)    :
//---------------------------------------------------------

#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>

using namespace std;
using Vecteur = vector<int>;

ostream &operator<<(ostream &os, const Vecteur &v);

bool estEgal(Vecteur &v1, Vecteur &v2);

int main() {

    Vecteur v1 = {1, 2, 3, 4, 5};
    Vecteur v2 = {1, 3, 4, 5, 2, 2};

    cout << "Vecteur 1" << endl
         << v1          << endl
         << "Vecteur 2" << endl
         << v2          << endl << endl;

    cout << "Les deux vecteur sont ";
    if (estEgal(v1,v2)){
        cout << "egaux"   << endl;
    } else {
        cout << "inegaux" << endl;
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    return 0;
}

ostream &operator<<(ostream &os, const Vecteur &v) {
    cout << "[";
    for (auto it = v.begin(); it != v.end(); ++it) {
        os << *it;
        if (it < v.end() - 1)
            os << ", ";
    }
    cout << "]";
    return os;
}

bool estEgal(Vecteur &v1, Vecteur &v2) {

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    auto v1u = unique(v1.begin(), v1.end());
    auto v2u = unique(v2.begin(), v2.end());
    v1.erase(v1u, v1.end());
    v2.erase(v2u, v2.end());

    return equal(v1.begin(), v1.end(), v2.begin());

}