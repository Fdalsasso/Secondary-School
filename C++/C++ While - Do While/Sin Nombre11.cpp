/*
  Name: Ej 11
  Copyright: 
  Author: Facundo Dalsasso
  Date: 02/08/18 08:42
  Description: Un programa que muestre en pantalla un reloj con segundos, minutos y horas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

main(){
       fa:
       int hh=0, mm=0, ss=0;
       do{
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
        while(hh!=24);
       goto fa;
       system("pause>null");
       }
