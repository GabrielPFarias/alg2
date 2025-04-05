#include <iostream>
#include <string>
#include "Data.h"

using namespace std;

Data::Data(){
    dia = "";
    mes = "";
    ano = "";
}

Data::Data(string dia, string mes, string ano){
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
}

string Data::get_dia(){
    return dia;
}

string Data::get_mes(){
    return mes;
}

string Data::get_ano(){
    return ano;
}

void Data::set_dia(string dia){
    dia = dia;
}

void Data::set_mes(string mes){
    mes = mes;
}

void Data::set_ano(string ano){
    ano = ano;
}

void Data::imprime_data(){
    cout << "Data: " << dia << "/" << mes << "/" << ano << endl;
}