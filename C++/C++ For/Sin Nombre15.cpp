/*
  Name: Ej 15
  Copyright: 
  Author: Facundo Dalsasso
  Date: 20/09/18 07:53
  Description: Cre� un programa que lea un n�mero entero y a partir de �l cree un cuadrado de asteriscos con ese tama�o. Los asteriscos s�lo se ver�n en el borde del cuadrado, no en el interior.
*/

#include <stdio.h>
#include <stdlib.h>

main(){
       int a, b, c, d, e;
       printf("ingrese la cantidad de asteriscos que va a tener el cuadrado en cada lado\n");
       scanf("%d", &d);
       for(a=1;a<=d; a++)
          {
          printf("*");
          }
          printf("\n");
          c=d-2;
          for(e=1;e<=c;e++)
          {
          printf("*");
          for(b=1;b<=c;b++)
          {
           printf(" ");   
          }
          printf("*\n");                 
          }
          for(a=1;a<=d; a++)
          {
          printf("*");
          }
          system("pause>null"); 
       }
