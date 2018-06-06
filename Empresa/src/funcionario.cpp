#include "funcionario.h"

#include <iostream>
#include "string.h"

using namespace std;
funcionario::funcionario(){
    nombre="";
    salario=0;
    fecha="";
}

funcionario::funcionario(string nom,float sal,string fe){
    nombre=nom;
    salario=sal;
    fecha=fe;
}

void funcionario::ver_nombre(){
    cout<<nombre<<endl;
}

void funcionario::ver_salario(){
    cout<<salario<<endl;
}

void funcionario::ver_fecha(){
    cout<<fecha<<endl;
}

void funcionario::mod_nombre(string n){
    nombre=n;
}

void funcionario::mod_salario(float s){
    salario=s;
}

void funcionario::mod_fecha(string f){
    fecha=f;
}

string funcionario::acc_nombre(){
    return nombre;
}

string funcionario::acc_fecha(){
    return fecha;
}

float funcionario::acc_salario(){
    return salario;
}
