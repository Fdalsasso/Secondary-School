/*
  Name: 
  Copyright: 
  Author: 
  Date: 13/06/19 15:34
  Description: 
*/

#include <stdio.h>
#include <stdlib.h>

int t(int c, char d){
                     int e, f;
                     printf("\n");
                     for(e=c;e>0;e--){
                                      for(f=e;f>0;f--)printf("%c", d);
                                      printf("\n");
                                      }
                     }    
                     
main(){
       int a;
       char b;
       printf("ingrese el ancho de la base del triangulo y la letra a utilizar\n");
       scanf("%d", &a);
       fflush(stdin);
       scanf("%c", &b);
       t(a, b);
       system("pause>null");
       }
