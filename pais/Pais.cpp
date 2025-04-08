#include <iostream>
#include <string>

#include "Pais.h"

using namespace std;

Pais::Pais() {
    this->codIso = "";
    this->nome = "";
    this->populacao = 0;
    this->dimensao = 0.0;
    this->vizinhos = new Pais * [40];
    this->qtdPaisesVizinhos = 0;
}

Pais::Pais(string codIso, string nome, long populacao, double dimensao) {
    this->codIso = codIso;
    this->nome = nome;
    this->populacao = populacao;
    this->dimensao = dimensao;
    this->vizinhos = new Pais * [40];
    this->qtdPaisesVizinhos = 0;
}

string Pais::get_codIso() {
    return codIso;
}

string Pais::get_nome() {
    return nome;
}

long Pais::get_populacao() {
    return populacao;
}

double Pais::get_dimensao() {
    return dimensao;
}

double Pais::get_densidade() {
    return populacao / dimensao;
}

int Pais::get_qtdPaisesVizinhos(){
    return qtdPaisesVizinhos;
}

void Pais::set_codIso(string codIso) {
    codIso = codIso;
}

void Pais::set_nome(string nome) {
    nome = nome;
}

void Pais::set_dimensao(double dimensao) {
    dimensao = dimensao;
}

void Pais::set_populacao(long populacao) {
    populacao = populacao;
}

bool Pais::verificaPaisIgual(Pais pais2) {
    return codIso == pais2.get_codIso();
}

void Pais::adicionaPaisVizinho(Pais* pais) {
    vizinhos[qtdPaisesVizinhos] = pais;
    qtdPaisesVizinhos += 1;
}

bool Pais::retornaPaisVizinho(Pais pais2) {
    string nome_pais2 = pais2.get_nome();

    for (int i = 0; i < qtdPaisesVizinhos; i++) {
        string nome_pais1 = vizinhos[i]->get_nome();
        if(nome_pais2 == nome_pais1){ 
            return true;}
    }

    return false;
}

Pais* Pais::getPaisesVizinhos() {
    Pais* retorno = new Pais[40];

    for (int i = 0; i < qtdPaisesVizinhos; i++) {
        retorno[i] = *vizinhos[i];
    }

    return retorno;
}

Pais* Pais::retornaVizinhosEmComum(Pais* pais2, int& qtdVizinhosComum){
    Pais* pais1_vizinhos = this->getPaisesVizinhos();
    int pais1_qtdVizinhos = this->get_qtdPaisesVizinhos();

    Pais* pais2_vizinhos = pais2->getPaisesVizinhos();
    int pais2_qtdVizinhos = pais2->get_qtdPaisesVizinhos();
    
    Pais* vizinhosEmComum = new Pais[40];
    qtdVizinhosComum = 0;

    for(int i=0; i<pais1_qtdVizinhos; i++){
        for(int j=0; j<pais2_qtdVizinhos; j++){
            if(pais1_vizinhos[i].get_nome() == pais2_vizinhos[j].get_nome()){
                vizinhosEmComum[qtdVizinhosComum] = pais1_vizinhos[i];
                qtdVizinhosComum++;
                break;
            }
        }
    }

    return vizinhosEmComum;
}
