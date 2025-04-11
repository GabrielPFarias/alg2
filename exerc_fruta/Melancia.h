#pragma once

#include <iostream>
#include <string>

#include "Fruta.h"

class Melancia: public Fruta{
    public:
        Melancia();
        Melancia(double, double, bool);
        double get_preco_adicional();
        void set_preco_adicional(double);
        double calcula_preco_final();

    private:
        double preco_adicional;
        bool epoca;
};