#include <iostream>
#include <string>
#include "Calculadora.h"

using namespace std;

Calculadora::Calculadora(float memoria, string cor):
memoria(memoria), cor(cor) {}

string Calculadora::get_cor() {
    return cor;
}

float Calculadora::get_memoria() {
    return memoria;
}

void Calculadora::set_cor(string cor) {
    this->cor = cor;
}

void Calculadora::set_memoria(float memoria) {
    this->memoria = memoria;
}

float Calculadora::soma(float num1, float num2) {
    return num1 + num2;
}

float Calculadora::subtracao(float num1, float num2) {
    return num1 - num2;
}

float Calculadora::multiplicacao(float num1, float num2) {
    return num1 * num2;
}

float Calculadora::divisao(float num1, float num2) {
    return num1 / num2;
}

int Calculadora::eleva_ao_quadrado(int num1) {
    return (int) num1 * num1;
}

int Calculadora::eleva_ao_cubo(int num1) {
    return (int) num1 * num1 * num1;
}

void Calculadora::imprime_info() {
    cout << "Cor: " << cor << endl;
    cout << "Memória: " << memoria << endl;
}