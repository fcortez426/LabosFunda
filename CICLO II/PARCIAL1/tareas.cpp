#include <iostream>
#include <string.h>
#include <string>
#include <cstring>

const int longCad = 50;

using namespace std;


struct listaTareas
{
    char nombre[longCad+1];
    char ubicacion[longCad+1];
    char tipo[longCad+1];
    int dificultad;
    int duracion;
};

int calTiempo(listaTareas listado[]);
 
int main() {

    listaTareas listado[4];
    string nombre;
    string ubicacion;
    string tipo;

    cout << "\n*************************************\n";
    cout << "**********TAREAS ESPACIALES**********\n";
    cout << "*************************************\n\n";

    cout << "BIENVENIDO TRIPULANTE\n";
    cout << "POR FAVOR INGRESE LOS DATOS DE LAS TAREAS REALIZADAS:";

    for(int i=0; i<4; i++){

        cout<< "\n\nIngrese el nombre de la tarea "<<i+1<<": ";
        getline(cin,nombre);
        strcpy(listado[i].nombre,nombre.c_str());
        listado[i].nombre[longCad] = '\0';

        cout<< "Ingrese la ubicacion de la tarea "<<i+1<<": ";
        getline(cin,ubicacion);
        strcpy(listado[i].ubicacion,ubicacion.c_str());
        listado[i].ubicacion[longCad] = '\0';

        do{

            cout<< "Ingrese el tipo de tarea "<<i+1<<"(R=reparar, C=clasificar, O=otros): ";
            getline(cin,tipo);
            strcpy(listado[i].tipo,tipo.c_str());
            listado[i].tipo[longCad] = '\0';

            if(strcmp(listado[i].tipo,"R") != 0 && strcmp(listado[i].tipo,"C") != 0 && strcmp(listado[i].tipo,"O") != 0){
                cout<<"Por favor ingrese un valor correcto(R=reparar, C=clasificar, O=otros)\n";
                system("pause");
            }

        }while(strcmp(listado[i].tipo,"R") != 0 && strcmp(listado[i].tipo,"C") != 0 && strcmp(listado[i].tipo,"O") != 0);

        do{

            cout<< "Ingrese la dificultad de la tarea "<<i+1<<"(Valores de 1 hasta 5): ";
            cin >> listado[i].dificultad;

            if(listado[i].dificultad < 1 || listado[i].dificultad > 5){
                cout<<"Por favor ingrese un valor correcto(Valores de 1 hasta 5)\n";
                system("pause");
            }

        }while(listado[i].dificultad < 1 || listado[i].dificultad > 5);

        do{

            cout<< "Ingrese la duracion de la tarea "<<i+1<<"(Valores enteros en segundos mayores a 0): ";
            cin >> listado[i].duracion;

            if(listado[i].duracion < 0){
                cout<<"Por favor ingrese un valor correcto(Valores enteros en segundos mayores a 0)\n";
                system("pause");
            }

        }while(listado[i].duracion < 0);

        cin.ignore(100, '\n');

    }

    cout << "\nEl tiempo total en segundos que tomara finalizar las tareas de nivel 4 y 5 es:\n";
    cout << calTiempo(listado);

    return 0;
}

int calTiempo(listaTareas listado[]){

    int contador = 0;

    for (int i=0; i<4; i++)
    {
        if(listado[i].dificultad > 3){
            contador+=listado[i].duracion;
        }
    }
    
    return contador;

}