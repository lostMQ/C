#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    int num1;

    printf("Digite um número para saber a tabuada: ");
    scanf("%d", &num1);

    for(int cont = 0; cont <= 10; cont++){
        printf("%d x %d = %d\n", num1, cont, num1 * cont);
    }

}
