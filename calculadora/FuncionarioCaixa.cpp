#include <iostream>
#include <string>

#include "FuncionarioCaixa.h"

using namespace std;

FuncionarioCaixa::FuncionarioCaixa(string nome, string endereco, Calculadora calc):
nome(nome), endereco(endereco), calc(calc) {}

string FuncionarioCaixa::get_nome(){
    return nome;
}

string FuncionarioCaixa::get_endereco(){
    return endereco;
}

void FuncionarioCaixa::set_nome(string nome){
    this->nome = nome;
}

void FuncionarioCaixa::set_endereco(string endereco){
    this->endereco = endereco;
}

float FuncionarioCaixa::get_soma(float num1, float num2){
    return calc.soma(num1, num2);
}

float FuncionarioCaixa::get_subtracao(float num1, float num2){
    return calc.subtracao(num1, num2);
}

float FuncionarioCaixa::get_multiplicacao(float num1, float num2){
    return calc.multiplicacao(num1, num2);
}

float FuncionarioCaixa::get_divisao(float num1, float num2){
    return calc.divisao(num1, num2);
}

int FuncionarioCaixa::get_eleva_ao_quadrado(int num1){
    return calc.eleva_ao_quadrado(num1);
}

int FuncionarioCaixa::get_eleva_ao_cubo(int num1){
    return calc.eleva_ao_cubo(num1);
}

void FuncionarioCaixa::imprime_info(){
    cout << "Nome: " << nome << endl;
    cout << "Endereco: " << endereco << endl;
    cout << "Memoria: " << calc.get_memoria() << endl;
    cout << "Cor: " << calc.get_cor() << endl;
}