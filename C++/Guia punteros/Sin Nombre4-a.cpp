/*
  Name:
  Copyright:
  Author:
  Date: 24/10/19 11:33
  Description: Este programa incrementa en 1 el valor de los 10 elementos de un vector de enteros. 
*/

#include<stdlib.h>
#include<stdio.h>

main(){
       int a[10]={0,11,22,33,44,55,66,77,88,99}, b;
       int *punt;
       
       for(b=0;b<10;b++){
                         punt=&a[b];
                         printf("el numero %d es: %d\n", b+1, *punt);
                         printf("el nuevo numero %d es: %d\n\n", b+1, (*punt)+1);
                         }
       system("pause>null");
       }
