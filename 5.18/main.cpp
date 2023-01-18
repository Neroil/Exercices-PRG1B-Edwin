#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<vector<int>> v1 = {{1,0,1},
                              {0,1,0},
                              {1,1,0}};


    return 0;
}

void calculDiagonal(vector<vector<int>> &v){
    size_t taille = v.size();
    int somme1 = 0, somme2 = 0;
    for (size_t i = 0; i < taille; i++ ){
        somme1 += v.at(i).at(i);
        somme2 += v.at(taille - 1 - i).at(i);
    }
    cout <<
}
