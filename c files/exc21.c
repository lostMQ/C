#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");
    int opcao = 1,escolha;
    while (opcao!= 2 ) {
        if(opcao < 1 || opcao > 2){
            printf("Erro, opção invalida");
            break;
        }
         else{
        printf("digite um numero de 1 a 10: -> ");
        scanf("%d",&escolha);
        int cpuchoice,aux;
        srand(time(NULL));
        cpuchoice = rand() % 10 + 1;
        aux=escolha;
        int resultado = cpuchoice + escolha;


        printf("=== 1->Par ===\n");
        printf("=== 2->Impar ===\n");
        scanf("%d",&escolha);


        if( escolha == 1 && resultado % 2 == 0){
            printf("Player ganha\n");
        }
        else if (escolha == 2 && resultado % 2 != 0)
            {
            printf("Player ganha\n");
        }
        else{
            printf("Cpu wins\n");
        }
    printf("Player -> %d\n pc -> %d\n",aux,cpuchoice);
    printf("try again? 1->Replay game || 2-> Exit game \n ");
    scanf("%d",&opcao);

    }
    }
}
