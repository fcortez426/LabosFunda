#include <iostream>

using namespace std;

int main(){

    int age = 0;

    cout << "\n\n****************************\n";
    cout << "**********BISIESTO**********\n";
    cout << "****************************\n\n";

    cout << "Ingrese el YEAR para evaluar si es o no bisiesto\n";
    cin >> age;

    if(age%400 == 0){//SE APLICA LA PRIMER CONDICION SI ES DIVISIBLE ENTRE 400
        cout << "El YEAR es BISIESTO";
    }else{
        if(age%4 == 0 && age%100 !=0){//SE APLICA LA SEGUNDA CONDICION QUE EL AÑO DEBE SER DIVISIBLE ENTRE 4 PERO NO ENTRE 100
            cout << "El YEAR es BISIESTO";
        }else{
            cout << "El YEAR 'NO' es BICIESTO";
        }
    }

}