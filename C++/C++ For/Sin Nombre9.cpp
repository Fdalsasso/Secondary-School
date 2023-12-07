/*
  Name: Ej 9
  Copyright: 
  Author: Facundo Dalsasso
  Date: 16/08/18 09:40
  Description: Idem anterior pero ahora los números deben cambiar de color en cada segundo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

main(){
       int a, b, menem, c=0;
       aca:
       for(a=0;a<=24;)
          for(b=0;b<=60;)
             {c=c+1;
              if(c==60){b=b+1;
                        c=0;}
              if(b==60){a=a+1;
                        b=0;}
                        Sleep(1000);
                        menem=menem+1;
                        if(menem==16)menem=0;
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), menem);
                        if(a==24)goto aca;
                     system("cls");
                     
              printf("%d:%d:%d\t", a, b, c);}
       system("pause>null");
}

       
