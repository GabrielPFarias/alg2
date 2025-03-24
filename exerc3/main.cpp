#include <iostream>
#include <string>

#include "Atleta.h"
#include "Data.h"
#include "Competicao.h"
#include "Nadador.h"

using namespace std;

int main() {

    Atleta Gabriel("Gabriel", 22);

    Data Date("21", "03", "2025");

    Competicao Comp("Libertadores", Date);
    Comp.set_nome("Brasileiro");

    Nadador pessoa1(Gabriel, "100m");
    pessoa1.imprime_info();

    return 0;
}