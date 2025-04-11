#include <iostream>
#include <string>

#include "Atleta.h"
#include "Corredor.h"
#include "InformacoesAtleta.h"
#include "Nadador.h"


using namespace std;

InformacoesAtleta::InformacoesAtleta(){}

void InformacoesAtleta::imprime_exclusivos_atleta(Atleta* atleta) {
    if(Nadador* n = dynamic_cast<Nadador*>(atleta)) {
    cout << "E um nadador, e sua categoria e: " << n->get_categoria() << endl;
    }
    else if(Corredor* c = dynamic_cast<Corredor*>(atleta)) {
    cout << "E um corredor, e o peso deste corredor e: " << c->get_peso() << endl;
    }
}

void InformacoesAtleta::imprime_informacoes_atleta(Atleta* atleta){
    (*atleta).imprime_info();
}