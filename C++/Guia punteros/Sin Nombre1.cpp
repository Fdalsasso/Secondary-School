/*
  Name: 
  Copyright: 
  Author: 
  Date: 24/10/19 11:33
  Description: Este programa muestra en pantalla el valor de una variable de tipo entera y la dirección que tiene la misma.
*/

#include<stdlib.h>
#include<stdio.h>

main(){
       int a=50;
       int *punt;
       
       punt=&a;
       printf("La direccion de la variable es: %d\n",punt);
       printf("El valor de la variable es: %d",*punt);
       system("pause>null");
       
       
       
       
       
       
       }
