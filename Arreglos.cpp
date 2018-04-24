#include <iostream>
using namespace std;

int suma(const int lista[],int tam){
	int r = 0;
	for(int i=0;i<tam;i++){
		r+=lista[i];
	}
	return r;
}


int suma_recu(const int lista[],int tam){
	int r = 0;
	if((tam-1)==0){
		r += lista[0];
	}
	else
		r = lista[tam-1] + suma(lista,tam-1);
	return r;
}

void reverza(int lista[],int tam){
	int indi=tam-1,ulti;
	for(int i=0;i<(tam/2);i++){
		ulti=lista[i];
		lista[i]=lista[indi];
		lista[indi]=ulti;
		indi=indi-1;
	}
}

void lend(int lista[]){
	
}

int main() {
	int matriz[]={1,2,3,4,5},tam=5;
	cout<<suma(matriz,5);
	return 0;
}

