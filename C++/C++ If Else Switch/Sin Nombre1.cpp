/*
  Name: Ej 1
  Copyright: 
  Author: Facundo Dalsasso
  Date: 31/05/18 08:53
  Description: Un programa que pida al usuario ingresar un número y diga si es positivo O NEGATIVO.
  
*/
#include <stdio.h>
#include <stdlib.h>

main(){
int num;
printf("ingrese numero");
scanf("%d", &num);
if (num<0) printf("el numero es negativo");
if(num>0) printf("el numero es positivo");
system("pause>null");
}
