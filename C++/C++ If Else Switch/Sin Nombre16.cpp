/*
  Name: Ej 16
  Copyright: 
  Author: Facundo Dalsasso
  Date: 28/06/18 08:31
  Description: Un programa que cuente la cantidad de veces que presionaron una vocal, un número, y cualquier otra tecla. Resolvelo utilizando la sentencia SWITCH.
*/

#include<stdio.h>
#include<stdlib.h>

main(){
       char p;
       int vocal=0, num=0, otra=0;
       printf("precione las teclas que quiera y espacio cuando quiera terminar todo\n");
       aca:
       fflush(stdin);
       scanf("%c", &p);
       switch(p)
       {
       case'a':
       case'e':
       case'i':
       case'o':
       case'u': vocal=vocal+1;
                goto aca;
                break;     
       case'1':
       case'2':
       case'3':
       case'4':
       case'5': 
       case'6':
       case'7':
       case'8':
       case'9':
       case'0': num=num+1;
                goto aca;
                break;  
       case' ': break;
       default:otra=otra+1;
               goto aca;
               break;
       }
       printf("las vocales se tocaron %d veces, los numeros %d veces y lo demas %d veces", vocal, num, otra);
       system("pause>null");
       }
