#include "arreglo_dinamico.h"

arreglo_dinamico::arreglo_dinamico(int sise,int arr[]){
    this->sise=sise;
    this->data=new int[sise];
    for(int i=0;i<=sise;i++){
        data[i]=arr[i];
    }
}

void arreglo_dinamico::InsertarAtras(int element){
    int *nuevo = new int[++sise];
    ++sise;
    for(int i=0;i<sise;i++){
        nuevo[i]=data[i];
    }
    nuevo[sise-1]=element;
    delete []data;
    data=nuevo;
}

void arreglo_dinamico::Insertar(int pos,int element){
    int *nuevo = new int[++sise];
    for(int i=0;i<pos;i++)
        nuevo[i]=data[i];
    nuevo[pos]=element;
    for(int i=pos;i<sise;i++)
            nuevo[i+1]=data[i];
    delete []data;
    data=nuevo;
}

void arreglo_dinamico::Eliminar(int pos){

}
