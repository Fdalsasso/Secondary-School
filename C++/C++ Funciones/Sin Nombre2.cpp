/*
  Name: 
  Copyright: 
  Author: 
  Date: 06/06/19 10:13
  Description: 
*/

#include <stdio.h>
#include <stdlib.h>

int suma(int f, int c){
           f=f+c;
           return f;
           }
              
main(){
       int a, b;
       printf("ingrese los numeros a sumar\n");
       scanf("%d", &a);
       scanf("%d", &b);
       printf("el resultado es: %d", suma(a, b));
       system("pause>null");
       }
