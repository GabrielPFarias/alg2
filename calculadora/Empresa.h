#pragma once
#include <iostream>
#include <string>
#include "FuncionarioCaixa.h"

using namespace std;

class Empresa {
    public:
        Empresa();
        Empresa(string, FuncionarioCaixa, FuncionarioCaixa);
        string get_nome();
        void set_nome(string);
        FuncionarioCaixa get_funcionario1();
        FuncionarioCaixa get_funcionario2();
        void set_funcionario1(FuncionarioCaixa);
        void set_funcionario2(FuncionarioCaixa);
        void imprime_info();
    private:
        string nome;
        FuncionarioCaixa funcionario1;
        FuncionarioCaixa funcionario2;

};