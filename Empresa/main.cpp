#include <iostream>
#include "string.h"
#include "funcionario.h"
#include "empresa.h"

using namespace std;

int main()
{
    empresa e("juanito.sac",10216597);

    funcionario a("juan",980,"1/4/2000");
    funcionario b("miguel",1500,"18/6/1998");
    funcionario c("carlos",1000,"12/12/2001");
    funcionario d("luis",1200,"15/11/2006");

    e.agreg_funcionario(a);
    e.agreg_funcionario(b);
    e.agreg_funcionario(c);
    e.agreg_funcionario(d);

    e.aum_sueldo(0.1);
    e.ver_salarios();

    return 0;
}
