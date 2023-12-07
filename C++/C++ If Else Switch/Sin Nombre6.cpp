/*
  Name: Ej 6
  Copyright: 
  Author: Facundo Dalsasso
  Date: 07/06/18 08:06
  Description: Un programa que diga si un número ingresado es positivo o negativo.
*/

#include <stdio.h>
#include <stdlib.h>

main(){
       int x;
       printf("ingrese numero");
       scanf("%d", &x);
       if (x>0){printf("el numero es positivo");}
       else {printf("el numero es negativo");}
       system("pause>null");
       }
