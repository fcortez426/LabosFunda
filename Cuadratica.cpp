#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main(){

    int a=0;
    int b=0;
    int c=0;
    float valorp=0;
    float valorn=0;
    float raiz=-3;
    float resfin=0;


    cout << "******************************************\n";
    cout << "*****RESOLUCION DE FORMULA CUADRATICA*****\n";
    cout << "******************************************\n\n";

    cout << "INGRESE EL VALOR DE A\n";
    cin >> a;

    cout << "INGRESE EL VALOR DE B\n";
    cin >> b;

    cout << "INGRESE EL VALOR DE C\n";
    cin >> c;

    raiz=sqrt((pow(b,2))-(4*a*c));

    if (raiz>0)
    {
        valorp=((-b)+raiz)/(2*a);
        valorn=((-b)-raiz)/(2*a);
        
        printf("\nEl valor de X1 es: %.2f.",valorn);
        printf("\nEl valor de X2 es: %.2f.",valorp);

    }else
    {
        cout << "NO SE PUEDE RESOLVER LA ECUACION CUADRATICA CON LOS VALORES INGRESADOS.";
        cout << "\nEL CONTENIDO DEL RADICANDO ES NEGATIVO POR LO QUE NO TIENE UNA SOLUCION REAL.\n";
    }
    
    



}