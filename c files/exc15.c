#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    int num1, num2, opcao;

    printf("Bem vindo a calculadora a base de Switches");

    printf("\nDigite um n�mero ");
    scanf("%d", &num1);

    printf("\nDigite outro n�mero ");
    scanf("%d", &num2);

    printf("\n1-> Soma");
    printf("\n2-> Subtra��o");
    printf("\n3-> Multiplica��o");
    printf("\n4-> Divis�o");
    printf("\nEscolha o numero da op��o ");
    scanf("%d", &opcao);
    switch(opcao){
        case 1:
                printf("%d + %d = %d", num1, num2, num1 + num2);
            break;
        case 2:
                printf("%d - %d = %d", num1, num2, num1 - num2);
            break;
        case 3:
                printf("%d x %d = %d", num1, num2, num1 * num2);
            break;
        case 4:
                printf("%d / %d = %.2f", num1, num2, (float)num1 / num2);
            break;
        default:
                printf("opera��o inv�lida g�nio da matem�tica!");
            break;
    }
}
