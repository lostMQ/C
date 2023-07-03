#include <iostream>

#include <cstdlib>

#include <time.h>

#include <iomanip> // Biblioteca para manipulação de precisão



#define TAM 5

#define NUM_ALUNOS 3



using namespace std;



int main() {

    setlocale(LC_ALL,"");

    srand(time(0)); // Inicializa a semente aleatória



    int notas[NUM_ALUNOS][TAM];

    int maiorNota = 0, menorNota = 20;

    float mediaAluno[NUM_ALUNOS] = {0};

    float mediaExercicio[TAM] = {0};

    int melhorAluno = 0, piorAluno = 0;



    // Receber notas aleatórias entre 0 e 20 para cada aluno e exercício

    for (int i = 0; i < NUM_ALUNOS; i++) {

        cout << "Notas do Aluno " << i+1 << ": | ";

        for (int j = 0; j < TAM; j++) {

            notas[i][j] = rand() % 21;

            cout << notas[i][j] << " | ";



            // Encontrar a maior e menor nota global

            if (notas[i][j] > maiorNota) {

                maiorNota = notas[i][j];

            }

            if (notas[i][j] < menorNota) {

                menorNota = notas[i][j];

            }



            // Calcular a soma para a média de cada aluno

            mediaAluno[i] += notas[i][j];



            // Calcular a soma para a média por exercício

            mediaExercicio[j] += notas[i][j];

        }

        cout << endl;

    }



    // Calcular a média de cada aluno

    for (int i = 0; i < NUM_ALUNOS; i++) {

        mediaAluno[i] /= TAM;

    }



    // Calcular a média por exercício

    for (int i = 0; i < TAM; i++) {

        mediaExercicio[i] /= NUM_ALUNOS;

    }



    // Encontrar o melhor e pior aluno

    for (int i = 1; i < NUM_ALUNOS; i++) {

        if (mediaAluno[i] > mediaAluno[melhorAluno]) {

            melhorAluno = i;

        }

        if (mediaAluno[i] < mediaAluno[piorAluno]) {

            piorAluno = i;

        }

    }



    // Imprimir resultados

    cout << fixed << setprecision(2); // Definir a precisão das casas decimais



    cout << endl;

    cout << "Maior nota: " << maiorNota << endl;

    cout << "Menor nota: " << menorNota << endl;

    cout << endl;



    cout << "Média de cada aluno:" << endl;

    for (int i = 0; i < NUM_ALUNOS; i++) {

        cout << "Aluno " << i+1 << ": " << mediaAluno[i] << endl;

    }



    cout << endl;

    cout << "Média por exercício:" << endl;

    for (int i = 0; i < TAM; i++) {

        cout << "Exercício " << i+1 << ": " << mediaExercicio[i] << endl;

    }



    cout << endl;

    cout << "Melhor aluno: Aluno " << melhorAluno+1 << endl;

    cout << "Pior aluno: Aluno " << piorAluno+1 << endl;



    return 0;

}
