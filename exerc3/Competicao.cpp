#include <iostream>
#include <string>

using namespace std;

#include "Competicao.h"
#include "Data.h"

Competicao::Competicao(string nome, Data data):
nome(nome), data(data) {}

string Competicao::get_nome(){
    return nome;
};

void Competicao::set_nome(string nome){
    nome = nome;
};
