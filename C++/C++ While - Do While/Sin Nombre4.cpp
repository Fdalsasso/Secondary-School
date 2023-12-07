/*
  Name: Ej 4
  Copyright: 
  Author: Facundo Dalsasso
  Date: 12/07/18 08:43
  Description: Un programa que muestre en pantalla todos los múltiplos de 2 desde un número ingresado por el usuario hasta un número también ingresado por el usuario.
*/

#include <stdio.h>
#include <stdlib.h>

main(){
       int a, b;
       printf("ingrese el numero base\n");
       scanf("%d", &a);
       printf("ingrese el numero finalizador\n");
       scanf("%d", &b);
       while(a<b){
                  a=a+2;
                  printf("%d\t", a);
                  }
       system("pause>null");
       }
