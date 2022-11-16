#include <iostream>

using namespace std;

void  remplacement(int tab[], int taille, int rempVal);
void  affichage   (int tab[], int taille);

int main() {

    int tableau[10] = {1,2,3,4,5,6,7,8,9};
    int taille = 9, valeurDeRemplacement = 5;

    affichage   (tableau, taille);
    cout << endl;
    remplacement(tableau, taille, valeurDeRemplacement);
    affichage   (tableau, taille);


    return EXIT_SUCCESS;
}

void remplacement(int tab[], int taille, int rempVal){

    for(int i = 0; i < taille; i++){
        if (tab[i]%2){ //Verifie si c'est un nombre pair ou non.
            continue;
        }else tab[i] = rempVal; //On remplace avec la valeur de remplacement
    }

}

void affichage(int tab[], int taille){
    cout << "[";

    for(int i = 0; i < taille; i++){

        cout << tab[i];
        if (i == taille - 1){
            cout << "]";
        }else cout << " ,";

    }
}