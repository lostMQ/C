#include <iostream>

#include <cstdlib>

#include <time.h>

#include <iomanip> // Biblioteca para manipula��o de precis�o



#define TAM 5

#define NUM_ALUNOS 3



using namespace std;



int main() {

    setlocale(LC_ALL,"");

    srand(time(0)); // Inicializa a semente aleat�ria



    int notas[NUM_ALUNOS][TAM];

    int maiorNota = 0, menorNota = 20;

    float mediaAluno[NUM_ALUNOS] = {0};

    float mediaExercicio[TAM] = {0};

    int melhorAluno = 0, piorAluno = 0;



    // Receber notas aleat�rias entre 0 e 20 para cada aluno e exerc�cio

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



            // Calcular a soma para a m�dia de cada aluno

            mediaAluno[i] += notas[i][j];



            // Calcular a soma para a m�dia por exerc�cio

            mediaExercicio[j] += notas[i][j];

        }

        cout << endl;

    }



    // Calcular a m�dia de cada aluno

    for (int i = 0; i < NUM_ALUNOS; i++) {

        mediaAluno[i] /= TAM;

    }



    // Calcular a m�dia por exerc�cio

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

    cout << fixed << setprecision(2); // Definir a precis�o das casas decimais



    cout << endl;

    cout << "Maior nota: " << maiorNota << endl;

    cout << "Menor nota: " << menorNota << endl;

    cout << endl;



    cout << "M�dia de cada aluno:" << endl;

    for (int i = 0; i < NUM_ALUNOS; i++) {

        cout << "Aluno " << i+1 << ": " << mediaAluno[i] << endl;

    }



    cout << endl;

    cout << "M�dia por exerc�cio:" << endl;

    for (int i = 0; i < TAM; i++) {

        cout << "Exerc�cio " << i+1 << ": " << mediaExercicio[i] << endl;

    }



    cout << endl;

    cout << "Melhor aluno: Aluno " << melhorAluno+1 << endl;

    cout << "Pior aluno: Aluno " << piorAluno+1 << endl;



    return 0;

}
