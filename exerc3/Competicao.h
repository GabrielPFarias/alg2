#include "Data.h"

class Competicao: public Data {
    public:
        Competicao();
        Competicao(string, Data);
        string get_nome();
        string get_data();
        void set_nome(string nome);

    private:
        string nome;
        Data date;
};