//adivinar numero
#include <stdio.h>  // printf
#include <stdlib.h> // rand y RAND_MAX
#define INTENTOS_MAXIMOS 5
#define INFERIOR 1 
#define SUPERIOR 5 
//funciones
int aleatorio_en_rango(int minimo, int maximo);


int main() {
 
  // Numero elegido
  int secreto = 11;
 
  int respuesta, intentos = 0;


  printf("numero entero entre 1 y 100, adinivalo en un maximo de 5 intentos ",
         INFERIOR, SUPERIOR, INTENTOS_MAXIMOS);

  while (1) {
    intentos++;
    printf("Escriba el numero que cree que elegi: ");
    scanf("%d", &respuesta);
    if (respuesta == secreto) {
      printf("Correcto. El numero que seleccione fue 11 "
             "felicidades",
             secreto, intentos);
      break;
    } else if (respuesta < secreto) {
      printf(
          "El numero que elegi es mayor que %d ",
          respuesta);
    } else {
      // respuesta > secreto
      printf(
          "el numero que elegi es menor que %d ",
          respuesta);
    }
//se rompe y se indica que perdio
    if (intentos >= INTENTOS_MAXIMOS) {
      printf("Perdiste. el numero correcto es %d", secreto);
      break;
    }
  }
}


