#include <iostream>
#include <string>

#include "Aluno.h"
#include "Pessoa.h"
#include "Programador.h"

using namespace std;

int main() {
    int opcao;
    cout << "Digite a opcao desejada: ";
    cin >> opcao;

    Pessoa Gabriel("Gabriel", 22);
    if(opcao== 1){
        Programador programador(Gabriel.get_nome(), Gabriel.get_idade(), "Python");
        cout << "A linguagem de programacao preferida e: " << programador.get_linguagem() << endl;
    } else if(opcao==2){
        Aluno aluno(Gabriel.get_nome(), Gabriel.get_idade(), 9.8);
        cout << "A nota deste aluno e: " << aluno.get_nota() << endl;
    }
    
    return 0;
}