/*
  Name: 
  Copyright: 
  Author: 
  Date: 19/09/19 11:06
  Description: 
*/

#include<stdlib.h>
#include<stdio.h>

struct{
       char duracion[90];
       char nombre[90];
       char titulo[90];       
       }S1[70];
       
       char linea[80];
       int m, a, b=0;
       FILE* fichero;
       
void escribir(){
	            for(a=0;a<b;a++){
                               fprintf(fichero, "Artista: %s\n",S1[a].nombre);
                               fprintf(fichero, "Titulo: %s\n",S1[a].titulo);
                               fprintf(fichero, "Duracion: %s\n\n",S1[a].duracion);        
                               }
		        }

main(){
       fichero = fopen("listadetemas.txt", "wt");
       do{
		  system("cls");
          printf("Inserte el nombre del artista\n");
          fflush(stdin);
          gets(S1[b].nombre);
          printf("Inserte el titulo del tema\n");
          gets(S1[b].titulo);
          printf("Inserte la duracion del tema(minutos:segundos)\n");
          gets(S1[b].duracion);
          fprintf(fichero, "Artista: %s\n",S1[b].nombre);
          fprintf(fichero, "Titulo: %s\n",S1[b].titulo);
          fprintf(fichero, "Duracion: %s\n\n",S1[b].duracion);
          b++;
          aca:
		  aca2:
          printf("\nIngrese:\n1)Si quiere agregar otra cancion\n2)Si quiere ver todas las canciones\n3)Si quiere ver todo lo escrito en el fichero\n4)Si desea salir\n");
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
				    system("cls");
				    fclose(fichero);
				    fichero = fopen("listadetemas.txt", "rt");
				    while (! feof(fichero)){ 
											fgets(linea, 80, fichero); 
											if (! feof(fichero)) 
											puts(linea); 
											} 
					fclose(fichero);
					fichero = fopen("listadetemas.txt", "wt");
					escribir();
					goto aca2;
           			}
           if(m==4){
                    printf("Hasta la proxima\n");
                    fclose(fichero);
                    }
       system("pause>null");
       }
