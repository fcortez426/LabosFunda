#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(){

    string cadena;

    cout << "\n************************************\n";
    cout << "**********CLAVE MURCIELAGO**********\n";
    cout << "************************************\n\n";

    cout << "Ingrese cualquier frase:\n";
    getline(cin,cadena);

    for (int i=0; i<cadena.size(); i++)
    {

        switch (cadena[i])
        {
            case 'm':

                cadena[i] = '0';
                
                break;
            case 'u':

                cadena[i] = '1';
                
                break;
            case 'r':

                cadena[i] = '2';
                
                break;
            case 'c':

                cadena[i] = '3';
                
                break;
            case 'i':

                cadena[i] = '4';
                
                break;
            case 'e':

                cadena[i] = '5';
                
                break;
            case 'l':

                cadena[i] = '6';
                
                break;
            case 'a':

                cadena[i] = '7';
                
                break;
            case 'g':

                cadena[i] = '8';
                
                break;
            case 'o':

                cadena[i] = '9';
                
                break;

            case ' ':

                cadena[i] = ' ';
                
                break;
            
            default:
                break;
        }
    }    

    cout << "\nLa frase resultante de la conversion a clave murcielago es:\n" << cadena <<"\n\n";

}