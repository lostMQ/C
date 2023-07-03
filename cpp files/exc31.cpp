#include <iostream>

#include <stdlib.h>

#include <locale.h>

#include <conio.h>



using namespace std;



//FUN��ES



//boas vindas

void boasVindas(){

    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;

    cout << "Seja Bem Vindo(a) � Calculadora" << endl;

    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl << endl;

}



//apresentar menu

void menu(){

    cout << "ESCOLHA UMA OP��O" << endl;

    cout << "[1] - CALCULADORA" << endl;

    cout << "[2] - TABUADA" << endl;

    cout << "[3] - PAR OU �MPAR" << endl;

    cout << "[4] - N�MEROS PRIMOS" << endl;

    cout << "[5] - SAIR" << endl;

}



//ler menu

int lerOpcao(){

    int a;

    scanf("%d", &a);

    return a;

}



//calculadora

void calculadora(){

    system("CLS");

    int a, b;

    char operacao;

    cout << "ESCOLHEU CALCULADORA" << endl << endl;

    cout << "Digite um n�mero: ";

    scanf("%d", &a);

    cout << "Digite outro n�mero: ";

    scanf("%d", &b);

    cout << "Digite a opera��o [+ - x /]: " << endl;

    scanf(" %c", &operacao);



    switch(operacao){

        case '+': cout << a << " + " << b << " = " << a + b << endl; break;

        case '-': cout << a << " - " << b << " = " << a - b << endl; break;

        case 'x': cout << a << " x " << b << " = " << a * b << endl; break;

        case '/': cout << a << " / " << b << " = " << a / b << endl; break;

        default: cout << "Op��o inv�lida! Tente novamente!" << endl;

    }

    cout << "digite qualquer tecla para continuar.....";

    getch();

}



//tabuada

void tabuada(){

    system("CLS");

    int a;

    cout << "ESCOLHEU A TABUADA" << endl << endl;

    cout << "Digite um n�mero: ";

    cin >> a;

    for(int i = 1; i <= 10; i++){

        cout << a << " x " << i << " = " << a*i << endl;

    }

    cout << "digite qualquer tecla para continuar.....";

    getch();

}



//par ou impar

void parImpar(){

    system("CLS");

    int a;

    cout << "PAR OU �MPAR" << endl << endl;

    cout << "Digite um n�mero: ";

    cin >> a;



    if(a % 2 == 0){

        cout << "O n�mero " << a << " � PAR!" << endl;

    }else{

        cout << "O n�mero " << a << " � �MPAR!" << endl;

    }

    cout << "digite qualquer tecla para continuar.....";

    getch();



}



//primos

void primos(){

    system("CLS");

    int a, divisores = 0;

    cout << "PAR OU �MPAR" << endl << endl;

    cout << "Digite um n�mero: ";

    cin >> a;

    for(int i = 1; i <= a; i++){

        if(a % i == 0){

            divisores += 1;

        }

    }



    if(divisores == 2){

        cout << "O n�mero " << a << " � PRIMO!" << endl;

    }else{

        cout << "O n�mero " << a << " N�O � PRIMO" << endl;

    }

    cout << "digite qualquer tecla para continuar.....";

    getch();

}



//despedida

void despedida(){

    system("CLS");

    cout << endl << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;

    cout << "Obrigado por utilizar a Calculadora" << endl;

    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;

}



int main(){

    setlocale(LC_ALL,"");



    boasVindas();

    int opcao;

    cout << "digite qualquer tecla para continuar.....";

    getch();



    do{

        system("CLS");

        menu();

        opcao = lerOpcao();

        switch(opcao){

            case 1: calculadora(); break;

            case 2: tabuada(); break;

            case 3: parImpar(); break;

            case 4: primos(); break;

            case 5: despedida(); break;

            default: cout << "Op��o inv�lida! Tente novamente!" << endl;

        }

    }while(opcao != 5);



    return 0;

}
