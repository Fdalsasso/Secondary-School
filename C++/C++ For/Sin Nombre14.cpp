/*
  Name: Ej 14
  Copyright: 
  Author: Facundo Dalsasso
  Date: 20/09/18 07:47
  Description: Creá el programa en el que se introduce un número entero y se crea una pirámide de asteriscos. Por ejemplo si se introduce el 6, el resultado sería:
*
***
*****
*******
*********
***********
*/

#include <stdio.h>
#include <stdlib.h>

main(){
       int a, b, c=0, d;
       printf("ingrese la cantidad de renglones que va a tener la piramide\n");
       scanf("%d", &d);
       for(a=1;a<=d; a++)
          {printf("\n");
          c++;
           for(b=1;b<=c;b++)
          {
           printf("*");
            }
		  }
         
          system("pause>null"); 
       }
