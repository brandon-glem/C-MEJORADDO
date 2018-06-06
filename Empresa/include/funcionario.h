#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>
#include "string.h"

using namespace std;

class funcionario
{
    private:
        string nombre;
        string fecha;
        float salario;

    public:
        funcionario();
        funcionario(string nom,float sal,string fe);

        void ver_nombre();
        void ver_salario();
        void ver_fecha();

        void mod_nombre(string n);
        void mod_salario(float s);
        void mod_fecha(string f);

        string acc_nombre();
        string acc_fecha();
        float acc_salario();

};

#endif // FUNCIONARIO_H
