/*
  Name: Ej 13
  Copyright: 
  Author: Facundo Dalsasso
  Date: 06/09/18 08:03
  Description: un programa que muestre una salida de 20 líneas de este tipo:
  1
  1 2
  1 2 3
  1 2 3 4
*/

#include <stdio.h>
#include <stdlib.h>

main(){
       int a,c, b;
       for(a=1;a<=20; a++)
          {printf("\n");
           for(b=1;b<=a;b++)
          {
           printf("%d", b);
            }
		  }
         
          system("pause>null");      
 }

