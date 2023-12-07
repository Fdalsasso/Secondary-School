/*
  Name: Ej 6
  Copyright: 
  Author: Facundo Dalsasso
  Date: 16/08/18 08:32
  Description: Un programa que muestre la tabla de multiplicar de un número ingresado por el usuario.
*/

#include <stdio.h>
#include <stdlib.h>

main(){
       int a, b, c;
       printf("ingrese el numero cuya tabla quiere saber\n");
       scanf("%d", &c);
       for(a=0;a<=9;a++)
       {
        b=c*a;
        printf("%d*%d=%d\t", c, a, b);    
       }
       system("pause>null");
       }
