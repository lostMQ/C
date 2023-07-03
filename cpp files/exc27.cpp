#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include<iomanip>
using namespace std;

int main()
{

 int i,numero[10],auxmaior,auxmenor,posmaior=0,posmenor=999;

    for (i=1; i<=10; i++){
        cout<< ("insira um numero")<<endl;
        cin>> numero[i];
    }
    for (i=1; i<10; i++){
    if(numero[i]> auxmaior)
    {
        auxmaior=numero[i];
        posmaior=i+1;
    }
    if(numero[i]< auxmenor)
    {
        auxmenor=numero[i];
        posmenor=i +1;
    }
    }

    cin>>("o numero maior do arraio é %d na posiçao %d e o menor encontra-se no %d na posição %d do arraio",auxmaior,posmaior,auxmenor,posmenor);



return 0;
}
