#pragma once
#include <iostream>
#include <string>

#include "Fruta.h"

using namespace std;

class Banana: public Fruta{
    public:
        Banana(double, string);
        string get_tipo();
        void set_tipo(string);

    private:
        double preco;
        string tipo;
};