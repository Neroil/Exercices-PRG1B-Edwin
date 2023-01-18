#include <iostream>
//#include <sstream>
//Nice :)

//Analyse d'un nombre entier!!!

using namespace std;
int main() {
    int chiffre;

    cout << "Veuillez me donner un nombre ENTIER naturel (n>=0) : ";
    cin >> chiffre;

    cout << "Nombre saisi      : " << chiffre << endl;
    //Methode avec sstream
//    stringstream convert;
//    convert << chiffre;
//    string chiffreStr = convert.str();
    //Methode sans
    string chiffreStr = to_string(chiffre);

    cout << "Nombre de chiffre : " << chiffreStr.length() << endl;
    cout << "Premier chiffre   : " << *chiffreStr.begin() << endl;
    cout << "Dernier chiffre   : " << *(chiffreStr.end() - 1)  << endl;

    return EXIT_SUCCESS;
}
