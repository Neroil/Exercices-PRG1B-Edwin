#include <iostream>

using namespace std;
string milieuString(const string &n);

int main() {

    string message1 = "ABCDEFG";
    string message2 = "ABCDEF";

    cout << milieuString(message1) << endl;
    cout << milieuString(message2);
    return 0;
}

string milieuString(const string &n){

    size_t taille = n.length();
    if (taille%2){
        char milieu = n.at(taille/2);
        return &milieu;
    } else {
        char milieu1 = n.at(taille/2 - 1);
        char milieu2 = n.at(taille/2);
        string milieu;
        milieu += milieu1;
        milieu += milieu2;

        return milieu;
    }
}
