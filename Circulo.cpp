#include <stdio.h>
#include <math.h> //HABILITA FUNCION POW PARA ELEVAR A LA POTENCIA
#define M_PI 3.14159265358979323846//DEFINE PI

using namespace std;

int main(){

    //DECLARACION DE VARIABLES
    float area=0;
    float perimetro=0;
    float radio=0;
    
    printf("****************************************\n");
    printf("*****AREA Y PERIMETRO DE UN CIRCULO*****\n");
    printf("****************************************\n\n");
    printf("INGRESE EL RADIO DEL CIRCULO\n");
    scanf("%f",&radio);

    //CALCULOS//
    area=M_PI*pow(radio,2);
    perimetro=2*M_PI*radio;

    printf("\nEL AREA DEL CIRCULO ES:\n");
    printf("%.2f",area);
    printf("\nEL PERIMETRO DEL CIRCULO ES:\n");
    printf("%.2f",perimetro);



    return 0;
}