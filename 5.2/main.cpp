#include <iostream>

using namespace std;

int main() {

    int tableau[5] = {1,2,3,4,5};

    int tableau2[5];
    int size = sizeof(tableau2)/sizeof(tableau[0]);
    for (int i = 0; i < size; i++){
        tableau2[i] = i +1;
        cout << tableau2[i];
    }
    cout << endl;
    bool tableau3[5];
    int size2 = sizeof(tableau3)/sizeof(tableau3[0]);
    for (int i = 0; i < size; i++){
        if (!i){
            tableau3[i] = true;
        }
        else tableau3[i] = false;
        cout << tableau3[i];
    }

}
