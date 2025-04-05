#pragma once
#include <iostream>
#include <string>

using namespace std;
class Data {
    private:
        string dia;
        string mes;
        string ano;

    public:
        Data();
        Data(string, string, string);
        string get_dia();
        string get_mes();
        string get_ano();
        void set_dia(string);
        void set_mes(string);
        void set_ano(string);
        void imprime_data();
};