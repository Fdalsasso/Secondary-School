/*
  Name: 
  Copyright: 
  Author:
  Date: 05/09/19 10:12
  Description: 
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
struct{
       char duracion[90];
       char nombre[90];
       char titulo[90];       
       }S1;
       
       printf("Inserte el nombre del artista\n");
       gets(S1.nombre);
       printf("Inserte el titulo del tema\n");
       gets(S1.titulo);
       printf("Inserte la duracion del tema(minutos:segundos)\n");
       gets(S1.duracion);
       system("cls");
       printf(" Artista: %s\n Titulo: %s\n Duracion: %s",S1.nombre,S1.titulo,S1.duracion);
       system("pause>null");
       }
