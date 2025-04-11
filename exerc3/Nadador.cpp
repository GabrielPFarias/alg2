#include <iostream>
#include <string>

#include "Nadador.h"

using namespace std;

Nadador::Nadador(string nome, int idade, string categoria)
: Atleta(nome, idade){
    this->categoria = categoria;
}


string Nadador::get_categoria(){
    return categoria;
}

void Nadador::set_categoria(string categoria){
    categoria = categoria;
}

void Nadador::imprime_info(){
    Atleta::imprime_info();
    cout << "Categoria: " << categoria << endl;
}