#include <iostream>
#include <string>

using namespace std;

class Pessoa {
    public:
        
        Pessoa();
        Pessoa(string, int, int, string);
        void get_info();
        bool get_is_filho_unico();
        
    private:
        string nome;
        int idade;
        int qtdIrmaos;
        string endereco;

        
        void imprime_info(){
            cout << "Nome: " << nome << endl;
            cout << "Idade: " << idade << endl;
            cout << "Quantidade de irmãos: " << qtdIrmaos << endl;
            cout << "Endereço: " << endereco << endl;
        }

        bool is_filho_unico(){
            return qtdIrmaos == 0;
        }

};