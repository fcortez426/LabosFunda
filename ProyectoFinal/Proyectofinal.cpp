#include <iostream>
#include <string.h>
#include <string>
//LIBRERIA QUE PERMITE USAR FIXED PARA DEFINIR LA PRECISION DE DECIMALES
#include <iomanip>

const int longCad = 20;

using namespace std;

struct costoPorArticulo
{
    char nombreArticul[longCad+1];
    int cantidad;
    float precio;
    float costoPorArticulo;
};

int leerDatos(costoPorArticulo lista[],int n);
int calcCosto(costoPorArticulo lista[],int n);
int mostrarDatos(costoPorArticulo lista[],int n);
//La funcion se declara como float ya que retornara un valor de ese tipo
float costoTotal(costoPorArticulo lista[],int n);

int main(void){

    int n = 0;

    cout << "\n**************************************\n";
    cout << "**********PROCESO DE FACTURA**********\n";
    cout << "**************************************\n\n";

    cout << "Por favor ingrese la cantidad de productos a procesar:\n";
    cin >> n;
    cin.ignore(100, '\n');

    //Manejo de estructura como array
    costoPorArticulo listado[n];

    leerDatos(listado,n);
    calcCosto(listado,n);
    mostrarDatos(listado,n);
    
    //Muestra en un cout el valor que se retorna de la funcion costoTotal, fixeado con dos decimales
    cout.precision(3);
    cout <<"\nEL TOTAL DE LA COMPRA ES POR UN VALOR DE:\n$"<<fixed<<setprecision(2)<<costoTotal(listado,n);
}

leerDatos(costoPorArticulo lista[],int n){

    string nombre;

    for (int i=0;i<n; i++)
    {
        cout <<"\nIngrese los valores solicitados por articulo:";
        cout << "\nIngrese el Nombre del articulo numero " <<i+1<<": ";
        getline(cin,nombre);

        //Copia el valor obtenido del teclado en la variable de la estructura que maneja ese dato.
        strcpy(lista[i].nombreArticul,nombre.c_str());
        lista[i].nombreArticul[longCad] = '\0';

        cout << "Ingrese la cantidad comprada del articulo " <<i+1<<": ";
        cin >> lista[i].cantidad;

        cout << "Ingrese el precio unitario del articulo " <<i+1<<": $";
        cin >> lista[i].precio;

        //Limpia el ultimo tipo de valor ingresado en el teclado para poder volver a ingresar un dato tipo string
        cin.ignore(100, '\n');
    }  

    return 0;

}

calcCosto(costoPorArticulo lista[],int n){

    for (int i=0;i<n; i++)
    {
        lista[i].costoPorArticulo = lista[i].cantidad * lista[i].precio;
    }

    return 0;

}

mostrarDatos(costoPorArticulo lista[],int n){

    for (int i=0;i<n; i++)
    {
        cout <<"\nDetalle por articulo ingresado:\n";
        cout <<"Nombre del articulo: "<<lista[i].nombreArticul<<endl;
        cout <<"Cantidad comprada: "<<lista[i].cantidad<<endl;
        cout <<"Precio unitario del articulo: $"<<lista[i].precio<<endl;
        cout <<"Precio total del articulo: $"<<lista[i].costoPorArticulo<<endl;
    }

    return 0;

}

float costoTotal(costoPorArticulo lista[],int n){

    float total = 0;

    for (int i=0;i<n; i++)
    {
        total += lista[i].costoPorArticulo;
    }

    return total;

}