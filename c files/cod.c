#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <conio.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"");

    char password[20];
    int i = 0;
    char c;

    cout << "Digite sua senha: ";

    while ((c = _getch()) != '\r') { // Lê o caractere sem exibi-lo na tela
        if (c == '\b' && i > 0) { // Verifica se foi pressionada a tecla de backspace
            cout << "\b \b"; // Apaga o caractere anterior da tela
            i--;
        } else if (c != '\b') { // Ignora caracteres de backspace
            password[i] = c;
            cout << '*'; // Exibe um asterisco no lugar do caractere digitado
            i++;
        }
    }

    password[i] = '\0'; // Adiciona o caractere nulo ao final da string
    cout << endl << "Senha digitada: " << password << endl;
    return 0;
}
