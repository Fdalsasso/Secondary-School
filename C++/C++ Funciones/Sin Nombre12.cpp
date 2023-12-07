/*
  Name: 
  Copyright: 
  Author: 
  Date: 13/06/19 14:53
  Description: 
*/

#include <stdio.h>
#include <stdlib.h>

int t(int b){
              int c;
              for(c=0;c<10;c++)printf("%d\t", b*c);
              }    
                     
main(){
       int a;
       printf("ingrese un numero ");
       scanf("%d", &a);
       printf("su tabla de multiplicacion es:\n");
       t(a);
       system("pause>null");
       }
