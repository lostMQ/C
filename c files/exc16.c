#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");
    int nota;

    printf("insira a nota: -> ");
    scanf("%d",&nota);

    switch(nota){
    case 1 ... 5 :

            printf("Muito insufiente!! Vai estudar!!");
            break;
    case 6 ... 9:
            printf("insufiente!! Foi perto!!");
            break;
    case 10 ... 13:

            printf("Suficiente!! Safaste da Seringa do chumbo!!");
            break;
    case 14 ... 17:

            printf("Bom!! Gasta teu tempo a descansar!!");
            break;
    case 18 ... 19 :

            printf("Muito Bom!! Devias receber medalha!!");
            break;
    case 20 :
            printf("Não sais á noite?? nao divertes com os teus amigos?? Que vida é essa so livros dormir e livros??");
            break;
            default:
            printf("Que Jénio da Galheta do óleo");
            break;
}
    }


