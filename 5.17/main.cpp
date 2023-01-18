#include <iostream>
#include <vector>

using namespace std;

void merge(const vector<int>& v1, const vector<int>& v2,vector<int>& vMerged);
void affichageTab(vector<int>& tableau,size_t min);


int main() {

    vector<int> v2 = {1,2,3,5};
    vector<int> v1 = {4,7};
    vector<int> v3;

    merge(v1,v2,v3);
    affichageTab(v3, 0);
    return 0;
}

void merge(const vector<int>& v1, const vector<int>& v2,vector<int>& vMerged){
    size_t taille1 = v1.size();
    size_t taille2 = v2.size();

    if (taille1 > taille2){
        for (size_t i = 0; i < taille1; i++){
            vMerged.push_back(v1.at(i));
            if (i < taille2){
                vMerged.push_back(v2.at(i));
            }
        }
    } else {
        for (size_t i = 0; i < taille2; i++) {
            if (i < taille1) {
                vMerged.push_back(v1.at(i));
            }
            vMerged.push_back(v2.at(i));
        }
    }
}

void affichageTab(vector<int>& tableau,const size_t min){
    cout << "[";
    size_t taille = tableau.size();
    for(size_t i = min; i < taille; ++i){

        cout << tableau[i];

        if (i == taille - 1){
            cout << "]";
        }else cout << " ,";

    }
}
