/*
  Name: Ej 11
  Copyright: 
  Author: Facundo Dalsasso
  Date: 14/06/18 08:27
  Description: 
*/

#include <stdio.h>
#include <stdlib.h>

main(){
       printf("introducir una tecla del taclado");
       char L1=getchar();
       if (L1==' ') {printf("es un espacio");}
       else{if((L1=='1')||(L1=='2')||(L1=='3')||(L1=='4')||(L1=='5')||(L1=='6')||(L1=='7')||(L1=='8')||(L1=='9')||(L1=='0')){printf("es un numero");}
             else{printf("no es ni un numero ni un espacio");}}
       system("pause>null");
       }
