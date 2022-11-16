#include <iostream>
#include <vector>

using namespace std;

using Vecteur = vector<int>;

void concatVecteur(const Vecteur& v1, const Vecteur& v2){
    Vecteur resultat = v1;
    resultat.reserve(v1.size() + v2.size());

    for (int val : v2){
        resultat
    }


}

int main() {

    const Vecteur v1 = {11,12,13,14};
    const Vecteur v2 = {21,22,23,24,25,26};

    return 0;
}
