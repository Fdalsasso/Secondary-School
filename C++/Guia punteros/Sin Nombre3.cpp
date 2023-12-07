/*
  Name:
  Copyright:
  Author:
  Date: 24/10/19 11:33
  Description: Este programa intercambia el valor de dos variables entre sí. 
*/

#include<stdlib.h>
#include<stdio.h>

main(){
       int a=40, b=70, c;
       int *punt;
       c=a;
       punt=&a;
       printf("El valor de la variable 1 es: %d\n",*punt);
       punt=&b;
       printf("El valor de la variable 2 es: %d\n\n",*punt);
       printf("Intercambio de variables\n\n");
       punt++;
       *punt=b;
       printf("El nuevo valor de la variable 1 es: %d\n",*punt);
       punt--;
       *punt=c;
       printf("El nuevo valor de la variable 2 es: %d\n",*punt);
       system("pause>null");
       
       
       
       
       
       
       
       }
