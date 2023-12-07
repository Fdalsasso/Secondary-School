/*
  Name: 
  Copyright: 
  Author: 
  Date: 11/07/19 11:35
  Description: 
*/

#include <stdio.h>
#include <stdlib.h>
#include "cambio de base.h"

int a, b;

int num(){    
          printf("ingrese los numeros\n");
          scanf("%d", &a);
          fflush(stdin);
          scanf("%d", &b);
          fflush(stdin);
          }
           
int menu(){
           int a;
           printf("ingrese la operacion a ejecutar\n1-OR\n2-AND\n3-EXOR\n4-NOT del primer numero\n5-NOT del segundo numero\n");
           scanf("%d", &a);
           return a;
           }
           
int or1(){
          int c;
          c=a|b;
          return c;
          }

int and1(){
           int c;
           c=a&b;
           return c;
           }

int exor(){
           int c;
           c=a^b;
           return c;
           }

int not1(){
           int c[20], d, e;
                   for(d=0;d<20;d++)c[d]=0;
                   d=0;
                   do{
                      c[d]=a%2;
                      a=a/2;
                      d++;
                      }while(a!=0);
           for(d=0;d<20;d++)c[d]=!c[d];
           for(d=0;d<20;d++)
                   if(c[d]==1)e=d;
                   for(d=e;d>=0;d--)printf("%d", c[d]);
                   printf("\n");
           }
           
int not2(){
           int c[20], d, e;
                   for(d=0;d<20;d++)c[d]=0;
                   d=0;
                   do{
                      c[d]=b%2;
                      b=b/2;
                      d++;
                      }while(b!=0);
           for(d=0;d<20;d++)c[d]=!c[d];
           for(d=0;d<20;d++)
                   if(c[d]==1)e=d;
                   for(d=e;d>=0;d--)printf("%d", c[d]);
                   printf("\n");
           }
           
main(){
       int c;
       num();
       switch(menu()){
                      case 1:c=or1();
                             binario(c);
                             break;
                      case 2:c=and1();
                             binario(c);
                             break;
                      case 3:c=exor();
                             binario(c);
                             break;
                      case 4:not1();
                             break;
                      case 5:not2();
                             break;
                      }
       system("pause>null");
       }
