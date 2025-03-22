#include <iostream>

using namespace std;

class Atleta {
    
    private:
        string nome;
        int idade;
    
    public:
        Atleta();
        Atleta(string, int);
        string get_nome();
        int get_idade();
        void set_nome();
        void set_idade();
        void imprime_info();
};