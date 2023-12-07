/*
  Name: Ej 5
  Copyright: 
  Author: Facundo Dalsasso
  Date: 07/06/18 07:57
  Description: Un programa que multiplique dos números reales de la siguiente forma: pedirá al usuario un primer número y si es cero escribirá en pantalla: “El producto de cualquier número por 0 es 0”. Si se ingresa un número distinto de cero, se pedirá un segundo número y se mostrará el producto de ambos.
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
