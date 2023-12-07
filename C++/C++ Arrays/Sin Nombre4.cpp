/*
  Name: 
  Copyright: 
  Author: 
  Date: 19/09/19 10:24
  Description: 
*/

#include<stdlib.h>
#include<stdio.h>


main(){
       FILE* fichero;
       fichero = fopen("ej 4.txt", "wt");
       fputs("Linea 1\n", fichero);
       fputs("Linea 2\n", fichero);
       fputs("Linea 3\n", fichero);
       fputs("Linea 4\n", fichero);
       fputs("Linea 5\n", fichero);
       fclose(fichero);
       printf("el texto esta en ej 4");
       system("pause>null");
       }
