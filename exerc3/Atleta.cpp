#pragma once
#include <iostream>
#include <string>
#include "Atleta.h"

using namespace std;

Atleta::Atleta(string nome, int idade){
    this->nome = nome;
    this->idade = idade;
}

string Atleta::get_nome(){
    return nome;
}

int Atleta::get_idade(){
    return idade;
}

void Atleta::set_nome(){
    nome = nome;
}

void Atleta::set_idade(){
    idade = idade;
}

void Atleta::imprime_info(){
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
}