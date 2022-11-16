#include <iostream>

using namespace std;

void permutation(int tab[], int taille);

int main() {

    int tableau[10] = {1,2,3,4,5,6,7,8,9};
    int taille = 9;

    for (int i = 0; i < taille; i++){
        cout << tableau[i] << ",";
    }

    cout << endl;

    permutation(tableau, taille);

    for (int i = 0; i < taille; i++){
        cout << tableau[i] << ",";
    }

    cout << endl;

    return 0;
}

void permutation(int tab[], int taille){

    int a, b;
    a = tab[0];
    b = tab[taille-1];
    tab[0] = b;
    tab[taille-1] = a;


}