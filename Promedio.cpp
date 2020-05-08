#include <stdio.h>

using namespace std;

int main(){

    float prom=0;
    float a=0;
    float b=0;
    float c=0;
    
    printf("**********************************\n");
    printf("*****PROMEDIO DE TRES NUMEROS*****\n");
    printf("**********************************\n\n");
    printf("INGRESE EL PRIMER NUMERO\n");
    scanf("%f",&a);
    printf("INGRESE EL SEGUNDO NUMERO\n");
    scanf("%f",&b);
    printf("INGRESE EL TERCER NUMERO\n");
    scanf("%f",&c);

    prom=((a+b+c)/3);//CÁLCULO

    printf("EL PROMEDIO DE: %.2f,%.2f,%.2f, ES: %.2f",a,b,c,prom);

    return 0;
}