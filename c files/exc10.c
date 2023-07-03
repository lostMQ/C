#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");
    int velocidade,multa;
    printf("Insira sua velocidade: ");
    scanf("%d",&velocidade);

    if(velocidade < 80)
    {
        printf("safaste dos Radar esfola seu bolsinho!!");
    }
    else
        {
        multa= velocidade-80;
        multa=multa*7+100;
    printf("--------------------------------------------------------\n");
    printf("Bem vindo ao radar esfola seu bolso!                    \n");
    printf("--------------------------------------------------------\n");
    printf("|                                                      |\n");
    printf("|                                                      |\n");
    printf("|                                                      |\n");
    printf("|     Vai pagar %d euros                               |\n", multa);
    printf("|                                                      |\n");
    printf("|                                                      |\n");
    printf("|                                                      |\n");
    printf("--------------------------------------------------------\n");
        }
    }

