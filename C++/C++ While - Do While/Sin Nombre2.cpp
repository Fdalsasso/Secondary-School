/*
  Name: Ej 2
  Copyright: 
  Author: Facundo Dalsasso
  Date: 12/07/18 08:29
  Description: Un programa que pida al usuario que ingrese su contrase�a num�rica de 4 d�gitos y que termine cuando ingresa la contrase�a correcta.
*/

#include <stdio.h>
#include <stdlib.h>

main(){
       int a;
       printf("ingrese la contrase�a\n");
       scanf("%d", &a);
       while (a!=1234){
                       printf("ingrese bien la contrase�a\n");
                       scanf("%d", &a);             
                       }
       printf("acceso concedido");
       system("pause>null");
       }
