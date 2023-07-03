#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main(){
    setlocale(LC_ALL,"");

    int Vetor[10] ;
    int aux = 0;
    int pos = 0;
    for(int i = 0; i < 10; i++){
        printf(" insira um valor na posição %d -> ",i);
        scanf("%d",&Vetor[i]);
    }

    for(int i = 0; i < 10; i++){
        if (Vetor[i]> aux )
        {
            aux= Vetor[i];
            pos= i;
        }
    }
    printf("o maior numero do vetor é %d na posicao %d",aux,pos+1);
}
