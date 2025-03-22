#include <iostream>
#include <string>

#include "Atleta.cpp"
#include "Data.cpp"
#include "Competicao.cpp"

using namespace std;

int main() {

    Atleta Gabriel("Gabriel", 22);
    Gabriel.imprime_info();

    Data Date("21", "03", "2025");
    Date.imprime_data();

    Competicao Comp("Libertadores", Date);
    Comp.set_nome("Brasileiro");
    return 0;
}