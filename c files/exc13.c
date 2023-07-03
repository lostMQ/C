#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"");

    int escolha;
    int cpuchoice;

    srand(time(NULL));
    cpuchoice = rand() % 3 + 1;

    printf("1-pedra \n");
    printf("2-papel \n");
    printf("3-tesoura \n");

    printf("escolha sua opção? ->  ");
    scanf("%d",&escolha);

    if(escolha == 1 && cpuchoice == 2)
    {
        printf("Cpu wins");
        printf("\n");
       printf("player: %d, cpu: %d",escolha,cpuchoice);

    }
    else if(escolha == 1 && cpuchoice == 1)
    {
        printf("Empate");
        printf("\n");
       printf("player: %d, cpu: %d",escolha,cpuchoice);
    }
    else if(escolha == 1 && cpuchoice == 3)
    {
        printf("Player wins");
        printf("\n");
        printf("player: %d, cpu: %d",escolha,cpuchoice);
    }
    else if(escolha == 2 && cpuchoice == 1)
    {
        printf("Player wins");
        printf("\n");
        printf("player: %d, cpu: %d",escolha,cpuchoice);
    }
    else if(escolha == 2 && cpuchoice == 2)
    {
        printf("Empate");
        printf("\n");
        printf("player: %d, cpu: %d",escolha,cpuchoice);
    }
    else if(escolha == 2 && cpuchoice == 3)
    {
        printf("Player wins");
        printf("\n");
        printf("player: %d, cpu: %d",escolha,cpuchoice);
    }
    else if(escolha == 3 && cpuchoice == 1)
    {
        printf("Cpu wins");
        printf("\n");
        printf("player: %d, cpu: %d",escolha,cpuchoice);
    }
    else if(escolha == 3 && cpuchoice == 2)
    {
        printf("Player wins");
        printf("\n");
        printf("player: %d, cpu: %d",escolha,cpuchoice);
    }
    else if(escolha == 3 && cpuchoice == 3)
    {
        printf("Empate");
        printf("\n");
        printf("player: %d, cpu: %d",escolha,cpuchoice);
    }
    else
    {
        printf("Jogue direito nao roube!!! TwT \n ");
        printf("Perdeu!!!");
    }

}
