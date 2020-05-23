#include <iostream>

using namespace std;

int main(){

    float numero=0;

    cout << "**************************************************************\n";
    cout << "*****VERIFICAR SI UN NUMERO ES POSITIVO O NEGATIVO O CERO*****\n";
    cout << "**************************************************************\n\n";

    cout << "INGRESE EL NUMERO A VERIFICAR\n";
    cin >> numero;

    if (numero > 0)
    {
        cout << "\nEl numero: " << numero << " es un numero 'POSITIVO'\n\n";
        
    }else if (numero < 0)
    {

        cout << "\nEl numero: " << numero << " es un numero 'NEGATIVO'\n\n";

    }else
    {
        cout << "\nEl numero: " << numero << " es 'CERO'\n\n";

    }
    
    system("pause");
}