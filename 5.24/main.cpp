#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using Vecteur = vector<int>;

ostream& operator << (ostream& os, const Vecteur & v) {
    cout << "[";
    for (auto it = v.begin() ; it != v.end(); ++it) {
        os << *it;
        if (it < v.end() - 1)
            os << ", ";
    }
    cout << "]";
    return os;
}

int main() {

    Vecteur v1 = {1,5,6};
    Vecteur v2 = {54,3,2,4};
    Vecteur v3 (v1.size()+v2.size(), 0);
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());

    cout << v3;

    return EXIT_SUCCESS;
}


