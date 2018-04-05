#include <iostream>
using namespace std;

int main() {
	int numero, divisores=0,divisor;
	cout<<"ingrese numero: ";
	cin>>numero;
	for(int i=1;i<(numero+1);i=i+1){
		if ((numero%i)==0){
			divisores=divisores+1;
			if(divisores==2){
				divisor=i;
			}
		}
	}
	if(divisores!=2){
		cout<<"no es primo"<<endl;
		cout<<"su menor divisor es: "<<divisor;
	}
	return 0;
}

