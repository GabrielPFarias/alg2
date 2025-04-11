#pragma once
#include <iostream>
#include <string>

using namespace std;

class Fruta{
    public:
        Fruta(double);
        double get_preco();
        void set_preco(double);
        double calcula_preco(double);

    protected:
        double preco;
    
};