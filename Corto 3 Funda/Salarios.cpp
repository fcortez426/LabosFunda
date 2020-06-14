#include <iostream>
#include <iomanip>//LIBRERIA QUE PERMITE USAR FIXED PARA DEFINIR PRECISION DE DECIMALES

using namespace std;

int main(){

    int n=0;
    float seguro = 0;
    float afp = 0;
    float renta = 0;

    cout << "\n*****************************\n";
    cout << "*****CALCULO DE SALARIOS*****\n";
    cout << "*****************************\n\n";

    cout << "POR FAVOR INGRESE LA CANTIDAD DE EMPLEADOS DE LA EMPRESA\n";
    cin >> n;

    float empleados[n][5];//DEFINICION DE ARREGLO

    for (int i=0; i<n; i++)
    {
        
        //Iguala a 0 estas variables para un nuevo cálculo por cada empleado
        seguro = 0;
        afp = 0;
        renta = 0;
        
        //ASIGNA UN IDENTIFICADOR NUMERICO AL EMPLEADO
        empleados[i][0] = i+1;

        //CAPTURA LAS HORAS TRABAJADAS Y EN LA MISMA POSICION CALCULA EL VALOR TOTAL DE ESAS HORAS
        cout << "\nINGRESE LAS HORAS NORMALES TRABAJADAS DEL EMPLEADO NUMERO: " << i+1 <<"\n";
        cin >> empleados[i][1];
        empleados[i][1]*=1.75;

        //CAPTURA LAS HORAS EXTRAS Y EN LA MISMA POSICION CALCULA EL VALOR TOTAL DE ESAS HORAS
        cout << "INGRESE LAS HORAS EXTRAS TRABAJADAS DEL EMPLEADO NUMERO: " << i+1 <<"\n";
        cin >> empleados[i][2];
        empleados[i][2]*=2.50;

        //CÁLCULO DE SALARIO TOTAL TOMANDO LA POSICION ALMACENADA DE HORAS NORMALES Y HORAS EXTRAS
        empleados[i][3] = empleados[i][1]+empleados[i][2];

        //*****CÁLCULO DE SALARIO REAL*****//
        //DESCUENTOS//
        afp = empleados[i][3]*0.0625;
        seguro = empleados[i][3]*0.04;

        if(empleados[i][3] > 500){
            renta = empleados[i][3]*0.1;
        }
        //CÁLCULO DE SALARIO REAL APLICANDO EL RESULTADO DE LOS DESCUENTOS AL SALARIO TOTAL
        empleados[i][4] = empleados[i][3] - (afp+seguro+renta);
    }

    //IMPRIMIR RESULTADO EN PANTALLA
    cout << "\n\n**********LISTADO DE SALARIO DE EMPLEADOS**********";
    for(int f=0; f<n; f++){
        
        cout.precision(3);
        cout << "\nEMPLEADO NUMERO: "<< f+1 <<", SALARIO TOTAL: $" <<fixed<<setprecision(2)<<empleados[f][3] <<", SALARIO REAL: $" << empleados[f][4];

    }
    cout << "\n\n";
    system("pause");

}