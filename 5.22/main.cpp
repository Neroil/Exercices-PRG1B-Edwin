#include <iostream>
#include <array>

using namespace std;

int main() {
    enum class           Pays {CANADA, CHINE, ALLEMAGNE, COREE, JAPON, RUSSIE, ETATS_UNIS};
    const unsigned short NB_PAYS = 7;
    const string         PAYS[] = {"Canada","Chine","Allemagne","Corée","Japon","Russie",
                                "Etats-Unis"};

    enum class TypeMedaille {OR, ARGENT, BRONZE};
    const unsigned short NB_TYPES_MEDAILLE = 3;
    const string TYPE_MEDAILLE[] = {"Or", "Argent", "Bronze"};

    using Medaille_Obtenues = array<unsigned short, NB_TYPES_MEDAILLE>;


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

    cout << "Pour le " <<

}
