#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include<iomanip>
using namespace std;

int main()
{
     setlocale(LC_ALL,"");


    int nota,count;
    float media;
    setlocale(LC_ALL,"");
    cout<<("Insira a primeira nota: ");
    cin>> nota;
    count=count+nota;
    cout<<("Insira a Segunda nota: ");
    cin>> nota;
    count=count+nota;
    cout<<("Insira a Terceira nota: ");
    cin>> nota;
    count=count+nota;
    cout<<("Insira a Quarta nota: ");
    cin>> nota;
    count=count+nota;
    cout<<("Insira a Quinta nota: ");
    cin>> nota;
    cout << fixed <<setprecision(2);
    count=count+nota;
    media=count/5;

    if(media >= 9.5){
    cout<<("Passou");
    }
else if(media >= 8 && media <9.5){
   cout<<("Recuperação");
    }
    else {
   cout<<("Reprovou");

    }
    return 0;
}




