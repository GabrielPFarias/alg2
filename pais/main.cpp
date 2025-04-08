#include <iostream>
#include <iomanip>
#include "Pais.h"

using namespace std;

int main() {

    Pais Brasil("321", "Brasil", 456789, 789.123);
    Pais Argentina("111", "Argentina", 123, 456.12);
    Pais Uruguai("222", "Uruguai", 2987, 124.12);
    Pais Chile("789", "Chile", 29384, 1267.12);
    Pais Paraguai("789", "Paraguai", 29384, 1267.12);


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

    bool isVizinho1 = Brasil.retornaPaisVizinho(Argentina);
    bool isVizinho2 = Brasil.retornaPaisVizinho(Uruguai);

    cout << "Argentina: " << isVizinho1 << endl;
    cout << "Uruguai: " << isVizinho2 << endl;
    **/
    
    Brasil.adicionaPaisVizinho(&Argentina);
    Brasil.adicionaPaisVizinho(&Uruguai);
    Brasil.adicionaPaisVizinho(&Chile);

    Argentina.adicionaPaisVizinho(&Brasil);
    Argentina.adicionaPaisVizinho(&Chile);
    Argentina.adicionaPaisVizinho(&Uruguai);

    int qtdVizinhosEmComum;
    Pais* retorno = Brasil.retornaVizinhosEmComum(&Argentina, qtdVizinhosEmComum);
    
    for(int i=0; i<qtdVizinhosEmComum; i++){
        cout << "Pais: " << retorno[i].get_nome() << endl;
    }
    return 0;
}