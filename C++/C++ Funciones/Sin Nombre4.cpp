/*
  Name: 
  Copyright: 
  Author: 
  Date: 06/06/19 10:17
  Description: 
*/

#include <stdio.h>
#include <stdlib.h>



int mayor(int f, int g, int k){
                               int j, h;
                               if(f<g){
                                       h=g;
                                       j=f;
                                       }
                               else{
                                    h=f;
                                    j=g;
                                    }
                               if(k==1)return j;
                               if(k==2)return h;
                               }
              
main(){
       int a, b, c;
       printf("ingrese 2 numeros\n");
       scanf("%d", &a);
       scanf("%d", &b);
       printf("ingrese un 1 si quiere mostrar el menos o un 2 si quiere mostrar el mayor\n");
       scanf("%d", &c);
       if(c==1)printf("el menor es %d", mayor(a, b, c));
       if(c==2)printf("el mayor es %d", mayor(a, b, c));       
       system("pause>null");
       }
