/*
  Name: Ej 8
  Copyright: 
  Author: Facundo Dalsasso
  Date: 16/08/18 09:26
  Description: Un programa que muestre en pantalla un reloj con segundos, minutos y horas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

main(){
       int a, b, c=0;
       aca:
       for(a=0;a<=24;)
          for(b=0;b<=60;)
             {c=c+1;
              if(c==60){b=b+1;
                        c=0;}
              if(b==60){a=a+1;
                        b=0;}
                        Sleep(1000);
                        if(a==24)goto aca;
                     system("cls");
                     
              printf("%d:%d:%d\t", a, b, c);}
       system("pause>null");
       }
