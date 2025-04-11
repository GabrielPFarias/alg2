#include <iostream>
#include <string>

#include "Melancia.h"

using namespace std;

Melancia::Melancia(): Fruta(2){
    
}

Melancia::Melancia(double preco, double preco_adicional, bool epoca)
    : Fruta(preco){
    this->preco_adicional = preco_adicional;
    this->epoca = epoca;
}

double Melancia::get_preco_adicional(){
    return preco_adicional;
}

void Melancia::set_preco_adicional(double s_preco_adicional){
    preco_adicional = s_preco_adicional;
}

double Melancia::calcula_preco_final(){
    if (epoca){
        return preco + preco_adicional;
    }
    return preco;
}