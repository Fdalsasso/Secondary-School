/*
  Name: 
  Copyright: 
  Author: 
  Date: 13/06/19 15:46
  Description: 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int h[100];

int ordenar(){
              int b, c, d, e;
              for(e=0;e<99;e++){
                                c=1;
                                for(b=0;b<99;b++){
                                                  if(h[b]>h[c]){
                                                                d=h[b];
                                                                h[b]=h[c];
                                                                h[c]=d;
                                                                }
                                                  c++;
                                                  }
                                }
              }

int mostrar(){
              int b;
              for(b=0;b<100;b++){
                                 printf("%d\t", h[b]);
                                 }
              }

main(){
       int b;
       srand(time(0));
       for(b=0;b<100;b++){
                          h[b]=1+rand()%(500-1);
                          }
       ordenar();
       mostrar();
       system("pause>null");
       }
