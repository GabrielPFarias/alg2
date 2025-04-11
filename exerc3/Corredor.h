#pragma once

#include <iostream>
#include <string>

#include "Atleta.h"
#include "Competicao.h"

using namespace std;
class Corredor: public Atleta{
    public:
        Corredor(string, int, double, Competicao*);
        double get_peso();
        Competicao* get_competicao();

        void set_peso(double);
        void set_competicao(Competicao*);

        void imprime_competicao();
        void imprime_info();
        
    private:
        double peso;
        Competicao* competicao;
};
