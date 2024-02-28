#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Escribí el programa que guarde datos de una canción en una estructura. Deberá guardar
// el nombre del artista, el título del tema y la duración. Tiene que pedir los datos de la
// canción al usuario, almacenarlos en dicha estructura y después mostrarlos.

// Write the program that saves song data in a structure. You must save
// the name of the artist, the title of the song and the duration. You have to ask for the details of the
// song to the user, store them in said structure and then display them.

int exercise1(){
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

// Idem ejercicio anterior pero deberá almacenar datos de hasta 70 canciones. Tendrá un
// menú que permita las siguientes opciones: agregar una canción nueva, mostrar el título
// de todas las canciones y que también permita buscar la canción que contenga cierto
// texto (opcional).

// IDEM previous exercise but you must store data for up to 70 songs. will have a
// menu that allows the following options: add a new song, show the title
// of all songs and also allows you to search for the song that contains a certain
// text (optional).

exercise2(){
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
       }while(m==1);
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

// Diseñá un programa que pida los siguientes datos de siete personas: Nombre, día de
// nacimiento, mes de nacimiento y año de nacimiento. Estos datos se guardarán en un
// arreglo de estructuras. Luego pedirá al usuario que ingrese un número de mes y
// deberá imprimir en pantalla los datos de las personas que cumplan años ese mes.
// Terminará cuando se ingrese el cero como número de mes.

// Design a program that requests the following data from seven people: Name, day of
// birth, month of birth and year of birth. This data will be saved in a
// arrangement of structures. It will then ask the user to enter a month number and
// You must print on the screen the data of the people who have a birthday that month.
// It will end when zero is entered as the month number.

int b, c;
struct{
       char n[100];
       char d[100];
       int m;
       int a;
       }S3[7];

int pedir(){
       printf("ingrese el nombre de la persona\n");
       gets(S3[b].n);
       printf("ingrese el dia de nacimiento de la persona, por ej: miercoles 13\n");
       gets(S3[b].d);
       printf("ingrese el mes de nacimiento de la persona\n");
       scanf("%d", &S3[b].m);
       fflush(stdin);
       printf("ingrese el a�o de nacimiento de la persona\n");
       scanf("%d", &S3[b].a);
       fflush(stdin);
       system("cls");
}

int mes(){
       if(S3[b].m==c){
              printf("nombre:%s\nnacio el %s/%d/%d\n\n", S3[b].n, S3[b].d, S3[b].m, S3[b].a);
       }
}

int exercise3(){
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

// Escribí el programa que escriba cinco líneas de texto, una debajo de la otra, en un
// archivo destinado a tal fin

// Write the program that writes five lines of text, one below the other, in a
// file intended for this purpose

int exercise4(){
       FILE* fichero;
       fichero = fopen("ej 4.txt", "wt");
       fputs("Linea 1\n", fichero);
       fputs("Linea 2\n", fichero);
       fputs("Linea 3\n", fichero);
       fputs("Linea 4\n", fichero);
       fputs("Linea 5\n", fichero);
       fclose(fichero);
       printf("el texto esta en ej 4");
       system("pause>null");
}

// Escribí el programa que le pida los datos personales al usuario y los guarde en un
// archivo de texto llamado “datosdeusuario.txt”. Tiene que pedir nombre, apellido y edad.
// Hacé que termine cuando el usuario teclee como nombre o apellido la palabra “fin”.

// Write the program that asks the user for personal data and saves it in a
// text file called “userdata.txt”. You have to ask for your first name, last name and age.
// Make it end when the user types the word “end” as first or last name.

struct{
      char n[100];
      int e;
      }S5[100];

char c[3];
int b=0, d;

int exercise5(){
       c[0]='f';
       c[1]='i';
       c[2]='n';
       FILE* fichero;
       fichero = fopen("datosdeusuario.txt", "wt");
       do{
              printf("ingrese el nombre y el apellido\n");
              gets(S5[b].n);
              printf("ingrese la edad\n");
              scanf("%d", &S5[b].e); 
              b++;  
              fflush(stdin);
              system("cls");
       }while(strcmp(c, S5[b-1].n)!=0);  
       for(d=0;d<b-1;d++){
              fprintf(fichero, "Nombre y Apellido: %s\n", S5[d].n);
              fprintf(fichero, "Edad: %d\n", S5[d].e);
       }
       fclose(fichero);
       printf("el texto esta en datosdeusuario");
       system("pause>null");
       }

// Transformá el programa del ejercicio 2 para que ahora los datos de las canciones las
// guarde en un archivo de texto llamado “listadetemas.txt”.

// Transform the program from exercise 2 so that the song data is now
// Save in a text file called “topiclist.txt”.

struct{
       char duracion[90];
       char nombre[90];
       char titulo[90];       
       }S6[70];
       
char linea[80];
int m, a, b=0;
FILE* fichero;
       
void escribir(){
       for(a=0;a<b;a++){
              fprintf(fichero, "Artista: %s\n",S6[a].nombre);
              fprintf(fichero, "Titulo: %s\n",S6[a].titulo);
              fprintf(fichero, "Duracion: %s\n\n",S6[a].duracion);        
       }
}

int exercise6(){
       fichero = fopen("listadetemas.txt", "wt");
       do{
              system("cls");
              printf("Inserte el nombre del artista\n");
              fflush(stdin);
              gets(S6[b].nombre);
              printf("Inserte el titulo del tema\n");
              gets(S6[b].titulo);
              printf("Inserte la duracion del tema(minutos:segundos)\n");
              gets(S6[b].duracion);
              fprintf(fichero, "Artista: %s\n",S6[b].nombre);
              fprintf(fichero, "Titulo: %s\n",S6[b].titulo);
              fprintf(fichero, "Duracion: %s\n\n",S6[b].duracion);
              b++;
              aca:
                     aca2:
              printf("\nIngrese:\n1)Si quiere agregar otra cancion\n2)Si quiere ver todas las canciones\n3)Si quiere ver todo lo escrito en el fichero\n4)Si desea salir\n");
              scanf("%d",&m);
       }while(m==1);
       if(m==2){
              system("cls");
              a=b;
              printf("Canciones:\n");
              for(a;a>=0;a--){
                     printf("%s\n",S6[a].titulo);         
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