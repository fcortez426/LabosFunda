#include <iostream>

using namespace std;

int main(){

    int n=0;
    int k=0;
    double array[15]={2,2,3,3,3,4,4,4,4,5,5,5,5,2,1};

    cout << "\n**********************************\n";
    cout << "**********ARRAY CONTADOR**********\n";
    cout << "**********************************\n\n";

    cout << "Hay un array almacenado en sistema, ingrese un numero para verificar cuantas veces se repite en este:\n";
    cin >> n;

    for(int i=0; i<15;i++){
        if(n == array[i]){
            k++;
        }
    }

    cout << "El numero: "<< n << " se repite: " << k << " veces.";

}