#include  <cstdlib>
#include  <iostream>
#include  "Moto.h"


using namespace std;

using uint = unsigned int;

int main() {

    Moto moto1("Honda CBR600");
    cout << "motol" << endl << moto1 << endl;

    Moto moto2("H&D Street Road");
    cout << "moto2" << endl << moto2 << endl;

    Moto moto3("Kawasaki  - Z900RS");
    cout << "moto3" << endl << moto3 << endl;

    cout << "total  : " << Moto::total() << endl;

    return EXIT_SUCCESS;
}
