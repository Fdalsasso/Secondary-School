/*
  Name: Ej 5
  Copyright: 
  Author: Facundo Dalsasso
  Date: 12/07/18 08:50
  Description: Un programa que muestre en pantalla un reloj con segundos, minutos y horas. Debe mostrarla en la parte superior izquierda de la ventana de comandos en el siguiente formato: HH:MM:SS.
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

main(){
       fa:
       int hh=0, mm=0, ss=0;
       while(hh!=24){
                     printf("%d:%d:%d\n", hh, mm, ss);
                     ss=ss+1;
                     if(ss==60){
                               mm=mm+1;
                               ss=0;
                               }
                     if(mm==60){
                               hh=hh+1;
                               mm=0;
                               }
                     Sleep(1000);
                     system("cls");
                     }
       goto fa;
       system("pause>null");
       }
