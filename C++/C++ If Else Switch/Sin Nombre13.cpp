/*
  Name: Ej 13
  Copyright: 
  Author: Facundo Dalsasso
  Date: 14/06/18 09:43
  Description: Un programa que cuente y muestre en pantalla la cantidad de veces que presionaron una vocal, un número, cualquier otra tecla y todas las teclas.
*/

#include<stdio.h>
#include<stdlib.h>

main(){
       int v=0,num=0, otra=0, tot=0;
       char in;
       printf("toque las teclas que quiera y luego espacio para finalizar\n");
       while(in!=' '){ 
       scanf("%c", &in);
       tot=tot+1;
       if((in=='1')||(in=='2')||(in=='3')||(in=='4')||(in=='5')||(in=='6')||(in=='7')||(in=='8')||(in=='9')||(in=='0')){num=num+1;}
                      else{if((in=='a')||(in=='e')||(in=='i')||(in=='o')||(in=='u')){v=v+1;}
                           else{otra=otra+1;}}}
       if(in==' ') {goto aca;}
       aca:  printf("las vocales se precionaron %d veces, los numeros %d veces, las otras %d veces y se tocaron todas las teclas %d veces\nel programa cuenta cuando tocas enter como otra tecla", v, num, otra, tot);
       system("pause>null");
       }
