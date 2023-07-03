#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main()
{
    setlocale(LC_ALL,"");
    int dias;
    float km,coima;

    printf("Insira o numero de dias que usou o boguinhas : ");
    scanf("%d", &dias);

    printf("Insira quantos kilometros fez? ");
    scanf("%f", &km);

    coima = (dias*60) + (km*0.456);

    printf("--------------------------------------------------------\n");
    printf("Bem vindo ao alguel de carros esfola seu bolso!         \n");
    printf("--------------------------------------------------------\n");
    printf("|                                                      |\n");
    printf("|                                                      |\n");
    printf("|                                                      |\n");
    printf("|     Se andou %d dias                                 |\n", dias);
    printf("|     e percorreu %f kilometros                        |\n",km);
    printf("|     entao vai pagar %.2f euros                       |\n",coima);
    printf("|                                                      |\n");
    printf("|                                                      |\n");
    printf("|                                                      |\n");
    printf("--------------------------------------------------------\n");



}
