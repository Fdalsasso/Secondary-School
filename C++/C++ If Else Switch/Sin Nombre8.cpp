/*
  Name: Ej 8
  Copyright: 
  Author: Facundo Dalsasso
  Date: 07/06/18 08:24
  Description: Un programa que pida al usuario dos n�meros y diga si: �Uno de los n�meros es positivo�, �Los dos n�meros son positivos� � �Ninguno de los dos n�meros es positivo. Resolvelo usando operadores l�gicos.
*/

#include <stdio.h>
#include <stdlib.h>

main(){
       int x;
       int y;
       printf("ingrese numero");
       scanf("%d", &x);
       printf("ingrese numero");
       scanf("%d", &y);
       if(x==y){if(x>0){printf("los 2 numeros son positivos");}
                else{printf("ninguno de los numeros es positivo");}}
       else{if(x>0){printf("el primer numero es positivo");}
             else{printf("el segundo numero es positivo");}}
       system("pause>null");
       }
