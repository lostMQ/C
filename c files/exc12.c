#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{

    int nota,count;
    float media;
    setlocale(LC_ALL,"");
    printf("Insira a primeira nota: ");
    scanf("%d",&nota);
    count=count+nota;
    printf("Insira a Segunda nota: ");
    scanf("%d",&nota);
    count=count+nota;
    printf("Insira a Terceira nota: ");
    scanf("%d",&nota);
    count=count+nota;
    printf("Insira a Quarta nota: ");
    scanf("%d",&nota);
    count=count+nota;
    printf("Insira a Quinta nota: ");
    scanf("%d",&nota);
    count=count+nota;
    media=count/5;

    if(media >= 9.5){
    printf("Passou");
    }
else if(media >= 8 && media <9.5){
   printf("Recuperação");
    }
    else {
   printf("Reprovou");
    }
}

