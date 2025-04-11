#pragma once
#include <iostream>
#include <string>

#include "Pessoa.h"

using namespace std;

class Programador: public Pessoa{
    public:
        Programador(string, int, string);
        string get_linguagem();
        void set_linguagem(string);
        void imprime_dados();
    private:
        string nome;
        int idade;
        string linguagem_preferida;
};