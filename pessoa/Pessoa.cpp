#include "Pessoa.h"
#include <string>

using namespace std;

Pessoa::Pessoa(string nome, int idade, int qtdIrmaos, string endereco) {
    this->nome = nome;
    this->idade = idade;
    this->qtdIrmaos = qtdIrmaos;
    this->endereco = endereco;
};


void Pessoa::get_info() {
    return imprime_info();
};


bool Pessoa::get_is_filho_unico() {
    return is_filho_unico();
};