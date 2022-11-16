#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

void moyenneNote(const double n[], int t);

int main() {
    double note=1;
    int position = 0;
    double tabNote[10];
    cout << "Entrez la liste de vos notes (10 notes max), 0 pour quitter : ";
    while (position < 10){
        cin >> note;
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        if (!note)break;
        tabNote[position] = note;
        position++;
    }

    if (!position){
        cout << "Moyenne non calculable car aucune note saisie !" << endl;
    }else moyenneNote(tabNote, position);

    return 0;
}

void moyenneNote(const double n[], int t){

    double somme=0;

    for(int i = 0; i < t ; i++){
        somme = somme + n[i];
    }

    cout << setprecision(2) << fixed;
    cout << endl;
    cout << "La moyenne des notes saisies = " << somme/t << endl;

}