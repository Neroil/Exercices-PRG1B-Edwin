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

bool estCroissant(int tab[], int taille){
    for(int i = 0; i < taille; i++){
        if ((tab[i] > tab[i+1])and(i != taille - 1)){
            return false;
        }
    }
    return true;
}

int main() {

    int tableau[10] = {1,2,3,4,5,6,7,8,6};
    int taille = 9;

    affichage(tableau, taille);
    cout << endl;
    cout << estCroissant(tableau, taille);


    return 0;
}
