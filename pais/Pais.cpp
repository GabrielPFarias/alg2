#include <iostream>
#include <string>

#include "Pais.h"

using namespace std;

Pais::Pais(string codIso, string nome, long populacao, double dimensao){
    this->codIso = codIso;
    this->nome = nome;
    this->populacao = populacao;
    this->dimensao = dimensao;
    this->vizinhos = new Pais*[40];
    this->qtdPaisesVizinhos = qtdPaisesVizinhos;
}

string Pais::get_codIso(){
    return codIso;
}

string Pais::get_nome(){
    return nome;
}

long Pais::get_populacao(){
    return populacao;
}

double Pais::get_dimensao(){
    return dimensao;
}

double Pais::get_densidade(){
    return populacao / dimensao;
}

bool Pais::verificaPaisIgual(Pais pais2){
    return codIso == pais2.get_codIso();
}

void Pais::adicionaPaisVizinho(Pais *pais){
    vizinhos[qtdPaisesVizinhos] = pais;
    qtdPaisesVizinhos += 1;
}

Pais* Pais::retornaPaisesVizinhos(){
    Pais *retorno = new Pais[40];

    for(int i = 0; i < qtdPaisesVizinhos + 1; i++){
        retorno[i] = *vizinhos[i];
    }
    
    return retorno;
}