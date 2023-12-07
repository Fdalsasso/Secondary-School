/*
  Name:  
  Copyright: 
  Author: 
  Date: 08/08/19 11:00
  Description: 
*/

#include"cambio de base.h"

int mask(int a,int b){
                    int c,d;
                    c=a>>b;
                    d=c&1;
                    printf("El valor del bit es:%d",d);
                    }                                             
main(){
       int a,b;
       printf("Ingrese un numero entre 0 y 255\n");
       scanf("%d",&a);
       printf("Ingrese el bit que desea obtener(entre 0 y 7)\n");
       scanf("%d",&b);
       mask(a,b);
       system("pause>null");
       } 
