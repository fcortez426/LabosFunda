#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(){

    char palabra[25]="";
    int size =0;

    cout << "************************************************************\n";
    cout << "*****COMPARADOR DE LETRA INICIAL Y FINAL DE UNA PALABRA*****\n";
    cout << "************************************************************\n\n";

    cout << "INGRESE UNA PALABRA:\n";
    cin.getline(palabra,25);

    size = strlen(palabra);
    palabra[0] = tolower(palabra[0]);
    palabra[size-1] = tolower(palabra[size-1]);


    if(palabra[0] == palabra[size-1]){
        printf("\nLa palabra '%s' comienza y termina con la misma letra.\n\n",palabra);

    }else{
        printf("\nLa palabra '%s' 'NO' comienza y termina con la misma letra.\n\n",palabra);

    }
    system("pause");
}