#include <iostream>
#include <string>

#include "Banana.h"

using namespace std;

Banana::Banana(double preco, string tipo): Fruta(preco){
    this->tipo = tipo;
}

string Banana::get_tipo(){
    return tipo;
}

void Banana::set_tipo(string s_tipo){
    tipo = s_tipo;
}
