/*
  Name: Ej 7
  Copyright: 
  Author: Facundo Dalsasso
  Date: 17/05/18 08:41
  Description: Un programa que pida los valores de Intensidad de corriente y los de resistencia para que termine mostrando el valor de la tensión en pantalla.
*/

#include <stdio.h>
#include <stdlib.h>
main()
{int D;
float B;
int A;

printf("ingrese Resistencia");   
scanf("%d", &A);
printf("ingrese corriente");   
scanf("%f", &B);
D=A*B;
printf("%d", D);
 system("pause>n");
}
