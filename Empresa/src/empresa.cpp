#include "empresa.h"

#include <iostream>
#include "string.h"

#include "funcionario.h"

using namespace std;

empresa::empresa(string nom,int id){
    nombreE=nom;
    ruc=id;
}

void empresa::ver_nombreE(){
    cout<<nombreE<<endl;
}

void empresa::ver_ruc(){
    cout<<ruc<<endl;
}

void empresa::mod_nombreE(string n){
    nombreE=n;
}

void empresa::mod_ruc(int i){
    ruc=i;
}

void empresa::agreg_funcionario(funcionario x){
    depa[indice]=x;
    indice++;
    cant++;
}

void empresa::aum_sueldo(float a){
    for(int i=0;i<cant;i++){
        float sal=depa[i].acc_salario();
        float aum=sal*a;
        sal+=aum;
        depa[i].mod_salario(sal);
    }
}

void empresa::ver_salarios(){
    for(int i=0;i<cant;i++){
        depa[i].ver_salario();
    }
}
