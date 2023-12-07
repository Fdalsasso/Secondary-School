/*
  Name: Ej 11
  Copyright: 
  Author: Facundo Dalsasso
  Date: 30/08/18 08:05
  Description: Un programa que muestre en pantalla un cronómetro que al presionar una tecla comience a contar o se detenga según corresponda.
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

main(){
       int a, b, g, h, c=0;
       char f;
       printf("toque espacio para comenzar o pausar el programa");
       scanf("%c", &f);
       if(f==' ')
       aca:
       for(a=0;a<=24;)
          {for(b=0;b<=60;)
          {if(b==60){a=a+1;
                    b=0;}
             for(c=0;c<=60;c++)
             {if(kbhit()){
                         g=getch();
                         while(kbhit==0);
                         h=getch();
                                   }
                         
              if(c==60){b=b+1;
                        c=0;}
                        Sleep(1000);
                        if(a==24)goto aca;
                     system("cls");
                            
              printf("%d:%d:%d\t", a, b, c);}}}
       system("pause>null");
       }

