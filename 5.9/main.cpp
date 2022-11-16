#include <iostream>

using namespace std;

void affichage(int tab[], int taille){
    cout << "[";

    for(int i = 0; i < taille; i++){

        cout << tab[i];
        if (i == taille - 1){
            cout << "]";
        }else cout << " ,";

    }
}

void supprimerCentre(int tab[], int& taille){
    if (taille%2){
        for (int i = taille/2; i < taille; i++){
            tab[i] = tab[i+1];
        }
        taille--;
    }else{
        for (int i = taille/2 - 1; i < taille; i++){
            tab[i] = tab[i+2];
        }
        taille -= 2;
}}

int main() {

    int tableau[11] = {1,2,3,4,5,6,7,8,9, 10, 11};
    int taille = 9;

    affichage(tableau, taille);
    cout << endl;
    supprimerCentre(tableau, taille);
    affichage(tableau, taille);


    return 0;
}
