/*
  Name: Ej 5
  Copyright: 
  Author: Facundo Dalsasso
  Date: 07/06/18 07:57
  Description: Un programa que multiplique dos n�meros reales de la siguiente forma: pedir� al usuario un primer n�mero y si es cero escribir� en pantalla: �El producto de cualquier n�mero por 0 es 0�. Si se ingresa un n�mero distinto de cero, se pedir� un segundo n�mero y se mostrar� el producto de ambos.
*/

#include <stdio.h>
#include <stdlib.h>

main(){
       int x;
       int y;
       int z;
       printf ("ingrese numero");
       scanf ("%d", &x);
       if (x==0) {printf ("El producto de cualquier numero por 0 es 0");}
       else {printf ("ingrese numero");
       scanf ("%d", &y);
       z=x*y;
       printf ("el resultado es %d", z);}
       system ("pause>null");
       }
