
/*
  Name: Ej 15
  Copyright: 
  Author: Facundo Dalsasso
  Date: 28/06/18 08:11
  Description: Un programa que pida presionar una tecla y diga si se trata de un espacio, un número o ninguna de las dos cosas.
*/

#include<stdio.h>
#include<stdlib.h>

main(){
       char p;
       printf("toque alguna tecla\n");
       scanf("%c", &p);
       switch(p)
       {
                case'1':  
                case'2':  
                case'3': 
                case'4':  
                case'5':  
                case'6': 
                case'7': 
                case'8': 
                case'9': 
                case'0':  printf("es un numero");
                          break;
                case' ':  printf("es un espacio");
                          break;
                default:  printf("es otra cosa");
       }
       system("pause>null");
       }
