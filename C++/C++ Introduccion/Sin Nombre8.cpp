/*
  Name: Ej 8
  Copyright: 
  Author: Facundo Dalsasso
  Date: 24/05/18 08:23
  Description: Un programa que pida los valores de tres resistencias (en Ohms) conectadas en paralelo y muestre en pantalla el valor de la resistencia equivalente.
*/

#include <stdio.h>
#include <stdlib.h>
main(){
       int D;
       int F;
       int G;
       int R;
    float P;
printf("ingrese resistencia1");   
   scanf("%d", &D);
 printf("ingrese resistencia2"); 
         scanf("%d", &F);
printf("ingrese resistencia3"); 
         scanf("%d", &G);
         P=(1/F)+(1/G)+(1/D);
         R=1/P;
         printf("la resistencia equivalente es: %d", R);
 system("pause>n");
       }
