/*
  Name: 
  Copyright: 
  Author: 
  Date: 19/09/19 09:56
  Description: 
*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int b, c;
struct{
              char n[100];
              char d[100];
              int m;
              int a;
              }S1[7];

int pedir(){
            printf("ingrese el nombre de la persona\n");
            gets(S1[b].n);
            printf("ingrese el dia de nacimiento de la persona, por ej: miercoles 13\n");
            gets(S1[b].d);
            printf("ingrese el mes de nacimiento de la persona\n");
            scanf("%d", &S1[b].m);
            fflush(stdin);
            printf("ingrese el año de nacimiento de la persona\n");
            scanf("%d", &S1[b].a);
            fflush(stdin);
            system("cls");
            }

int mes(){
          if(S1[b].m==c){
                         printf("nombre:%s\nnacio el %s/%d/%d\n\n", S1[b].n, S1[b].d, S1[b].m, S1[b].a);
                         }
          }

main(){
       for(b=0;b<7;b++){
                        pedir();
                        }
       do{
          printf("ingrese un numero de mes\n");
          scanf("%d", &c);
          system("cls");
          for(b=0;b<7;b++){
                           mes();
                           }
          }while(c!=0);
       system("pause>null");
       }
