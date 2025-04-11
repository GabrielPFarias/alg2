#pragma once
#include <iostream>
#include <string>

using namespace std;

class Pessoa{
    public:
        Pessoa(string, int);
        string get_nome();
        int get_idade();
        void set_nome(string);
        void set_idade(int);
        void imprime_dados();
    protected:
        string nome;
        int idade;
};