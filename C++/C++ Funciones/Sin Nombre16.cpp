/*
  Name: 
  Copyright: 
  Author: 
  Date: 27/06/19 11:27
  Description: 
*/

#include <stdio.h>
#include <stdlib.h>

int a, c;

int suma(){
           printf("%d", a+c);
           }
           
int resta(){
            printf("%d", a-c);
            }
           
int mul(){
          printf("%d", a*c);
          }
           
int div(){
          float b=a, e=c;
          if((a%c)==0)printf("%d", a/c);
          else printf("%f", b/e);
          }

main(){
       char b;
       printf("ingrese la operacion matematica a realizar, teniendo en cuenta que luego de ingresar cada numero y la operacion en si debe presionar enter\n");
       scanf("%d", &a);
       fflush(stdin);
       scanf("%c", &b);
       fflush(stdin);
       scanf("%d", &c);
       printf("\n");
       if(b=='+')suma();
       if(b=='-')resta();
       if(b=='*')mul();
       if(b=='/')div();
       system("pause>null");
       }
