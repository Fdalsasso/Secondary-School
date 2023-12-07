/*
  Name:
  Copyright:
  Author:
  Date: 24/10/19 11:33
  Description: Este programa cambia el valor de dos variables de tipo entera accediendo a las mismas a través de un puntero. 
*/

#include<stdlib.h>
#include<stdio.h>

main(){
       int a=40,b=70;
       int *punt;
       
       punt=&a;
       printf("El valor de la variable 1 es: %d\n",*punt);
       punt=&b;
       printf("El valor de la variable 2 es: %d\n\n",*punt);
       punt=&a;
       *punt=a+1;
       printf("Aumento de variables\n\n");
       printf("El nuevo valor de la variable 1 es: %d\n",*punt);
       punt=&b;
       *punt=b+1;
       printf("El nuevo valor de la variable 2 es: %d\n",*punt);
       system("pause>null");
       }
