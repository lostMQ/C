#include<stdio.h>
#include<locale.h>
#include<stdio.h>


void main()
{
    setlocale(LC_ALL,"");
    int nota1,nota2,nota3,nota4,nota5,count;
    int soma;
    float media;


    printf("Insira a primeira nota: ");
    scanf("%d",&nota1);
    count=count+1;
    printf("\n");
    printf("Insira a primeira nota: ");
    scanf("%d",&nota2);
    count=count+1;
    printf("\n");
    printf("Insira a primeira nota: ");
    scanf("%d",&nota3);
    count=count+1;
    printf("\n");
    printf("Insira a primeira nota: ");
    scanf("%d",&nota4);
    count=count+1;
    printf("\n");
    printf("Insira a primeira nota: ");
    scanf("%d",&nota5);
    count=count+1;
    printf("\n");

    soma=nota1+nota2+nota3+nota4+nota5;
    media=soma/count;


    printf("--------------------------------------------------------\n");
    printf("Bem vindo ao sistema de notas do Mourato!               \n");
    printf("--------------------------------------------------------\n");
    printf("|                                                      |\n");
    printf("| Aluno 1 com a nota %d                                |\n",nota1);
    printf("| Aluno 2 com a nota %d                                |\n",nota2);
    printf("| Aluno 3 com a nota %d                                |\n",nota3);
    printf("| Aluno 4 com a nota %d                                |\n",nota4);
    printf("| Aluno 5 com a nota %d                                |\n",nota5);
    printf("|                                                      |\n");
    printf("| A soma das notas dos alunos %d                       |\n",soma);
    printf("|                                                      |\n");
    printf("| Numero de alunos %d                                  |\n",count);
    printf("|                                                      |\n");
    printf("| Media desses alunos %f                               |\n",media);
    printf("|                                                      |\n");
    printf("|                                                      |\n");
    printf("|                                                      |\n");
    printf("--------------------------------------------------------\n");
}
