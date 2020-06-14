// Hacer un flujograma que dado un polinomio de la forma ax2 + bx + c, solicite losvalores de a, b y c y determine si se trata de un trinomio cuadrado perfecto.
#include <iostream>
#include "string"
#include <math.h>
using namespace std;

int main(){
    float a, b, c, resp1, resp2, resp3, resp4, resp5;
    printf("Ecuacion cuadratica, formula general, ");
    printf("Ingrese el primer numero, este sera el que este elevado al cuadrado");
    scanf("%f",&a);
    printf("Ingrese el segundo numero, este sera el que esta seguido de un literal");
    scanf("%f",&b);
    printf("Ingrese el término independiente");
    scanf("%f",&c);

    if (a!=0);{
        resp3=pow(b,2);
        resp4=(4*a*c);
        resp5=(resp3-resp4);
    }if(resp5<0){
        printf("No es un T.C.P");
        printf("\a");
    }if (resp5>=0){
        resp1=((-b+(sqrt(resp5)))/(2*a));
        resp2=((-b-(sqrt(resp5)))/(2*a));
    }if(resp1==resp2){
    printf("El resultado es igual para x1 y x2:  %.2f",resp1);
    }if (resp1!=resp2){
    printf("El resultado de x1 es:  %.2f",resp1);
    printf("El resultado de x2 es:  %.2f",resp2);
    }if(a=0){
    printf("No es un T.C.P");
    }
    return 0;
}