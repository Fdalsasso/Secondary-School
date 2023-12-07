/*
  Name: Ej 2
  Copyright: 
  Author: Facundo Dalsasso
  Date: 31/05/18 09:38
  Description:Un programa que pida al usuario ingresar un número y diga si es positivo, NEGATIVO O CERO.
*/
#include <stdlib.h>
#include <stdio.h>

main(){
       int num;
printf("ingrese numero");
scanf("%d", &num);
if (num<0) printf("el numero es negativo");
if(num>0) printf("el numero es positivo");
if (num==0) printf("el numero es cero");
system("pause>null");
       }
