#include <iostream>
#include <iomanip>
#include "Pais.h"

using namespace std;

int main() {

    Pais Brasil("321", "Brazil", 456789, 789.123);
    Pais Argentina("111", "Argentina", 123, 456.12);

    /**
    Brasil.set_codIso("123");
    cout << "CodIso: " << Brasil.get_codIso() << endl;

    Brasil.set_nome("Brasil");
    cout << "Nome: " << Brasil.get_nome() << endl;

    Brasil.set_populacao(123456789);
    cout << "Populacao: " << Brasil.get_populacao() << endl;

    cout << fixed << setprecision(3);
    Brasil.set_dimensao(456789.123);
    cout << "Dimensao: " << Brasil.get_dimensao() << endl;

    cout << "Pais igual? " << Brasil.verificaPaisIgual(Argentina) << endl;

    cout << "Densidade Pais: " << Brasil.get_densidade() << endl;
    **/

    Brasil.adicionaPaisVizinho(&Argentina);


    Pais* vizinhos = Brasil.retornaPaisesVizinhos();

    for (int i = 0; i < 1; i++) {
        cout << vizinhos[i].get_nome() << endl;
    };

    return 0;
}