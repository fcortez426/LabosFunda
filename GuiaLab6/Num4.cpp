#include <iostream>

using namespace std;

//DECLARACION DE FUNCIONES
int leerarray(double array[], int n);
int sumaarray(double array[], double array1[], int n, double total[]);
int mostrararray(double total[], int n);

int main(){ 

    int size=0;

    cout << "\n************************************\n";
    cout << "**********SUMA DE ARREGLOS**********\n";
    cout << "************************************\n\n";

    cout << "Por favor ingrese el tamano de los arreglos:\n";
    cin >> size;

    double array1[size]={};
    double array2[size]={};
    double arraytotal[size]={};

    cout << "\nIngrese los valores del PRIMER arreglo";
    leerarray(array1,size);

    cout << "\nIngrese los valores del SEGUNDO arreglo";
    leerarray(array2,size);

    sumaarray(array1,array2,size,arraytotal);
    mostrararray(arraytotal,size);

}

leerarray(double array[], int n){

    for (int i=0; i<n; i++)
    {
        cout << "\nIngrese el valor del arreglo en su posicion, " << i <<"\n";
        cin >> array[i];
    }

    return array[n];
    
}

sumaarray(double array[], double array1[], int n, double total[]){

    for (int i=0; i<n; i++)
    {
        total[i] = array[i] + array1[i];
    }

    return total[n];
    
}

mostrararray(double total[], int n){

    cout << "\nResultado de la suma en cada posicion:\n";

    for (int i=0; i<n; i++)
    {
        cout << "\nResultado de la suma en la posicion:" << i <<" del arreglo\n";
        cout << total[i];
    }

    return 0;
    
}