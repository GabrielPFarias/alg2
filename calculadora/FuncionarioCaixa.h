#pragma once
#include <string>
#include "Calculadora.h"

using namespace std;

class FuncionarioCaixa {
    public:
        FuncionarioCaixa(string, string, Calculadora);
        string get_nome();
        string get_endereco();
        
        void set_nome();
        void set_endereco();
        float soma(float, float);
        float subtracao(float, float);
        float multiplicacao(float, float);
        float divisao(float, float);
        int eleva_ao_quadrado(int);
        int eleva_ao_cubo(int);
        void imprime_info();

    private:
        string nome;
        string endereco;
        Calculadora calc;
};