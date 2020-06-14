#include <iostream>

using namespace std;

int main(){

    int secreto = 62;//Número a adivinar
    int sel = 0;
    int intento = 0;
    int i = 5;//CVariable contador
    int continuar = 0;

    cout << "\n***************************\n";
    cout << "*****ADIVINA EL NUMERO*****\n";
    cout << "***************************\n\n";

    cout << "Deberas adivinar un numero guardado en el sistema para ganar\n\n";

    cout << "1. Jugar\n";
    cout << "2. Salir\n";
    cin >> sel;
    
    switch (sel)
    {
    case 1:

        do{
            i--;

            cout << "\nINGRESE UN NUMERO ENTRE 1 Y 100, AMBOS INCLUIDOS, PARA PROBAR SU SUERTE Y ENCONTRAR EL NUMERO ESCONDIDO\n";
            cin >> intento;

            if(intento != secreto){//SI EL NUMERO INGRESADO ES DIFERENTE AL NUMERO GUARDADO COMIENZA INSTRUCCION

                if(i != 0){

                    //PISTAS
                    if(intento > secreto && intento > 85){
                        cout << "\nEstas muy arriba del numero escondido\n";

                    }else if(intento > secreto && intento < 85){
                        cout << "\nPrueba bajar mas el numero ingresado\n";

                    }else if(intento > secreto && intento < 72){
                        cout << "\nEstas cerca, intenta reducir un poco el numero ingresado\n";

                    }else if(intento < secreto && intento < 25){
                        cout << "\nEstas muy por debajo del numero escondido\n";

                    }else if(intento < secreto && intento > 25){
                        cout << "\nPrueba aumentar mas el numero escondido\n";

                    }else if(intento < secreto && intento > 52){
                        cout << "\nEstas cerca, intenta aumentar un poco el numero ingresado\n";
                    }

                    //PREGUNTA REALIZADA EN CADA TURNO PARA CONTINUAR O FINALIZAR
                    cout << "\nAun tienes: " << i << " oportunidades, quieres continuar:\n";
                    cout << "1. Continuar Jugando\n";
                    cout << "2. Salir del juego\n";
                    cin >> continuar;

                    if(continuar == 1){
                        cout << "\nSELECCIONASTE CONTINUAR\n";
                        system("pause");
                    }else{
                        i = 0;
                        cout << "SELECCIONASTE SALIR, muchas gracias por participar, vuelve pronto :)\n";
                        system("pause");
                    }

                }else{//CUANDO I TOME EL VALOR DE 0 ENTRARA ESTE ELSE QUE INDICA QUE SE JUGARON LOS 5 TURNOS SIN ADIVINAR
                    cout << "\nHaz agotado tus oportunidades :/ gracias por participar\n\n";
                    system("pause");
                }

            }else{
                //SE ADIVINO EL NUMERO GUARDADO Y ADEMAS SE IGUALA I A CERO PARA QUE EL PROGRAMA NO SE REPITA DE NUEVO.
                cout << "FELICIDADES, ERES EL GRAN GANADOR, ADIVINASTE QUE EL NUMERO OCULTO ERA 62\n\n";
                system("pause");
                i=0;
            }     

        }while(i>0);//LA INSTRUCCION SE REPETIRA SIEMPRE QUE I SEA MAYOR A CERO.

        break;

    case 2:
        cout << "Por favor vuelva pronto :)\n\n";
        break;
    default:
        cout << "Ingresa por favor una de las opciones disponibles.\n\n";
        break;
    }

}