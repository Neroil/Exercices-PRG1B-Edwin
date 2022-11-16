#include <iostream>

using namespace std;

void afficher(int& nbDeFois){
    cout << "Appel numéro " << nbDeFois << endl;
    nbDeFois++;
}

int main() {
    const int COMBIEN = 4;
    int nbDeFois = 1;
    for (int i = 0; i < COMBIEN; i++){
        afficher(nbDeFois);
    }

}
