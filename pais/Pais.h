#pragma once
#include <string>

using namespace std;

class Pais {
public:
    Pais();
    Pais(string, string, long, double);
    string get_codIso();
    string get_nome();
    long get_populacao();
    double get_dimensao();
    void set_codIso(string);
    void set_nome(string);
    void set_populacao(long);
    void set_dimensao(double);
    double get_densidade();
    int get_qtdPaisesVizinhos();
    bool verificaPaisIgual(Pais);
    void adicionaPaisVizinho(Pais*);
    Pais* getPaisesVizinhos();
    bool retornaPaisVizinho(Pais);
    Pais* retornaVizinhosEmComum(Pais*, int&);

private:
    string codIso;
    string nome;
    long populacao;
    double dimensao;
    Pais** vizinhos;
    int qtdPaisesVizinhos;
};