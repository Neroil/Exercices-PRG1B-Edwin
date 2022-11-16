#include <iostream>

using namespace std;

void affichage(const int tab[], int size);

int main() {

    int t0[0] = {};
    int taille0 = 0;
    int t1[1] = {1};
    int taille1 = 1;
    int t2[2] = {1,2};
    int taille2 = 2;

    affichage(t0, taille0);
    affichage(t1, taille1);
    affichage(t2, taille2);


}

void affichage(const int tab[], int size){
    cout << "[";
    for (int i = 0; i < size; i++){
        if (i < size - 1){
            cout << tab[i] << ", ";
        }else cout << tab[i];
    }
    cout << "]" << endl;
}
