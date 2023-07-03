#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    //Se o condutor foi apanhado em auto estrada, em via rapida, localidade
    //Quero saber a velocidade do condutor
    //Validar se a velocidade do condutor é superior ao limite consoante o local

    //declarar variaveis
    int velocidade, local;
    int velMaximaAutoEstrada = 120;
    int velMaximaViaRapida = 90;
    int velMaximaLocalidade = 50;
    int multaAutoEstrada = 150;
    int multaViaRapida = 130;
    int multaLocalidade = 100;

    printf("Digite a sua velocidade: ");
    scanf("%d", &velocidade);
    printf("Digite em que local se encontrava:\n");
    printf("[1] - Auto estrada\n");
    printf("[2] - Via Rápida\n");
    printf("[3] - Localidades\n");
    printf(">>>>>>>>>>>>>> ");
    scanf("%d", &local);

    if(local > 3 || local < 1){
        printf("ERRO, TENTE NOVAMENTE!!!");
    }else{
        if(local == 1 && velocidade > velMaximaAutoEstrada){
            printf("MULTADO EM %d por estar na auto estrada", multaAutoEstrada);
        } else if(local == 2 && velocidade > velMaximaViaRapida){
            printf("MULTADO EM %d por ir na via rapida", multaViaRapida);
        } else if(local == 3 && velocidade > velMaximaLocalidade){
            printf("MULTADO EM %d por estar dentro de localidade", multaLocalidade);
        } else{
            printf("Conduza com segurança!");
        }
    }
}

