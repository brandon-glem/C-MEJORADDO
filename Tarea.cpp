#include <iostream>

using namespace std;

int main()
{

    //Ejercicio #1
//    int edad;
//    cout<<"ingrese su edad: ";
//    cin>>edad;
//    if(edad<17){
//        cout<<"usted es menor de edad"<<endl;
//    }
//    else{
//        cout<<"usted es mayor de edad"<<endl;
//    }

    //ejercicio 2
//    int numero;
//    cout<<"ingrese el numero: ";
//    cin>>numero;
//    for(int n=0;n<numero;n++){
//        cout<<n;
//        cout<<",";
//    }
//    cout<<numero<<endl;

    //ejercicio 3
//    float x,y,z,menor,mayor,promedio;
//    cout<<"ingrese numero: ";
//    cin>>x;
//    cout<<"ingrese numero: ";
//    cin>>y;
//    cout<<"ingrese numero: ";
//    cin>>z;
//    if(x>y && x>z){
//        cout<<x<<" es el mayor"<<endl;
//    }
//    if(y>x && y>z){
//        cout<<y<<" es el mayor"<<endl;
//    }
//    if(z>x && z>y){
//        cout<<z<<" es el mayor"<<endl;
//    }
//    if(x<y && x<z){
//        cout<<x<<" es el menor"<<endl;
//    }
//    if(y<x && y<z){
//        cout<<y<<" es el menor"<<endl;
//    }
//    if(z<x && z<y){
//        cout<<z<<" es el menor"<<endl;
//    }
//    promedio=(x+y+z)/3;
//    cout<<"el promedio es: "<<promedio<<endl;


    //ejercicio 4
//    int numero1,numero2;
//    cout<<"ingrese numero: ";
//    cin>>numero1;
//    cout<<"ingrese numero: ";
//    cin>>numero2;
//    if(((numero1%2)== 0)&&((numero2%2)==0)){
//        cout<<numero1<<" y "<<numero2<<" son multiplos de 2"<<endl;
//    }
//    else
//        cout<<numero1<<" y "<<numero2<<" no son multiplos de 2"<<endl;
//
//    if((numero1%numero2)==0){
//        cout<<numero1<<" es multiplo de "<<numero2<<endl;
//    }
//    else
//        cout<<numero1<<" no es multiplo de "<<numero2<<endl;
//
//    if((numero1^2)==numero2){
//        cout<<"la potencia al cuadrado de "<<numero1<<" es "<<numero2<<endl;
//    }
//    else
//        cout<<"la potencia al cuadrado de "<<numero1<<" no es "<<numero2<<endl;


    //ejercicio 5
//    int numero, divisores=0;
//    cout<<"ingrese numero: ";
//    cin>>numero;
//    for(int i=1;i<(numero+1);i=i+1){
//        if ((numero%i)==0){
//            divisores=divisores+1;
//        }
//    }
//    if(divisores!=2){
//        cout<<"no es primo";
//    }
//    else
//        cout<< "es primo";
	
	
	//ejercicio 6
	int numero,primo, divisores=0,j=2;
	cout<<"ingrese numero: ";
	cin>>numero;
	while(j<numero){
		for(int i=1;i<(j+1);i=i+1){
			if ((j%i)==0){
				divisores=divisores+1;
			}
			primo=i;
		}
		if(divisores==2){
			cout<<primo<<",";
		}
		j++;
		divisores=0;
	}

	
	//ejercicio 7
//	int a,d,b=10000,res;
//	cout<<"Ingrese un numero de 5 digitos: "<<endl;
//	cin>>a;
//	while(b>=0){
//		d=a/b;
//		cout<<d<<"  ";
//		a=a%b;
//		b=b/10;		
//	}
	
	
	//ejercicio 8
//	int n, numero, digitos, reverso = 0;
//	cout << "ingrese un numero: ";
//	cin >> numero;	
//	n = numero;
//	
//	do
//	{
//		digitos = numero % 10;
//		reverso = (reverso * 10) + digitos;
//		numero = numero / 10;
//	} while (numero != 0);	
//	cout << " el numero alreves es : " << reverso << endl;	
//	if (n == reverso)
//		cout << " el numero es palindromo";
//	else
//		cout << " el numero no es palindromo";
	
		
    //ejercicio 9
//    int anio;
//    cout<<"ingrese un anio:";
//    cin>>anio;
//    if(anio % 4 == 0){
//            if (anio%100 != 0 || anio % 400 == 0){
//                cout<<"El anio " << anio << " ,si es Bisiesto";
//            }
//            else
//                cout<<"El anio " << anio << " ,no es Bisiesto";
//    }


    //ejercicio EXTRA
//    int i,fact=1,numero;
//    cout<<"ingresa un numero: ";
//    cin>>numero;
//    if(numero<0){
//        fact =0;
//    }
//    else if(numero==0){
//            fact=1;
//    }
//    else{
//      for (i = 1; i <= numero; i++){
//         fact = fact*i;
//      }
//    }
//    cout<<"Factorial de "<<numero<<" es: "<<fact<<endl;

    return 0;
}
