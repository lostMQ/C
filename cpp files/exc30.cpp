#include <iostream>

#include <stdlib.h>

#include <locale.h>

#include <conio.h>



#define NOTAS 5



using namespace std;



//FUN��ES



//Pedir as 5 notas

void pedeNotas(int a[NOTAS]){

    for(int i = 0; i < NOTAS; i++){

        cout << "Digite uma nota: ";

        cin >> a[i];

    }

}



//encontrar a maior nota

void maiorNota(int a[NOTAS]){

    int j;

    for(int i = 0; i < NOTAS; i++){

        if(i == 0){

            j = a[i];

        }else{

            if(a[i] > j){

                j = a[i];

            }

        }

    }

    cout << "A maior nota encontrada foi: " << j << endl;

}



//encontrar a menor nota

void menorNota(int a[NOTAS]){

    int j;

    for(int i = 0; i < NOTAS; i++){

        if(i == 0){

            j = a[i];

        }else{

            if(a[i] < j){

                j = a[i];

            }

        }

    }

    cout << "A menor nota encontrada foi: " << j << endl;

}



//calcular a m�dia do aluno e verificar situa��o

void media(int a[NOTAS]){

    int somaMedia = 0;

    for(int i = 0; i < NOTAS; i++){

        somaMedia = somaMedia + a[i];

    }

    int media = somaMedia/NOTAS;

    cout << "A m�dia do aluno foi de: " << media << " valores." << endl;



    if(media >= 9.5){

        cout << "O aluno est� aprovado" << endl;

    }else{

        cout << "O aluno est� reprovado" << endl;

    }



}



//Verificar situa��o do aluno

void situacao(int a, int b){



}



int main(){

    setlocale(LC_ALL,"");



    int notas[NOTAS];



    pedeNotas(notas);

    maiorNota(notas);

    menorNota(notas);

    media(notas);



    return 0;

}
