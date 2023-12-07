/*
  Name: 
  Copyright: 
  Author: 
  Date: 19/09/19 10:30
  Description: 
*/

#include<stdlib.h>
#include<stdio.h>
#include <string.h>

struct{
      char n[100];
      int e;
      }S1[100];

char c[3];
int b=0, d;

main(){
       c[0]='f';
       c[1]='i';
       c[2]='n';
       FILE* fichero;
       fichero = fopen("datosdeusuario.txt", "wt");
       do{
          printf("ingrese el nombre y el apellido\n");
          gets(S1[b].n);
          printf("ingrese la edad\n");
          scanf("%d", &S1[b].e); 
          b++;  
          fflush(stdin);
          system("cls");
          }while(strcmp(c, S1[b-1].n)!=0);  
	   for(d=0;d<b-1;d++){
			             fprintf(fichero, "Nombre y Apellido: %s\n", S1[d].n);
                         fprintf(fichero, "Edad: %d\n", S1[d].e);
	   					 }
       fclose(fichero);
       printf("el texto esta en datosdeusuario");
       system("pause>null");
       }
