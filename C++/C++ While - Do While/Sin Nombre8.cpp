/*
  Name: Ej 8
  Copyright: 
  Author: Facundo Dalsasso
  Date: 02/08/18 08:07
  Description: Un programa que pida ingresar una clave de tres dígitos. Debe pedirla hasta que se acierte.
*/

#include <stdio.h>
#include <stdlib.h>

main(){
       int a;
       printf("ingrese la contraseña hasta acertar, esta es de 3 digitos\n");
       do
          scanf("%d", &a);
       while(a!=131);
       printf ("acceso concedido");
       system("pause>null");
       }
