#include <iostream>

using namespace std;

void supprDoublons(int tab[], int& taille){

    for (int i = 0; i < taille - 1; i++){
        for (int j = i+1; j < taille; j++){
            if (tab[j] == tab[i]){
                for (int k = j +1; k < taille; k++){
                    tab[k-1] = tab[k];
                }
                taille--;
                j--;
            }
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

    int tableau[10] = {1,3,3,4,5,2,7,2,1, 9};
    int taille = 9;

    affichage(tableau, taille);
    cout << endl;
    supprDoublons(tableau, taille);
    affichage(tableau, taille);


    return 0;
}
