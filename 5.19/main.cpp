#include <iostream>
#include <string>
#include <vector>

//Matrice de caractères
//Cree et intialise un objet de la clase vector permettant de stocker la matrice abcd...yz

using namespace std;

void creationMatrice(vector<vector<char>> &matrice){

    const int alphabet = 26;
    matrice.reserve(alphabet);
    size_t j = alphabet;
    char lettre;

    for (size_t i = 0; i < alphabet; ++i){

        matrice.push_back(vector<char>());
        matrice[i].reserve(j);
        lettre = 'a';

        for (size_t k = 0; k < j; ++k){

            //cout << matrice.at(i).size() << endl;
            matrice.at(i).push_back(lettre++);

        }

        --j;

    }

}

void affichage(vector<vector<char>> &matrice) {

    for (size_t i = 0; i < matrice.size(); ++i){

        for (size_t j = 0; j < matrice[i].size(); ++j){

            cout << matrice.at(i).at(j) << " ";

        }

        cout << endl;

    }

}


int main() {

    vector<vector<char>> matrice;

    creationMatrice(matrice);

    affichage(matrice);

}
