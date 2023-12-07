/*
  Name: Ej 7
  Copyright: 
  Author: Facundo Dalsasso
  Date: 07/06/18 08:11
  Description: Un programa que diga si un número ingresado es positivo, negativo o cero.
*/

#include <stdlib.h>
#include <stdio.h>

main(){
       int x;
       printf("ingrese numero");
       scanf("%d", &x);
       if (x<0){printf("el numero es negativo");}
       else{if(x==0) printf("el numero es cero");
       else printf("el numero es positivo");};
       system ("pause>null");
       }
