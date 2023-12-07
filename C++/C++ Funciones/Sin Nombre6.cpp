/*
  Name: 
  Copyright: 
  Author: 
  Date: 06/06/19 10:54
  Description: 
*/

#include <stdio.h>
#include <stdlib.h>

int signo(float f){
                   int d;
                   if(f==0)d=0;
                   else{
                        if(f<0)d=-1;
                        else d=1;
                        }
                   return d;
                   }
              
main(){
       float b;
       printf("ingrese un numero\n");
       scanf("%f", &b);
       printf("%d", signo(b));
       system("pause>null");
       }
