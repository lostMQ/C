
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main()
{
    setlocale(LC_ALL,"");
    system("color 3F")
    float peso,altura;

    printf("_____________________________________________________________ Bem-vindo ____________________________________________________________________________\n\n");
    printf("_____Aqui podes descobrir qual é o teu imc(indice de massa corporal)___\n\n\n");

    printf("insira seu peso: -> ");
    scanf("%f",&peso);
    printf("insira sua altura com virgula por favor: -> ");
    scanf("%f",&altura);

    float imc = peso/(altura*altura);



    if(imc < 18.5)
        {
            printf("Está abaixo do peso");
        }
    else if(imc > 18.5 && imc < 24.9)
    {
        printf("peso normal");
    }
     else if(imc > 25.0 && imc < 29.9)
    {
        printf("sobrepeso");
    }
    else if(imc > 30 && imc < 34.9)
    {
        printf("grau de obesidade 1");
    }
     else if(imc > 35.0 && imc < 39.9)
    {
        printf("grau de obesidade 2");
    }
     else
    {
        printf("obesidade mórbida");
    }
    printf("\n\n\n____Este projeto foi realizado por Nádia Pinto && Bruno Azevedo!!_____________\n\n\n");

   /*
  
     ∧,,,∧
    (,,・∀・)  
    █████████ ═╮
    █████████ ▏|
    █████████ ═╯
    ◥███████◤

   */
}
