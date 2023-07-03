
#include<stdio.h>
#include<locale.h>
#include<stdio.h>


void main()
{
    setlocale(LC_ALL,"");
    int num1,num2;
    printf("-------------------------------------\n");
    printf("Bem vindo a calculadora  do Mourato!\n");
    printf("-------------------------------------\n");
    printf("\n Insira o primeiro numero: ");
    scanf("%d", & num1);
    printf("Insira o segundo numero: ");
    scanf("%d", & num2);
    printf("A calculadora do Mourato diz que a soma é %d",num1+num2);
}
