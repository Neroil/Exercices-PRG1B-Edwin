#include <iostream>

using namespace std;

int sommeAlternée(int tab[], int taille);

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

int sommeAlternée(int tab[], int taille){
    int somme = 0;
    for (int i = 0; i < taille; i++){
        if (i%2){
            somme += tab[i];
        }else somme -= tab[i];
    }
    return somme;
}