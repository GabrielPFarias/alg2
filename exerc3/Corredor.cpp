#include <iostream>
#include <string>

#include "Corredor.h"
#include "Competicao.h"

using namespace std;

Corredor::Corredor(string nome, int idade, double peso, Competicao* competicao)
: Atleta(nome, idade){
    this->peso = peso;
    this->competicao = competicao;
}

double Corredor::get_peso(){
    return peso;
}

Competicao* Corredor::get_competicao(){
    return competicao;
}

void Corredor::set_peso(double s_peso){
    peso = s_peso;
}

void Corredor::set_competicao(Competicao* s_competicao){
    competicao = s_competicao;
}

void Corredor::imprime_competicao(){
    cout << "Nome da competicao: " << competicao->get_nome() << endl;
    competicao->imprime_data();
}

void Corredor::imprime_info(){
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
    cout << "Peso: " << peso << endl;
    imprime_competicao();
}

