
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    int numero;
    setlocale(LC_ALL,"");
    printf("Insira um numero: ");
    scanf("%d",&numero);

    if(numero % 2 == 0){
    printf("par");
    }
else{
   printf("Impar");
    }


}
