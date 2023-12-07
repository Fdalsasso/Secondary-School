/*
  Name: Ej 2
  Copyright: 
  Author: Facundo Dalsasso
  Date: 09/08/18 09:30
  Description: Un programa que muestre en pantalla la tabla de multiplicar del número 6. Deberá mostrar:
6*0=0
6*1=6
6*2=12
Etc.
*/

#include <stdio.h>
#include <stdlib.h>

main(){
       int a, b;
       for(a=0;a<=10;a++)
       {
         b=6*a;
         printf("6*%d=%d\t", a, b );
                    }
         system("pause>null");
       }
