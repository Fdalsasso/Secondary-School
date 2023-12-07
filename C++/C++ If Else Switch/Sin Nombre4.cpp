/*
  Name: Ej 4
  Copyright: 
  Author: Facundo Dalsasso
  Date: 07/06/18 07:48
  Description: Un programa que pida al usuario dos números enteros y diga cuál es el mayor de ellos.
*/

#include <stdio.h>
#include <stdlib.h>

main(){
       int X;
       int Y;
       printf("ingrese numero");
       scanf("%d", &X);
       printf("ingrese numero");
       scanf("%d", &Y);
       if (X>Y) printf ("el primer numero ingresado es mayor");
       if (X<Y) printf ("el segundo numero ingresado es mayor");
       system ("pause>null");
       }
