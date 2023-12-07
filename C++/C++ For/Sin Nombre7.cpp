/*
  Name: Ej 7
  Copyright: 
  Author: Facundo Dalsasso
  Date: 16/08/18 09:15
  Description: Un programa que muestre en pantalla las tablas de multiplicar del 1 al 9 menos la del 3 y la del 7.
*/

#include <stdio.h>
#include <stdlib.h>

main(){
       int a, b, c;
       for(a=0;a<=2;a++)
          for(b=0;b<=9;b++)
             printf("%d*%d=%d\t", a, b, a*b);
       for(a=4;a<=6;a++)
          for(b=0;b<=9;b++)
             printf("%d*%d=%d\t", a, b, a*b);
       for(a=8;a<=9;a++)
          for(b=0;b<=9;b++)
             printf("%d*%d=%d\t", a, b, a*b);
       system("pause>null");
       }
