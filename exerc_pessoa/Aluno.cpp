#include <iostream>
#include <string>

#include "Aluno.h"

using namespace std;

Aluno::Aluno(string nome, int idade, double nota)
: Pessoa(nome, idade) {
    this->nota = nota;
}

double Aluno::get_nota(){
    return nota;
}

void Aluno::set_nota(double s_nota){
    nota = s_nota;
}

void Aluno::imprime_dados(){
    cout << "Nome do aluno: " << nome << endl;
    cout << "Idade do aluno: " << idade << endl;
    cout << "Nota do aluno: " << nota << endl;
}
