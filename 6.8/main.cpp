#include <iostream>
#include <limits>

using namespace std;
int conversionRomainDecimal(const string& n);

//Convertir numéro romain en décimal
int main() {
    string nombreRomain;

    cout << "Entrez un nombre romain P.EX : \"XVI\"  : ";
    cin >> nombreRomain;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << endl << "Votre nombre est : " << conversionRomainDecimal(nombreRomain);
    cout << endl << "Appuyez sur ENTER pour quitter...";

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return EXIT_SUCCESS;
}

int conversionRomainDecimal(const string& n) {

    int somme = 0;

    for (string::const_iterator i = n.cbegin(); i != n.cend(); i++){

        if (*i == 'I'){
            if(*(i + 1) == 'V'){
                somme += 4;
                i++;
            } else if (*(i + 1) == 'X') {
                somme += 9;
                i++;
            } else somme++;

        } else if (*i == 'V'){
            somme += 5;

        } else if (*i == 'X'){
            if(*(i + 1) == 'L'){
                somme += 40;
                i++;
            } else if (*(i + 1) == 'C') {
                somme += 90;
                i++;
            } else somme += 10;

        } else if (*i == 'L'){
            somme += 50;

        } else if (*i == 'C'){
            if(*(i + 1) == 'D'){
                somme += 400;
                i++;
            } else if (*(i + 1) == 'M') {
                somme += 900;
                i++;
            } else somme += 100;

        } else if (*i == 'D'){
            somme += 500;

        } else if (*i == 'M'){
            somme += 1000;

        } else {
            return 666;
        }

    }
    return somme;
}
