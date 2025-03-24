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
        void set_dia();
        void set_mes();
        void set_ano();
        void imprime_data();
};