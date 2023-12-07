/*
  Name: Ej 5
  Copyright: 
  Author: Facundo Dalsasso
  Date: 09/08/18 09:44
  Description: Un programa que muestre las tablas de multiplicar del 1 al 9.
*/

#include <stdio.h>
#include <stdlib.h>

main(){
       int a, b;
       for(a=0;a<=9;a++)
       {
         b=1*a;
         printf("1*%d=%d\t", a, b );                
        }
        for(a=0;a<=9;a++)
       {
         b=2*a;
         printf("2*%d=%d\t", a, b );                
        }
        for(a=0;a<=9;a++)
       {
         b=3*a;
         printf("3*%d=%d\t", a, b );                
        }
        for(a=0;a<=9;a++)
       {
         b=4*a;
         printf("4*%d=%d\t", a, b );                
        }
        for(a=0;a<=9;a++)
       {
         b=5*a;
         printf("5*%d=%d\t", a, b );                
        }
        for(a=0;a<=9;a++)
       {
         b=6*a;
         printf("6*%d=%d\t", a, b );                
        }
        for(a=0;a<=9;a++)
       {
         b=7*a;
         printf("7*%d=%d\t", a, b );                
        }
        for(a=0;a<=9;a++)
       {
         b=8*a;
         printf("8*%d=%d\t", a, b );                
        }
        for(a=0;a<=9;a++)
       {
         b=9*a;
         printf("9*%d=%d\t", a, b );                
        }
        system("pause>null");
       }
