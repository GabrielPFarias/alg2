#include <iostream>
#include <string>

using namespace std;

#include "Competicao.h"

Competicao::Competicao(string nome, Data date){
    this->nome = nome;
    this->date = date;
};

string Competicao::get_nome(){
    return nome;
};


void Competicao::set_nome(string nome){
    nome = nome;
};
