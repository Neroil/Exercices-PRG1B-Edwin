#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string to_string(int nbre, int base){
    string nbFinal;
    if(base < 2 or base > 16){
        return nbFinal;
    }
    static const string data = "0123456789ABCDEF";

    do {
        nbFinal.append(data,(nbre % base),1);
        nbre /= base;
    } while (nbre > 0);
    reverse(nbFinal.begin(),nbFinal.end());
    return nbFinal;
}
int main() {
    string salut = to_string(156547,2);
    cout << salut;
}
