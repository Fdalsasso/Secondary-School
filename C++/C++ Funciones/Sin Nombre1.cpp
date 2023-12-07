/*
  Name: 
  Copyright: 
  Author: 
  Date: 06/06/19 10:10
  Description: 
*/

#include <stdio.h>
#include <stdlib.h>

int cuadrado(int f){
              f=f*f;
              return f;
              }
              
main(){
       int a;
       printf("ingrese un numero\n");
       scanf("%d", &a);
       printf("el resultado es: %d", cuadrado(a));
       system("pause>null");
       }
