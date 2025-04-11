#include <iostream>
#include <string>

#include "Pessoa.h"

using namespace std;

Pessoa::Pessoa(string nome, int idade){
    this->nome = nome;
    this->idade = idade;
}

string Pessoa::get_nome(){
    return nome;
}

int Pessoa::get_idade(){
    return idade;
}

void Pessoa::set_nome(string s_nome){
    nome = s_nome;
}

void Pessoa::set_idade(int s_idade){
    idade = s_idade;
}

void Pessoa::imprime_dados(){
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
}

