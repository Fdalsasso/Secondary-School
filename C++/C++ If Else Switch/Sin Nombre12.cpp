/*
  Name: Ej 12
  Copyright: 
  Author: Facundo Daslsasso
  Date: 14/06/18 08:39
  Description:Un programa que d� al usuario tres oportunidades para acertar un n�mero del 1 al 100. Debe avisar si el n�mero ingresado est� por encima o por debajo del n�mero a adivinar. 
*/

#include<stdlib.h>
#include<stdio.h>

main(){
       int a=7;
       int b;
       int c=0;
       while(a!=b){printf("ingrese un numero del 1 al 100\n");
       scanf("%d", &b);
       if(a==b){printf("acertaste");}
       else{if(b<a){printf("el numero ingresado es menor\n");}
            else{printf("el numero ingresado es mayor\n");}}
       c=c+1;
       if(c==3) goto aca;
       }
       aca: system("pause>null");
       }

