/*
  Name: Ej 6
  Copyright: 
  Author: Facundo Dalsasso
  Date: 12/07/18 09:35
  Description: Un programa que calcule y muestre en pantalla cuántas cifras tiene un número entero positivo. Resolvelo utilizando while.
*/

#include <stdio.h>
#include <stdlib.h>

main(){
       int a, b;
       int c=-1;
       int d=1;
       printf("ingrese numero\n");
       scanf("%d", &a);
       if (a==0){
                 printf("el numero tiene 1 cifra");
                 }
       else{
            while (b>0){
                   b=a/d;
                   d=d*10;
                   c=c+1;
                   }
            printf("el numero tiene %d cifras", c);
            }
       system("pause>null");
       }
