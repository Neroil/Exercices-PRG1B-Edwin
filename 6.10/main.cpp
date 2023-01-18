#include <iostream>

using namespace std;

int main() {

    string nom;

    cout << "Entrez votre prenom et votre nom : ";
    getline(cin,nom);
    cout << endl;

    size_t finPrenom = nom.find(' ');
    string prenom(nom, 0, finPrenom);
    cout << "Votre prenom est : " << prenom << endl;
    string nomFamille(nom, finPrenom + 1);
    cout << "Votre nom est :" << nomFamille << endl;
    string acronyme(nom,0,1);
    acronyme.append(nomFamille,0,1);
    acronyme.append(nomFamille,nomFamille.length() - 1,1);

    for (auto & c: acronyme) c = (char)(toupper(c));
    cout << "Votre acronyme est :" << acronyme;

    return 0;
}
