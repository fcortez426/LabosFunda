#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    char nproducto[100]="";
    float precio=0;
    float total=0;
    int cantidad=0;

    cout << "************************************\n";
    cout << "*****GASTO TOTAL DE UN PRODUCTO*****\n";
    cout << "************************************\n\n";

    cout << "INGRESE EL NOMBRE DEL PRODUCTO COMPRADO\n";
    cin.getline(nproducto,100);

    cout << "\nINGRESE EL PRECIO DEL PRODUCTO COMPRADO\n";
    cin >> precio;

    cout << "\nINGRESE LA CANTIDAD COMPRADA DEL PRODUCTO\n";
    cin >> cantidad;

    total=precio*cantidad;

    printf("\nUSTED COMPRO LA CANTIDAD DE: %i %s POR UN TOTAL DE $%.2f",cantidad,nproducto,total);

}