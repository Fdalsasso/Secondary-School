/*
  Name: Ej 2
  Copyright: 
  Author: Facundo Dalsasso
  Date: 12/07/18 08:29
  Description: Un programa que pida al usuario que ingrese su contraseña numérica de 4 dígitos y que termine cuando ingresa la contraseña correcta.
*/

#include <stdio.h>
#include <stdlib.h>

main(){
       int a;
       printf("ingrese la contraseña\n");
       scanf("%d", &a);
       while (a!=1234){
                       printf("ingrese bien la contraseña\n");
                       scanf("%d", &a);             
                       }
       printf("acceso concedido");
       system("pause>null");
       }
