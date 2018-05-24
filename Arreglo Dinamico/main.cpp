#include <iostream>
#include "arreglo_dinamico.h"

using namespace std;

int main()
{
    int arr[]={4,8,6,3,5,7,9,2,1};
    int tam=9;

    arreglo_dinamico dat(tam,arr);

    dat.InsertarAtras(5);
    dat.Insertar(4,10);
    cout<<dat.Primos()<<endl;
    dat.ver();

    return 0;
}
