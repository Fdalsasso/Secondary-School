/*
  Name: Ej 17
  Copyright: 
  Author: Facundo Dalssso
  Date: 28/06/18 09:21
  Description: Un programa que pida al usuario un número de una cifra y muestre el color correspondiente a dicho número según el código de colores de las resistencias.
*/

#include<stdio.h>
#include<stdlib.h>

main(){
       char p;
       printf("escriba un numero\n");
       scanf("%c", &p);
       switch(p)
       {
       case'1':printf("marron");
               break;
       case'2':printf("rojo");
               break;
       case'3':printf("naranja");
               break;
       case'4':printf("amarillo");
               break;
       case'5': printf("verde");
               break;
       case'6':printf("azul");
               break;
       case'7':printf("violeta");
               break;
       case'8':printf("gris");
               break;
       case'9':printf("blanco");
               break;
       case'0':printf("negro");
               break;
       }
       system("pause>null");
       }
