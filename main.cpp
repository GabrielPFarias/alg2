#include <iostream>

#include "Calculadora.cpp"

using namespace std;



int main() {
    Calculadora calc(1, "vermelho");
    cout << calc.soma(1,2) << endl;
    cout << calc.subtracao(10,3) << endl;
    cout << calc.multiplicacao(7,3) << endl;
    cout << calc.divisao(121,11) << endl;
    cout << calc.eleva_ao_quadrado(15) << endl;
    cout << calc.eleva_ao_cubo(5) << endl;
    calc.imprime_info();

    return 0;
}