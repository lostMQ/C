#include <stdio.h>

#include <stdlib.h>

#include <locale.h>

#include <time.h>

#include <conio.h>



void main() {

    setlocale(LC_ALL, "");



    //declarar variaveis

    int vetor[5]; //declarei o vetor

    int temp; // declarei uma variavel temporaria



    //ler os n�meros e scanea-los para o vetor

    for(int i = 0; i < 5; i++){

        printf("Digite um n�mero: ");

        scanf("%d", &vetor[i]);

    }



    //imprimir os n�meros digitados pela ordem digitada

    printf("\nOs n�meros digitados s�o:\n");

    for(int i = 0; i < 5; i++){

        printf("%d\n", vetor[i]);

    }



    //alterar a ordem

    for(int i = 0; i < 2; i++){

        temp = vetor[i]; //a variavel temp vai receber o vetor no �ndice de i

        vetor[i] = vetor[4 - i]; //o vetor no indice de i vai receber o vetor no indice de 4(ultimo indice) - i

        vetor[4 - i] = temp; //o vetor no ultimo indice - i vai receber o valor da variavel temporaria

    }



    //imprimir o vetor com os novos elementos

    printf("\nOs n�meros invertidos s�o:\n");

    for(int i = 0; i < 5; i++){

        printf("%d\n", vetor[i]);

    }



}
