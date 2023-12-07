/*
  Name:
  Copyright: 
  Author: 
  Date: 05/09/19 10:12
  Description:
*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

main(){
struct{
       char duracion[90];
       char nombre[90];
       char titulo[90];       
       }S1[70];
       
       int m, a=0, b=0;
       do{
		  system("cls");
          printf("Inserte el nombre del artista\n");
          fflush(stdin);
          gets(S1[b].nombre);
          printf("Inserte el titulo del tema\n");
          gets(S1[b].titulo);
          a++;
          printf("Inserte la duracion del tema(minutos:segundos)\n");
          gets(S1[b].duracion);
          printf("\n Artista: %s\n Titulo: %s\n Duracion: %s\n\n\n",S1[b].nombre,S1[b].titulo,S1[b].duracion);
          b++;
          aca:
          printf("\nIngrese:\n1)Si quiere agregar otra cancion\n2)Si quiere ver todas las canciones\n3)Si desea salir\n");
          scanf("%d",&m);
          }
          while(m==1);
          if(m==2){
                   system("cls");
                   a=b;
                   printf("Canciones:\n");
                   for(a;a>=0;a--){
                                            printf("%s\n",S1[a].titulo);         
                                            }
                   goto aca;                       
                   }                                
           if(m==3){
                    printf("Hasta la proxima\n");
                    }        
       system("pause>null");
       }
