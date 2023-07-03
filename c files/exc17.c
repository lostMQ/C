#include<stdio.h>
#include<locale.h>


void main(){
    setlocale(LC_ALL,"");

    int i;

    for (i=10; i>0; i--){
        printf("%d\n",i);
    }
}
