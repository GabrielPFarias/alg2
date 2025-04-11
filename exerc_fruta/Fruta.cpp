#include <iostream>
#include <string>

#include "Fruta.h"

using namespace std;

Fruta::Fruta(double preco){
    this->preco = preco;
}

double Fruta::get_preco(){
    return preco;
}

void Fruta::set_preco(double s_preco){
    preco = s_preco;
}

double Fruta::calcula_preco(double imposto){
    return preco + (preco * imposto/100);
}