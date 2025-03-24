#pragma once
#include <iostream>
#include <string>

#include "Atleta.h"

using namespace std;

class Nadador: public Atleta {
    public:
        Nadador();
        Nadador(Atleta, string);
        string get_categoria();
        void set_categoria(string);
        void imprime_info();
    private:
        string categoria;
};