
#include<stdio.h>
#include<locale.h>
#include<stdio.h>


void main()
{
    setlocale(LC_ALL,"");
    int num;
    printf("------------------------------------------------\n");
    printf("Bem vindo aos sucessores dos numeros do Mourato!\n");
    printf("------------------------------------------------\n");
    printf("\nInsere um numero para o guru da matem�tica dizer: ");
    scanf("%d", & num);
    printf("o antesucessor de %d � %d e o sucessor %d",num,num-1,num+1);
    }
