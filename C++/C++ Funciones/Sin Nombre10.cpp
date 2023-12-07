/*
  Name: 
  Copyright: 
  Author: 
  Date: 13/06/19 10:22
  Description: 
*/

#include <stdio.h>
#include <stdlib.h>

int pc(int e){
              e=e*4;
              }
           
int ac(int e){
              e=e*e;
              }
           
int pr(int b, int h){
                     b=b*2+h*2;
                     }
           
int ar(int b, int h){
                     b=b*h;
                     }
              
main(){
       char a;
       int c, d;
       printf("si se va a trabajar con un rectangulo presione r, si es un cuadrado presione c\n");
       scanf("%c", &a);
       if(a=='r'){
                  printf("ingrese la base y la altura del rectangulo\n");
                  scanf("%d", &d);
                  scanf("%d", &c);
                  printf("el perimetro es %d\n", pr(d, c));
                  printf("el area es %d\n", ar(d, c));
                  }
       if(a=='c'){
                  printf("ingrese un lado del cuadrado\n");
                  scanf("%d", &d);
                  printf("el perimetro es %d\n", pc(d));
                  printf("el area es %d\n", ac(d));
                  }
       system("pause>null");
       }

