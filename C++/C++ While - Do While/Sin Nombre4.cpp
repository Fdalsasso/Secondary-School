/*
  Name: Ej 4
  Copyright: 
  Author: Facundo Dalsasso
  Date: 12/07/18 08:43
  Description: Un programa que muestre en pantalla todos los m�ltiplos de 2 desde un n�mero ingresado por el usuario hasta un n�mero tambi�n ingresado por el usuario.
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
