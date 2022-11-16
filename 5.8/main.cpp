#include <iostream>

//Faire une fonction qui décale d'une position vers la droite tous les éléments d'un tableau 1D
using namespace std;

void decalage(int tab[], int taille){

    int a, b, c;
    for (int i = taille - 1; i >= 1; i--){



        if(i == taille - 1){
            a = tab[i];
            b = tab[i-1];
            c = tab[0];
            tab[0] = a;
            tab[i] = b;

        }
        else if(i == 1){
            tab[i] = c;
        }
        else{
            b = tab[i-1];
            tab[i] = b;
        }
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

int main() {

    int tableau[11] = {1,2,3,4,5,6,7,8,9, 10, 11};
    int taille = 9;

    affichage(tableau, taille);
    cout << endl;
    decalage(tableau, taille);
    affichage(tableau, taille);

    return 0;

}
