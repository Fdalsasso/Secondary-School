/*
  Name: 
  Copyright: 
  Author: 
  Date: 06/06/19 11:34
  Description: 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int veces(char f[20], char d){
                       int c, g=0;
                       for(c=0;c<20;c++){
                                         if(f[c]==d) g++;
                                         }
                       return g;
                       }
              
main(){
       char a[20], e;
       int b;
       for(b=0;b<20;b++) a[b]=' ';
       printf("ingrese una letra\n");
       scanf("%c", &e);
       printf("ingrese una palabra\n");
       scanf("%s", &a);
       printf("la letra %c se repite %d veces en la palabra %s", e, veces(a, e), a);
       system("pause>null");
       }
