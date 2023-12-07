/*
  Name: 
  Copyright: 
  Author: 
  Date: 06/06/19 10:25
  Description: 
*/

#include <stdio.h>
#include <stdlib.h>

int potencia(int f, int g){
                           int c, d;
                           d=f;
                           for(c=1;c<g;c++)
                           d=d*f;
                           return d;
                           }
              
main(){
       int a, b;
       printf("ingrese la base y el exponente\n");
       scanf("%d", &a);
       scanf("%d", &b);
       printf("el resultado es: %d", potencia(a, b));
       system("pause>null");
       }
