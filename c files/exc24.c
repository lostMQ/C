#include <stdio.h>

#include <stdlib.h>

#include <locale.h>

#include <time.h>

#include <conio.h>



void main() {

    setlocale(LC_ALL, "");



    //declarar arrays e variavel de tamanho

    int paulo[5], mayra[5], patricia[5];

    int tam = sizeof(paulo) / sizeof(paulo[0]); //calcular o numero de elementos

    float somaPaulo = 0, somaMayra = 0, somaPatricia = 0;





    printf("NOTAS DO PAULO\n");

    for(int i = 0; i < tam; i++){

        printf("Digite a nota %d: ", i + 1);

        scanf("%d", &paulo[i]);

        somaPaulo = somaPaulo + paulo[i];

    }



    printf("\nNOTAS DA MAYRA\n");

    for(int i = 0; i < tam; i++){

        printf("Digite a nota %d: ", i + 1);

        scanf("%d", &mayra[i]);

        somaMayra = somaMayra + mayra[i];



    }



    printf("\nNOTAS DA PATRICIA\n");

    for(int i = 0; i < tam; i++){

        printf("Digite a nota %d: ", i + 1);

        scanf("%d", &patricia[i]);

        somaPatricia = somaPatricia + patricia[i];

    }



    float mediaPaulo = somaPaulo / tam;

    float mediaMayra = somaMayra / tam;

    float mediaPatricia = somaPatricia / tam;



    if(mediaPaulo >= 9.5){

        printf("\nO Paulo foi aprovado com m�dia de %.2f valores.\n", mediaPaulo);

    }else if(mediaPaulo <= 8){

        printf("\nO Paulo foi reprovado com m�dia de %.2f valores.\n", mediaPaulo);

    }else{

        printf("\nO Paulo est� em recupera��o com m�dia de %.2f valores\n", mediaPaulo);

    }



    if(mediaMayra >= 9.5){

        printf("\nA Mayra foi aprovada com m�dia de %.2f valores.\n", mediaMayra);

    }else if(mediaMayra <= 8){

        printf("\nA Mayra foi reprovada com m�dia de %.2f valores.\n", mediaMayra);

    }else{

        printf("\nA Mayra est� em recupera��o com m�dia de %.2f valores\n", mediaMayra);

    }



    if(mediaPatricia >= 9.5){

        printf("\nA Patricia foi aprovada com m�dia de %.2f valores.\n", mediaPatricia);

    }else if(mediaPatricia <= 8){

        printf("\nA Patricia foi reprovada com m�dia de %.2f valores.\n", mediaPatricia);

    }else{

        printf("\nA Patricia est� em recupera��o com m�dia de %.2f valores\n", mediaPatricia);

    }



}
