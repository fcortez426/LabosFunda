#include <iostream>
#include <iomanip>//LIBRERIA QUE PERMITE USAR FIXED PARA DEFINIR PRECISION DE DECIMALES

using namespace std;

int mediaestatura(float estatura[], float resultado);
int mayormenor(float estatura[], float result);

int main(){

    float estatura[25] = {};
    float resultado = 0;

    cout << "\n*****************************************\n";
    cout << "**********PROMEDIO DE ESTATURAS**********\n";
    cout << "*****************************************\n\n";

    for (int i=0; i<25; i++)
    {
        cout << "Ingrese la estatura del estudiante numero: " << i+1 << " en metros." <<endl;
        cin >> estatura[i];
    }

    mediaestatura(estatura,resultado);
    
}

mediaestatura(float estatura[], float resultado){

    float n = 0;

    for (int i=0; i<25; i++)
    {
        n+=estatura[i];
    }
    
    resultado = n/25;

    cout.precision(3);
    cout <<"\nLa estatura promedio de los 25 alumnos es:\n"<<fixed<<setprecision(2)<<resultado;

    mayormenor(estatura,resultado);

    return 0;

}

mayormenor(float estatura[], float result){

    int h=0;//min
    int k=0;//max

    for (int i=0; i<25; i++)
    {
        if(estatura[i] > result){
            k++;
        }else{
            h++;
        }
    }

    cout << "\n\nLa cantidad de estudiantes con estatura mayor a la media es de: "<<k<<endl;
    cout << "La cantidad de estudiantes con estatura menor a la media es de: "<<h<<"\n\n";
    
    return 0;

}