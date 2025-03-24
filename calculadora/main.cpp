#include <iostream>

#include "Calculadora.h"
#include "FuncionarioCaixa.h"
#include "Empresa.h"

using namespace std;



int main() {
    Calculadora calc(1, "vermelho");
    Calculadora calc2(2, "cinza");
    FuncionarioCaixa func1("Gabriel", "Rua 1", calc);
    FuncionarioCaixa func2("Matheus", "Rua 2", calc2);
    

    func1.get_soma(2,2);
    func1.get_subtracao(5,4);
    func1.get_multiplicacao(2,3);

    func2.get_divisao(6,2);
    func2.get_soma(7,2);
    func2.get_multiplicacao(8,3);

    Empresa SAP("SAP", func1, func2);
    SAP.imprime_info();
    return 0;
}