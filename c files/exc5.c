
#include<stdio.h>
#include<locale.h>
#include<stdio.h>


void main()
{
    setlocale(LC_ALL,"");
    int numero, numero2,Soma,Subtracao,Multiplicar,Resto;
    float Divisao;

    printf("Insira um numero: ");
    scanf("%d",&numero);
    printf("\n");
    printf("Insira um numero: ");
    scanf("%d",&numero2);

    Soma=numero + numero2;
    Subtracao=numero - numero2;
    Multiplicar=numero * numero2;
    Divisao=numero / numero2;
    Resto= numero % numero2;

    printf("--------------------------------------------------------\n");
    printf("Bem vindo aos sinais matem�ticos dos numeros do Mourato!\n");
    printf("--------------------------------------------------------\n");
    printf("|                                                      |\n");
    printf("| os numeros %d e %d ser�o:                            |\n",numero,numero2);
    printf("|                                                      |\n");
    printf("| a soma deles � %d                                    |\n",Soma);
    printf("| a subtra��o deles � %d                               |\n",Subtracao);
    printf("| a Multiplica��o deles � %d                           |\n",Multiplicar);
    printf("| a Divis�o deles � %f                                 |\n",Divisao);
    printf("| o Resto deles � %d                                   |\n",Resto);
    printf("|                                                      |\n");
    printf("--------------------------------------------------------\n");
    }
