#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main() {

    char n;

    cout << "Entrez un caractere : ";
    cin  >> n;

    cout << boolalpha;
    cout << "Code ASCII de '" << n << "'                   : ";
    cout << (int)n << endl;
    cout << "'" << n << "' est une lettre de l'alphabet    : ";
    cout << (bool)isalpha((int)n) << endl;
    cout << "'" << n << "' est une lettre minuscule        : ";
    cout << (bool)islower((int)n) << endl;
    cout << "'" << n << "' est un chiffre                  : ";
    cout << (bool)isdigit((int)n) << endl;
    cout << "'" << n << "' est un caractère de ponctuation : ";
    cout << (bool)ispunct((int)n) << endl;

}

