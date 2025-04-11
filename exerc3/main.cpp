#include <iostream>
#include <string>

#include "Atleta.h"
#include "Competicao.h"
#include "Corredor.h"
#include "Data.h"
#include "InformacoesAtleta.h"
#include "Nadador.h"

using namespace std;

int main() {    
    Data hoje("10", "04", "2025");
    Competicao competicao_corredor("TTT", hoje);

    Data ano_passado("10", "04", "2024");
    Competicao competicao_2("Outra", ano_passado);

    Nadador nadador1("Gabriel", 22, "profissional");
    Corredor corredor1("Percival", 88, 65.4, &competicao_corredor);

    InformacoesAtleta info_atleta;
    /*
    info_atleta.imprime_exclusivos_atleta(&nadador1);
    info_atleta.imprime_exclusivos_atleta(&corredor1);

    corredor1.set_competicao(&competicao_2);
    
    corredor1.imprime_info();
    */
    info_atleta.imprime_informacoes_atleta(&nadador1);

    
    return 0;
}