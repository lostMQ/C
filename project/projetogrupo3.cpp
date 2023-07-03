#include <iostream>
#include <string>
#include <unordered_map>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;


struct User {
    string fullName;
    string email;
    string password;
    bool isBlocked;
};

unordered_map<string, User> users;

bool isPasswordCorrect(const User& user, const string& password) {
    if (user.isBlocked) {
        cout << "A sua conta está bloqueada. Por favor, entre em contato com o suporte." << endl;
        return false;
    }

    if (user.password == password) {
        return true;
    } else {
        cout << "Senha incorreta. Tente novamente." << endl;
        return false;
    }
}

void signIn() {
    User user;
    int i=0;
    char c;

    cout << "\n\nNome completo: ";
    getline(cin, user.fullName);

    cout << "Email: ";
    getline(cin, user.email);

    cout << "Senha: ";
    while ((c = _getch()) != '\r') { // Lê o caractere sem exibi-lo na tela
        if (c == '\b' && i > 0) { // Verifica se foi pressionada a tecla de backspace
            cout << "\b \b"; // Apaga o caractere anterior da tela
            i--;
        } else if (c != '\b') { // Ignora caracteres de backspace
            user.password[i] = c;
            cout << '*'; // Exibe um asterisco no lugar do caractere digitado
            i++;
        }

    }system("CLS");

    user.isBlocked = false;

    users[user.email] = user;

    cout << "\nConta criada com sucesso!" << endl;


}

void login() {
    string email, password;
    int i=0;
    char c;
    int loginAttempts = 0;

    cout << "Email: ";
    getline(cin, email);

    cout << "Senha: ";
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

    while (loginAttempts < 3) {
        if (users.find(email) != users.end()) {
            User& user = users[email];

            if (isPasswordCorrect(user, password)) {
                cout << "\n\nBem-vindo(a), " << user.fullName << "!" << endl;
                cout << "Trabalho realizado por Bruno Azevedo e Nádia Pinto!"<<endl;
                return;
            } else {
                loginAttempts++;
            }
        } else {
            cout << "\nEmail não encontrado. Tente novamente." << endl;
            return;
        }

        cout << "\nTentativas restantes: " << 3 - loginAttempts << endl;
        cout << "Senha: ";
        getline(cin, password);
    }system("CLS");

    if (loginAttempts == 3) {
        User& user = users[email];
        user.isBlocked = true;
        cout << "\nLamentamos mas excedeu o limite de tentativas. A sua conta foi bloqueada." << endl;
    }
}

int main() {
    setlocale(LC_ALL,"");
    int choice;

    do {
        cout << "Escolha uma opção: \n";
        cout << "1. Sign in" << endl;
        cout << "2. Login" << endl;
        cout << "3. Sair" << endl;
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                signIn();
                break;
            case 2:
                login();
                break;
            case 3:
                cout << "BYE BYE." << endl;
                break;
            default:
                cout << "Opção inválida. Tente novamente." << endl;
        }

        cout << endl;
    } while (choice != 3);

    return 0;
}
