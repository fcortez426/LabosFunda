#include <iostream>

using namespace std;

int main(){

    int dividendo=0;
    int divisor=0;

    cout << "********************************************************\n";
    cout << "*****VERIFICAR SI UN NUMERO ES DIVISIBLE ENTRE OTRO*****\n";
    cout << "********************************************************\n\n";

    cout << "INGRESE EL DIVIDENDO\n";
    cin >> dividendo;

    cout << "INGRESE EL DIVISOR\n";
    cin >> divisor;

    if (dividendo % divisor == 0)
    {
        
        cout << "El numero: " << dividendo << " 'SI' es divisible entre: " << divisor << endl;

    }else{

        cout << "El numero: " << dividendo << " 'NO' es divisible entre: " << divisor << endl;

    }

        system("pause");

}