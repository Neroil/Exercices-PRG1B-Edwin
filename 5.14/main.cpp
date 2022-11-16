#include <iostream>

using namespace std;

// On vérifie si deux tableaux sont égaux l'un à l'autre


void affichage(int tab[], int taille){
    cout << "[";

    for(int i = 0; i < taille; i++){

        cout << tab[i];
        if (i == taille - 1){
            cout << "]";
        }else cout << " ,";

    }
}

bool isEqual(const int tab1[], const int tab2[], int taille1, int taille2){

    int a;
    //On vérifie si toutes les valeurs du premier tableau sont dans le deuxième
    for (int i = 0; i < taille1; i++){
        a = 0;
        for (int j = 0; j < taille2; j++){
            if ((tab1[i] == tab2[j]) and a == 0){
                a = 1;
            }
            if ((j == taille2 - 1) and a == 0)
                return false;
        }
    }
    //Si le premier tableau est contenu dans le second, on vérifie l'inverse
    for (int i = 0; i < taille2; i++){
        a = 0;
        for (int j = 0; j < taille1; j++){
            if ((tab2[i] == tab1[j]) and a == 0){
                a = 1;
            }
            if ((j == taille1 - 1) and a == 0){
                return false;
            }
        }
    }
    //Si le premier tableau est inclu au second et que le second est inclu au premier, ils
    //sont alors égaux !
    return true;
}



int main() {


    int tableau1[10] = {2,3,1};
    int tableau2[10] = {1, 22, 2, 2, 3, 3};
    int taille1 = 3;
    int taille2 = 6;

    affichage(tableau1, taille1);
    cout << endl;
    affichage(tableau2, taille2);
    cout << endl;
    cout << "Les deux tableaux ";
    if(isEqual(tableau1, tableau2, taille1, taille2)){
        cout << "sont egaux ! :D";
    }else cout << "ne sont pas egaux ! :C";

    return EXIT_SUCCESS;
}
