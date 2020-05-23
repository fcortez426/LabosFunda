#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int numParImpar(int x);//DECLARACION DE FUNCION

int main(){

    char palabra[50]="";
    int size =0;

    cout << "*******************************************************\n";
    cout << "*****CANTIDAD DE CARACTERES EN UNA PALABRA O FRASE*****\n";
    cout << "*******************************************************\n\n";

    cout << "INGRESE UNA FRASE O PALABRA:\n";
    cin.getline(palabra,50);

    size = strlen(palabra);

    if(size > 10){
        printf("\nLa palabra o frase: %s supera los 10 caracteres",palabra);
        numParImpar(size);//LLAMADO A LA FUNCION
    }else{
        printf("\nLa palabra o frase: %s 'NO' supera los 10 caracteres",palabra);
        numParImpar(size);//LLAMADO A LA FUNCION
    }
    return 0;
}

int numParImpar(int x){//Funcion que calcula si la cantidad capturada de caracteres del texto ingresado es PAR o IMPAR

    if (x % 2 == 0)
    {
        cout << "\nEsta consta de " << x << " caracteres, y este es un numero 'PAR'\n\n";
        system("pause");
    }else{
        cout << "\nEsta consta de " << x << " caracteres, y este es un numero 'IMPAR'\n\n";
        system("pause");
    }

    return 0;

}