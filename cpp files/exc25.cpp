#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;

int main()
{
     setlocale(LC_ALL,"");

    int i;

    for (i=1; i<=10; i++){
        cout<< ("%d",i)<<endl;
    }
return 0;
}
