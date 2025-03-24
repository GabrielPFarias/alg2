#include <iostream>
#include <string>
#include "Empresa.h"


using namespace std;

Empresa::Empresa(string nome, FuncionarioCaixa funcionario1, FuncionarioCaixa funcionario2):
nome(nome), funcionario1(funcionario1), funcionario2(funcionario2) {}

string Empresa::get_nome(){
    return nome;
};

void Empresa::set_nome(string nome){
    nome = nome;
}

FuncionarioCaixa Empresa::get_funcionario1(){
    return funcionario1;
};

void Empresa::set_funcionario1(FuncionarioCaixa funcionario1){
    /*funcionario1 = funcionario1;*/
};

FuncionarioCaixa Empresa::get_funcionario2(){
    return funcionario2;
};

void Empresa::set_funcionario2(FuncionarioCaixa funcionario2){
    /*funcionario2 = funcionario2;*/
};

void Empresa::imprime_info(){
    cout << "Nome da empresa: " << nome << endl;

    cout << "Funcionário 1: " << funcionario1.get_nome() << endl;
    cout << "Funcionário 2: " << funcionario2.get_nome() << endl;
    
};