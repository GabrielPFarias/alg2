#pragma once
#include <iostream>
#include <string>

#include "FuncionarioCaixa.h"
#include "Calculadora.h"

using namespace std;

FuncionarioCaixa::FuncionarioCaixa(string nome, string endereco, Calculadora calc){
    this->nome = nome;
    this->endereco = endereco;
    this->calc = calc;
};

void FuncionarioCaixa::set_nome(){
    nome = nome;
}

void FuncionarioCaixa::set_endereco(){
    endereco = endereco;
}

float FuncionarioCaixa::soma(float num1, float num2){
    return calc.soma(num1, num2);
}

float FuncionarioCaixa::subtracao(float num1, float num2){
    return calc.subtracao(num1, num2);
}

float FuncionarioCaixa::multiplicacao(float num1, float num2){
    return calc.multiplicacao(num1, num2);
}

float FuncionarioCaixa::divisao(float num1, float num2){
    return calc.divisao(num1, num2);
}

int FuncionarioCaixa::eleva_ao_quadrado(int num1){
    return calc.eleva_ao_quadrado(num1);
}

int FuncionarioCaixa::eleva_ao_cubo(int num1){
    return calc.eleva_ao_cubo(num1);
}

void FuncionarioCaixa::imprime_info(){
    cout << "Nome: " << nome << endl;
    cout << "Endereço: " << endereco << endl;

}