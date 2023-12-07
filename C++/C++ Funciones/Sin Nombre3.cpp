/*
  Name: 
  Copyright: 
  Author: 
  Date: 06/06/19 10:15
  Description: 
*/

#include <stdio.h>
#include <stdlib.h>

int mayor(int f, int c){
           if(f<c)f=c;
           return f;
           }
              
main(){
       int a, b;
       printf("ingrese 2 numeros\n");
       scanf("%d", &a);
       scanf("%d", &b);
       printf("el resultado es: %d", mayor(a, b));
       system("pause>null");
       }
