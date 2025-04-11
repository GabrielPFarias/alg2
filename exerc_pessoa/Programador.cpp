#include <iostream>
#include <string>

#include "Programador.h"

using namespace std;

Programador::Programador(string nome, int idade, string linguagem_preferida)
    :Pessoa(nome, idade){
    this->linguagem_preferida = linguagem_preferida;
}

string Programador::get_linguagem(){
    return linguagem_preferida;
}

void Programador::set_linguagem(string s_linguagem_preferida){
    linguagem_preferida = s_linguagem_preferida;
}

void Programador::imprime_dados(){
    cout << "Nome do programador: " << nome << endl;
    cout << "Idade do programador: " << idade << endl;
    cout << "Linguagem preferida: " << linguagem_preferida << endl;
}