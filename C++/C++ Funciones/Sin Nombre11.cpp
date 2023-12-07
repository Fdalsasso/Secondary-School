/*
  Name: 
  Copyright: 
  Author: 
  Date: 13/06/19 11:52
  Description: 
*/

#include <stdio.h>
#include <stdlib.h>

int mayor(){
            int a[20], b, c;
            printf("el arreglo es el siguiente\n");
            for(c=0;c<20;c++)printf("%d\t", a[c]);
            b=a[0];
            for(c=0;c<20;c++){
                              if(b<a[c])b=a[c];
                              }
            printf("\n");
            printf("el mayor numero es: %d", b);
            }
           
int menor(){
            int e[20], f, g;
            printf("el arreglo es el siguiente\n");
            for(g=0;g<20;g++)printf("%d\t", e[g]);
            f=e[0];
            for(g=0;g<20;g++){
                              if(f>e[g])f=e[g];
                              }
            printf("\n");
            printf("el menor numero es: %d", f);
            }
           
int promedio(){
               int h[20], i=0, j;
               printf("el arreglo es el siguiente\n");
               for(j=0;j<20;j++)printf("%d\t", h[j]);
               for(j=0;j<20;j++){
                                 i=i+h[j];
                                 }
               i=i/20;
               printf("\n");
               printf("el promedio es: %d", i);
               }     
                     
main(){
       char d;
       printf("oprima + para mostrar el mayor numero, - para mostrar el menor o p para mostrar el promedio\n");
       scanf("%c", &d);
       if(d=='+'){
                  mayor();
                  }
       if(d=='-'){
                  menor();
                  }
       if(d=='p'){
                  promedio();
                  }
       system("pause>null");
       }
