#pragma once
#include <iostream>
#include <string>

#include "Pessoa.h"

using namespace std;

class Aluno: public Pessoa{
    public:
        Aluno(string, int, double);
        double get_nota();
        void set_nota(double);
        void imprime_dados();
    private:
        double nota;
};