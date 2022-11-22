#include <iostream>
#include <vector>
#include <array>

using namespace std;

ostream& operator << (ostream& os, const array<int, 3> &a);

int main() {

    array<int, 3> salut = {1,2,3};

    cout << salut << endl;

    auto debut = salut.begin();
    auto fin   =   salut.end();

    cout << *debut << endl;
    cout << *(fin - 1) << endl;

    salut.fill(0);
    cout << salut << endl;

    return 69;
}

ostream& operator << (ostream& os, const array<int, 3> &a) {
    cout << "[";
    for (size_t i=0; i<a.size(); ++i) {
        if (i)
            os << ", ";
        os << a[i];
    }
    cout << "]";
    return os;
}