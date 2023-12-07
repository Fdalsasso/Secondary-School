/*
  Name: Ej 19
  Copyright: 
  Author: Facundo Dalsasso
  Date: 28/06/18 09:48
  Description: Un programa que simule el soft de acceso de una cerradura codificada. Debe dar al usuario cuatro oportunidades de ingresar una clave de tres dígitos. Si no se ingresa el código correcto en dichas oportunidades debe imprimir: “El código ingresado no es el correcto. Acceso denegado. Reinicie para volver a intentar.”
*/

#include<stdio.h>
#include<stdlib.h>

main(){
       int f=0; 
       int con;
       printf("ingrese la contrasenia\n");
       while(f!=4){
       scanf("%d", &con);
       switch(con)
       {
         case 123: printf("acceso concedido\n"); 
                    goto aca;
                    break;
                     }
       f=f+1;
       printf("ingreso mal la contrasenia, siga intentando\n");
       }
       aca:
       system("pause>null");
       }
