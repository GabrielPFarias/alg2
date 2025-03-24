#pragma once
#include <iostream>
#include <string>
#include "Calculadora.h"

using namespace std;

class FuncionarioCaixa {
    public:
        FuncionarioCaixa();
        FuncionarioCaixa(string, string, Calculadora);
        string get_nome();
        string get_endereco();
        
        void set_nome(string);
        void set_endereco(string);
        float get_soma(float, float);
        float get_subtracao(float, float);
        float get_multiplicacao(float, float);
        float get_divisao(float, float);
        int get_eleva_ao_quadrado(int);
        int get_eleva_ao_cubo(int);
        void imprime_info();

    private:
        string nome;
        string endereco;
        Calculadora calc;
};