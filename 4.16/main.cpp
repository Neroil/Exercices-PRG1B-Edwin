#include <iostream>
#include <limits>

using namespace std;


unsigned int syracuse(unsigned int n){

    unsigned int nbIter = 0;

    while ( n != 1){
        if (n % 2 == 0) {
            n /= 2;
        }
        else{
            n = (3*n) + 1;
        }
        cout << n << " ";
        nbIter++;
    };
    cout << endl;
    return nbIter;

}

void syracuseNFois (unsigned int n){

    unsigned int nbIter;

    for (unsigned int i = 1; i <= n ; i++) {

        cout << "On calcule le nombre : " << i << endl;

        nbIter = syracuse(i);

        cout << "Il a fallu " << nbIter << " iteration(s) pour tomber sur 1" << endl;
    }

}

int main() {

    unsigned int nombre;

    do {
        cout << "Entrez un nombre entier n contenu dans l'intervalle [1;10000] : ";
        cin >> nombre;
        cout << endl;
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
    }while(nombre > 10000);

    syracuseNFois(nombre);

}
