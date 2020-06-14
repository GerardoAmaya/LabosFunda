//Realizar un programa en c++ que devuelva el promedio de 3 números enteros ingresados por el usuario.

#include <stdio.h>
#include <conio.h>

int main()
{

float num1, num2, num3, resultado;

printf("Hola, ingresa tu primer numero");
scanf("%f", &num1);

printf("Ingrese su segundo numero");
scanf("%f", &num2);

printf("Ingrese su tercer numero");
scanf("%f", &num3);

resultado=(num1+num2+num3)/3;
printf("El promedio es %f",resultado);

 
 return 0;

}
