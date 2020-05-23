#include <iostream>

using namespace std;

int main(){

    int numero=0;

    cout << "***********************************************\n";
    cout << "*****VERIFICAR SI UN NUMERO ES PAR O IMPAR*****\n";
    cout << "***********************************************\n\n";

    cout << "INGRESE EL NUMERO A VERIFICAR\n";
    cin >> numero;


    if (numero % 2 == 0)
    {
        cout << "\nEl numero: " << numero << " es un numero 'PAR'\n\n";
    }else{
        cout << "\nEl numero: " << numero << " es un numero 'IMPAR'\n\n";
    }
    system("pause");

}