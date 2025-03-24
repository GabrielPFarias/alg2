#pragma once
#include <iostream>
#include <string>

#include "Data.h"

using namespace std;

class Competicao {
    public:
        Competicao();
        Competicao(string, Data);
        string get_nome();
        string get_data();
        void set_nome(string nome);

    private:
        string nome;
        Data data;
};