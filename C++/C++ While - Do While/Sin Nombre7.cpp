/*
  Name: Ej 7
  Copyright: 
  Author: Facundo Dalsasso
  Date: 02/08/18 07:57
  Description: Un programa que vaya sumando los números ingresados por el usuario y vaya mostrando el resultado en pantalla. El programa tiene que terminar cuando el usuario ingresa un número negativo o cero.
*/

#include <stdio.h>
#include <stdlib.h>

main(){
       int a, b=0;
       printf("ingrese los numeros a sumar, de lado izquierdo se muestra el resultado\n");
       do{
          scanf("%d", &a);
          b=b+a;
          printf("%d\t", b);
          }
       while (a>0);
       system ("pause>null");
       }
