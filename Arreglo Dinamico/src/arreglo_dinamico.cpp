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
    for(int i=0;i<sise-1;i++){
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

void arreglo_dinamico::ver(){
    for(int i=0;i<sise;i++)
        std::cout<<data[i]<<",";
}

int arreglo_dinamico::Primos(){
    int cant_primos=0;
    for(int i=0;i<sise;i++){
            int divisores=0;
            for(int j=1;j<=data[i];j++){
                if ((data[i]%j)==0)
                    divisores++;
            }
            if(divisores==2)
                cant_primos+=1;
    }
    return cant_primos;
}
