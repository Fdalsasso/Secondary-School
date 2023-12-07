/*
  Name: Ej 12
  Copyright: 
  Author: Facundo Dalsassso
  Date: 06/09/18 07:42
  Description: Idem anterior pero comenzará a contar al presionar la tecla “c y parará al presionar “f”.
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

main(){
       int a, b, g, c=0;
       char f, h = 0;
       printf("toque c para comenzar o f pausar el programa");
       scanf("%c", &f);
       if(f=='c')
       aca:
       for(a=0;a<=24;)
          {for(b=0;b<=60;)
          {if(b==60){a=a+1;
                    b=0;}
             for(c=0;c<=60;c++)
             {if(kbhit()){
                         g=getch();
                         if(g=='f'){
                         wh:
                         while(kbhit()==0) ;
                         h=getch();
                         if(h=='c'){continue;}else{goto wh;}}}
                                   
                         
              if(c==60){b=b+1;
                        c=0;}
                        Sleep(1000);
                        if(a==24)goto aca;
                     system("cls");
                            
              printf("%d:%d:%d\t", a, b, c);}}}
       system("pause>null");
       }

