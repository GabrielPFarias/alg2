#include <iostream>
#include <string>

#include "Atleta.h"
#include "Data.h"
#include "Competicao.h"
#include "Nadador.h"

using namespace std;

int main() {

    Atleta Gabriel("Gabriel", 22);

    Data Date("04", "04", "2025");

    Competicao Comp("Libertadores", Date);
    Comp.set_nome("Brasileiro");

    Nadador pessoa1(Gabriel, "100m");
    Comp.imprime_data();
    pessoa1.imprime_info();

    return 0;
}