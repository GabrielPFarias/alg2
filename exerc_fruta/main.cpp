#include <iostream>
#include <string>

#include "Fruta.h"
#include "Melancia.h"
#include "Banana.h"

using namespace std;

int main(){

    Banana banana1(4.5, "prata");
    Melancia melancia1(5.0, 1.11, true);
    cout << melancia1.calcula_preco_final() << endl;

    return 0;
}