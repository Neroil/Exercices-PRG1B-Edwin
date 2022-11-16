#include <iostream>
#include <string>

using namespace::std;

//Calculer le volume d'une pyramide à base rectangulaire

double pyr(double longueur, double largeur, double hauteur)
{
    double volume;
    volume = (longueur * largeur * hauteur) / 3.;
    return volume;
}

int main() {

    double longueur, largeur, hauteur;

    cout << "La première pyramide à un volume de : ";
    longueur = 10;
    largeur = 3.5;
    hauteur = 12;
    cout << pyr(longueur, largeur, hauteur) << " mètres cubes." << endl;

    cout << "La seconde pyramide à un volume de : ";
    longueur = 3.6;
    largeur = 2.4;
    hauteur = 2.7;
    cout << pyr(longueur, largeur, hauteur) << " mètres cubes." << endl;

    int x;

    int y = 0;

    cout << x + y << endl;


    return 0;

}
