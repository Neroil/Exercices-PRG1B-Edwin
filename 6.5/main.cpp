#include <iostream>
#include <cctype>
#include <string>

using namespace std;
bool estVide (string n);
//Verifier si une chaine de caractères str de type string est vide ou non de quatre façons.

int main() {

    string vide;
    string pasVide = "Salut je suis super pas vide";

    cout << boolalpha;
    cout << "La string \"vide\" est elle vide ?    : " << estVide(vide)    << endl;
    cout << "La string \"pasVide\" est elle vide ? : " << estVide(pasVide) << endl;
    return 0;
}

bool estVide (const string n){

    if (n.length() == 0 and n.size() == 0 and n.c_str() != nullptr and n.empty()){

        return true;
    } else return false;
}