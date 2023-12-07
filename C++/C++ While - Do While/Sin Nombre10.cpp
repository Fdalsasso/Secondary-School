/*
  Name: Ej 10
  Copyright: 
  Author: Facundo Dalsasso
  Date: 02/08/18 08:32
  Description: Un programa que pida al usuario su código de usuario (un numero entero) y su contraseña numérica (otro numero entero), y no le permita seguir hasta que introduzca como código 1024 y como contraseña 4567.
*/

#include <stdio.h>
#include <stdlib.h>

main(){
       int a, b;
       printf("ingrese su numero de usuario y su contraseña hasta hacerlo correctamente\n");
       do{
          printf ("ingrese numero de usuario\n");
          scanf ("%d", &a);
          printf ("ingrese contraseña\n");
          scanf ("%d", &b);             
          }
       while((a!=1024)||(b!=4567));
       printf("accesos concedido");
       system("pause>null");
       }
