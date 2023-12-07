/*
  Name: Ej 12
  Copyright: 
  Author: Facundo Dalsasso
  Date: 09/08/18 07:42
  Description: Un programa que sume entre sí los números correspondientes a las cifras de un número entero ingresado por el usuario. Si se ingresa el 123, tiene que mostrar: 1+2+3=6.
*/

#include <stdio.h>
#include <stdlib.h>

main(){
       int a, b;
       int c=0;
       int d=10000;
       printf("ingrese numero\n");
       scanf("%d", &a);
       do{
          b=a/d;
          c=c+b;
          a=a-(b*d);
          d=d/10;
          }
          while(d>0);
          printf("la suma da como resultdo %d", c);
       system("pause>null");
       }
