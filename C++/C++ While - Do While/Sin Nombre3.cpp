/*
  Name: Ej 3
  Copyright: 
  Author: Facundo Dalsassso
  Date: 12/07/18 08:38
  Description: Un programa que vaya sumando los n�meros ingresados por el usuario y vaya mostrando el resultado en pantalla. El programa tiene que terminar cuando el usuario ingresa un n�mero negativo.
*/

#include <stdio.h>
#include <stdlib.h>

main(){
       int a, b;
       printf("ingrese los numeros que vaya a sumar\n");
       scanf("%d", &a);
       while (b>-1){
                   scanf("%d", &b);
                   a=a+b;
                   printf("%d\n", a);
                   }
       system("pause>null");
       }
