
#include<stdio.h>
#include<locale.h>



void main()
{
    setlocale(LC_ALL,"");
    int anonasc, anoat;
    printf("Insira o seu ano de nascimento: ");
    scanf("%d",&anonasc);
    printf("Insira o seu ano atual: ");
    scanf("%d",&anoat);
    printf("Se nasceu a %d sendo que esta a %d tem %d anos",anonasc,anoat,anoat-anonasc);


}
