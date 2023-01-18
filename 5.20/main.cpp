#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

//Carré magique impaire

void carreMagique(vector<vector<int>> &carre, size_t n);
void affichageMatrice(const vector<vector<int>> &carre);

int main() {

    size_t n;
    do {
        cout << "Entrez l'ordre du carre magique souhaite (impair > 0) : " ;
        cin >> n;
        cout << endl;
    } while (n <= 0 || n % 2 == 0);

    vector<vector<int>> carre(n, vector<int>(n, 0));


    carreMagique(carre, n);
    affichageMatrice(carre);

    return 0;
}

void carreMagique(vector<vector<int>> &carre, size_t n) {
    size_t noLigne = n - 1, noColonne = n/2, k = 1;
    size_t noLigneOld = noLigne, noColonneOld = noColonne;
    for (; k <= n*n; ++k){

        carre.at(noLigne).at(noColonne) = (int)k;
        noLigneOld   =   noLigne++;
        noColonneOld = noColonne++;

        if (noLigne == n){
            noLigne = 0;
        }
        if (noColonne == n){
            noColonne = 0;
        }

        if (carre.at(noLigne).at(noColonne) != 0){

            noLigne   = noLigneOld;
            noColonne = noColonneOld;
            --noLigne;

        }
    }
}

void affichageMatrice(const vector<vector<int>> &carre){
    for (size_t i = 0; i < carre.size(); ++i){
        for (size_t j = 0; j < carre.size(); ++j){
            cout << setw(2) << carre.at(i).at(j) << " ";
        }
        cout << endl;
    }
}
