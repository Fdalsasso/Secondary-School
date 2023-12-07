/*
  Name: Ej 14
  Copyright: 
  Author: Facundo Dalsasso
  Date: 21/06/18 09:24
  Description: Un programa que solicite el ingreso de dos números enteros y que luego permita seleccionar, por medio de un menú, si se sumarán, restarán, dividirán o multiplicarán y muestre el resultado por pantalla. Resolvelo usando la sentencia Switch.
*/

#include<stdio.h>
#include<stdlib.h>

main(){
       int x;
       int y;
       int z;
       char p;
       printf("Pulse\na para sumar\nb para restar el primer numero y el segundo\nc para multiplicarlos\nd para dividir el primero por el segundo\ne para restar el segundo y el primeron\nf para dividir el segundo por el primero\n");
       scanf("%c", & p);
       switch (p)
             {
              case 'a':printf("escriba 2 numeros\n");
                       scanf("%d", &x);
                       scanf("%d", &y);
                       z=x+y;
                       printf("%d", z);
                       system("pause>null");
                       break;
              case 'b':printf("escriba 2 numeros\n");
                       scanf("%d", &x);
                       scanf("%d", &y);
                       z=x-y;
                       printf("%d", z);
                       system("pause>null"); 
                       break;
              case 'c':printf("escriba 2 numeros\n");
                       scanf("%d", &x);
                       scanf("%d", &y);
                       z=x*y;
                       printf("%d", z);
                       system("pause>null");
                       break;
              case 'd':printf("escriba 2 numeros\n");
                       scanf("%d", &x);
                       scanf("%d", &y);
                       z=x/y;
                       printf("%d", z);
                       system("pause>null");
                       break;
              case 'e':printf("escriba 2 numeros\n");
                       scanf("%d", &x);
                       scanf("%d", &y);
                       z=y-x;
                       printf("%d", z);
                       system("pause>null");
                       break;
              case 'f':printf("escriba 2 numeros\n");
                       scanf("%d", &x);
                       scanf("%d", &y);
                       z=y/x;
                       printf("%d", z);
                       system("pause>null");
                       break; 
              }
       }
