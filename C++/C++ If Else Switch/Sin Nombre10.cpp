/*
  Name: Ej 10
  Copyright: 
  Author: Facundo Dalsasso
  Date: 14/06/18 08:06
  Description: Un programa que pida ingresar una letra y diga si se trata de una vocal.
*/

#include <stdio.h>
#include <stdlib.h>

main(){
       printf("introducir letra");
       char L1=getchar();
       if ((L1=='a')||(L1=='e')||(L1=='i')||(L1=='o')||(L1=='u')) printf("es una vocal");
       system("pause>null");
       }
