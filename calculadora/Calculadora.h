#pragma once
#include <iostream>
#include <string>

using namespace std;

class Calculadora {
    public:
        Calculadora();
        Calculadora(float, string);
        string get_cor();
        void set_cor(string);

        float get_memoria();
        void set_memoria(float);

        float soma(float, float);
        float subtracao(float, float);
        float multiplicacao(float, float);
        float divisao(float, float);
        int eleva_ao_quadrado(int);
        int eleva_ao_cubo(int);
        void imprime_info();

    private:
        float memoria;
        string cor;
        


};