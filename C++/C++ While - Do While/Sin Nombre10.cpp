/*
  Name: Ej 10
  Copyright: 
  Author: Facundo Dalsasso
  Date: 02/08/18 08:32
  Description: Un programa que pida al usuario su c�digo de usuario (un numero entero) y su contrase�a num�rica (otro numero entero), y no le permita seguir hasta que introduzca como c�digo 1024 y como contrase�a 4567.
*/

#include <stdio.h>
#include <stdlib.h>

main(){
       int a, b;
       printf("ingrese su numero de usuario y su contrase�a hasta hacerlo correctamente\n");
       do{
          printf ("ingrese numero de usuario\n");
          scanf ("%d", &a);
          printf ("ingrese contrase�a\n");
          scanf ("%d", &b);             
          }
       while((a!=1024)||(b!=4567));
       printf("accesos concedido");
       system("pause>null");
       }
