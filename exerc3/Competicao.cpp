#include <iostream>
#include <string>

using namespace std;

#include "Competicao.h"
#include "Data.h"

Competicao::Competicao(){
    nome = "";
    data = Data();
}

Competicao::Competicao(string nome, Data data):
nome(nome), data(data) {}

string Competicao::get_nome(){
    return nome;
};

void Competicao::set_nome(string nome){
    nome = nome;
};

void Competicao::imprime_data(){
    cout << "Data: " << data.get_dia() << "/" << data.get_mes() << "/" << data.get_ano() << endl;
}