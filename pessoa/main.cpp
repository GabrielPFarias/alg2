#include <iostream>

#include "Pessoa.h"

using namespace std;



int main() {
    Pessoa pessoa1("Gabriel", 22, 0, "Rua São João");
    pessoa1.get_info();
    cout << pessoa1.get_is_filho_unico();
}