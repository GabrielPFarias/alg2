#pragma once
#include <iostream>
#include <string>

using namespace std;

class Atleta {
    
    protected:
        string nome;
        int idade;
    
    public:
        Atleta(string, int);
        virtual ~Atleta();
        string get_nome();
        int get_idade();
        void set_nome(string);
        void set_idade(int);
        void imprime_info();
};