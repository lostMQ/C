#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    int numero, aux = 0;
    printf("Insira um numero: ");
    scanf("%d",&numero);

    for(int i = 1; i <= numero; i++){
        if(numero % i == 0){
            aux += 1;
        }
    }
    printf("%d \n", aux);

    if (aux != 2){
        printf("Numero nao primo");

    }else
        {printf("numero primo");
    }
}

