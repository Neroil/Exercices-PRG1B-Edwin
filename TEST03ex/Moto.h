//
// Created by edwin on 1/18/2023.
//

#ifndef TEST03EX_MOTO_H
#define TEST03EX_MOTO_H
#include <string>

class Moto {

    friend std::ostream& operator<<(std::ostream &os, const Moto &moto);

public:

    Moto(std::string modele);
    static unsigned int total();
    ~Moto();


private:

    static const std::string USINE;
    const std::string modele;
    const unsigned noSerie;

    static unsigned noSerieTot;
    static unsigned stock;


};


#endif //TEST03EX_MOTO_H
