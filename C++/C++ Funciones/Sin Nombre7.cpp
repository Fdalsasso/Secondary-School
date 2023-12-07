/*
  Name: 
  Copyright: 
  Author: 
  Date: 06/06/19 11:20
  Description: 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char letra(char f[20]){
                       int c=20;
                       do{
                          c--; 
                          }while(f[c]==' ');
                       c--;
                       return f[c];
                       }
              
main(){
       char a[20];
       int b;
       for(b=0;b<20;b++) a[b]=' ';
       printf("ingrese una palabra\n");
       scanf("%s", &a);
       printf("la ultima letra de la palabra es: %c", letra(a));
       system("pause>null");
       }
