#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

void cumprimentar(){
    //esta fun��o imprime no ecra as boas vindas
    cout << "------------------------------------" << endl;
    cout << "Boas Vindas a sua famosa calculadora" << endl;
    cout << "Algum erro de um calculo a culpa �" << endl;
    cout << "exclusivamente do utilizador" << endl;
    cout << "------------------------------------" << endl;
}

int somar(int a, int b){
    //soma duas vari�veis
    int soma = a + b;
    cout << "A soma dos n�meros �: " << soma << endl;

    return soma;
}
int subtracao (int a, int b){
    //subtrai duas vari�veis
    int subtrair = a - b;
    cout << "A subtra��o dos n�meros �: " << subtrair << endl;

    return subtrair;

}
int multiplicacao(int a, int b){
    //multiplica duas vari�veis
    int multiplicar = a * b;
    cout << "A multiplica��o dos n�meros �: " << multiplicar << endl;

    return multiplicar;

}
float divisao(float a, float b){
    //divide duas vari�veis
    float dividir = a / b;
    cout << "A divis�o dos n�meros �: " << dividir << endl;

    return dividir;
}
void invalido(){
    cout<<("\n Opera�ao invalida!!");
    cout<<("\n Prima qualquer tecla para continuar...");
}
void inserir(int &a, int &b){
    cout << "Digite um n�mero: ";
    cin >> a;
    cout << "Digite um n�mero: ";
    cin >> b;
}
int main(){
    char cOperacao;
    int num1,num2;
        inserir(num1,num2);
    cout <<("\nIntroduza a opera�ao[+,-,*,/]: ");

            cin >>  cOperacao;
            switch (cOperacao)
            {
            case '+'://soma
                somar(num1, num2);
                break;
            case '-'://subtrac�ao
                subtracao(num1, num2);
                break;
            case '*'://multiplica�ao
                multiplicacao(num1, num2);
                break;
            case '/'://divisao
                divisao(num1, num2);
                break;
            default:
               invalido();
            break;
return 0;
}
}

