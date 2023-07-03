#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    int dia;


    printf("\n Digite um número para o dia: ");
    scanf("%d", &dia);

    switch(dia){
            case 1:
            printf("o dia %d é Domingo",dia);
                break;
            case 2:
            printf("o dia %d é Segunda",dia);
                break;
                case 3:
            printf("o dia %d é Terça",dia);
                break;
                case 4:
            printf("o dia %d é Quarta",dia);
                break;
                case 5:
            printf("o dia %d é Quinta",dia);
                break;
                case 6:
            printf("o dia %d é Sexta",dia);
                break;
                case 7:
            printf("o dia %d é Sabado",dia);
                break;
        default:
                printf("ERRO! PARE DE ESTAR EM NARNIA!");
            break;
    }
}
