#ifndef EMPRESA_H
#define EMPRESA_H

#include <iostream>
#include "string.h"
#include "funcionario.h"

using namespace std;


class empresa
{
    private:
        string nombreE;
        int ruc;

        funcionario depa[10];
        int indice=0;
        int cant=0;

    public:
        empresa(string nom,int id);

        void ver_nombreE();
        void ver_ruc();

        void mod_nombreE(string n);
        void mod_ruc(int i);

        void agreg_funcionario(funcionario x);
        void aum_sueldo(float a);
        void ver_salarios();
};

#endif // EMPRESA_H
