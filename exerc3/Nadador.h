#pragma once
#include <iostream>
#include <string>

#include "Atleta.h"

using namespace std;

class Nadador: public Atleta {
    private:
        string nome;
        int idade;
        string categoria;

    public:
        Nadador(string, int, string);
        string get_categoria();
        void set_categoria(string);
        void imprime_info();
};