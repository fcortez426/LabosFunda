#include <iostream>
#include <iomanip>//LIBRERIA QUE PERMITE USAR FIXED PARA DEFINIR PRECISION DE DECIMALES

using namespace std;

int llenarmatriz(float estudiante[][5], int n);
int operardatos(float estudiante[][5], int n);

int main(){

    int n;

    cout << "\n******************************\n";
    cout << "**********Nota Final**********\n";
    cout << "******************************\n\n";

    cout << "Ingrese la cantidad de estudiantes:\n";
    cin >> n;

    float estudiantes[n][5]={};

    llenarmatriz(estudiantes,n);
    operardatos(estudiantes,n);

}

llenarmatriz(float estudiante[][5], int n){

    for (int i=0; i<n; i++)
    {
        cout << "\nIngrese la primer nota del estudiante numero: "<<i+1<<endl;
        cin >> estudiante[i][0];

        cout << "\nIngrese la segunda nota del estudiante numero: "<<i+1<<endl;
        cin >> estudiante[i][1];

        cout << "\nIngrese la tercer nota del estudiante numero: "<<i+1<<endl;
        cin >> estudiante[i][2];

        cout << "\nIngrese la cuarta nota del estudiante numero: "<<i+1<<endl;
        cin >> estudiante[i][3];

        cout << "\nIngrese la quinta nota del estudiante numero: "<<i+1<<endl;
        cin >> estudiante[i][4];
    }

    return estudiante[n][5];

}

operardatos(float estudiante[][5], int n){

    float prom[n] = {};

    for (int i=0; i<n; i++)
    {

        prom[i] = ((estudiante[i][0]*0.2) + (estudiante[i][1]*0.2) + (estudiante[i][2]*0.2) + (estudiante[i][3]*0.2) + (estudiante[i][4]*0.2));

        cout.precision(3);
        cout << "\n\nLa nota final del estudiante numero: "<<i+1<< " es: " << fixed<<setprecision(2) << prom[i] << endl;

        if(prom[i] >= 6){
            cout << "\nEste estudiante esta 'APROBADO'\n\n";
        }else{
            cout << "\nEste estudiante esta 'REPROBADO'\n\n";
        }

    }

    return 0;

}