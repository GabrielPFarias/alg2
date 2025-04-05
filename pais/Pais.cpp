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
    this->qtdPaisesVizinhos = qtdPaisesVizinhos;
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

Pais* Pais::retornaPaisesVizinhos() {
    Pais* retorno = new Pais[40];

    for (int i = 0; i < qtdPaisesVizinhos; i++) {
        retorno[i] = *vizinhos[i];
    }

    return retorno;
}