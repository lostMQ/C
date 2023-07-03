#include<stdio.h>
#include<locale.h>


void main(){
    setlocale(LC_ALL,"");

    int i;

    for (i>1; i< 20; i++){
        printf("%d\n",i);
    }
}

