#include <iostream>
#include <array>

using namespace std;

int main() {

    const array<string, 7> pays = {"Canada","Chine","Allemagne","Corée","Japon","Russie",
                                "Etats-Unis"};

    const array<array<int, 3>, 7> medailles = {{{1,0,1},
                                          {1,1,0},
                                          {0,0,1},
                                          {1,0,0},
                                          {0,1,1},
                                          {0,1,1},
                                          {1,1,0}}};

    return 0;
}

void medaille(const array<string, 7> &pays,const array<array<int, 3>, 7> &arrMedaille){

}
