/*
  Name: 
  Copyright: 
  Author: 
  Date: 06/06/19 11:43
  Description: 
*/

#include <stdio.h>
#include <stdlib.h>

int suma(int f){
                int b, x, k[100], r=0, l;
                for(b=0;b<100;b++)k[b]=0;
                for(b=99;b>-1;b--){
                                  k[b]=f%10;
                                  f=f/10;
                                  }
                for(b=0;b<100;b++)r=r+k[b];
                return r;
                }
              
main(){
       int a;
       printf("ingrese un numero de 6 cifras\n");
       scanf("%d", &a);
       printf("el resultado es: %d", suma(a));
       system("pause>null");
       }

