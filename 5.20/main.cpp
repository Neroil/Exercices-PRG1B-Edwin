#include <iostream>
#include <string>
#include <vector>

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
    size_t noLigne = n - 1, noColonne = n/2, k = 0;
    size_t noLigneOld, noColonneOld;
    for (; k < n*n; ++k){
        if (carre.at(noLigne).at(noColonne) == 0){
            noLigne   = n ? 0 : noLigne;
            noColonne = n ? 0 : noColonne;
            carre.at(noLigne).at(noColonne) = (int)k;
            noLigneOld = noLigne++;
            noColonneOld = noColonne++;
        } else {
            noLigne = noLigneOld;
            noColonne = noColonneOld;
            --noLigne;
        }

    }


}

void affichageMatrice(const vector<vector<int>> &carre){
    for (size_t i = 0; i < carre.size(); ++i){
        for (size_t j = 0; j < carre.size(); ++j){
            cout << carre.at(i).at(j) << " ";
        }
        cout << endl;
    }
}
