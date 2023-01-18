#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool estImpaire(int nombre);
void affichage(vector<int> &v);

int main() {

    vector<int> v1 = {1,5,3,7,3};
    if (all_of(v1.begin(), v1.end(), estImpaire)){
        cout << "Tcheu y sont tous impair" << endl;
    } else cout << "Y sont pas tous impair" << endl;


    return 0;
}

bool estImpaire(int nombre){
    return (nombre%2);
}

void affichage(vector<int> &v) {

    cout << "[";
    for (auto &i : v){

        cout << i << ", ";
    }
    cout << "]"<< endl;
}

