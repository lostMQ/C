#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

void cumprimentar(){
    //esta função imprime no ecra as boas vindas
    cout << "------------------------------------" << endl;
    cout << "Boas Vindas a sua famosa calculadora" << endl;
    cout << "Algum erro de um calculo a culpa é" << endl;
    cout << "exclusivamente do utilizador" << endl;
    cout << "------------------------------------" << endl;
}

int somar(int a, int b){
    //soma duas variáveis
    int soma = a + b;
    cout << "A soma dos números é: " << soma << endl;

    return soma;
}
int subtracao (int a, int b){
    //subtrai duas variáveis
    int subtrair = a - b;
    cout << "A subtração dos números é: " << subtrair << endl;

    return subtrair;

}
int multiplicacao(int a, int b){
    //multiplica duas variáveis
    int multiplicar = a * b;
    cout << "A multiplicação dos números é: " << multiplicar << endl;

    return multiplicar;

}
float divisao(float a, float b){
    //divide duas variáveis
    float dividir = a / b;
    cout << "A divisão dos números é: " << dividir << endl;

    return dividir;
}
void invalido(){
    cout<<("\n Operaçao invalida!!");
    cout<<("\n Prima qualquer tecla para continuar...");
}
void inserir(int &a, int &b){
    cout << "Digite um número: ";
    cin >> a;
    cout << "Digite um número: ";
    cin >> b;
}
int main(){
    char cOperacao;
    int num1,num2;
        inserir(num1,num2);
    cout <<("\nIntroduza a operaçao[+,-,*,/]: ");

            cin >>  cOperacao;
            switch (cOperacao)
            {
            case '+'://soma
                somar(num1, num2);
                break;
            case '-'://subtracçao
                subtracao(num1, num2);
                break;
            case '*'://multiplicaçao
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

