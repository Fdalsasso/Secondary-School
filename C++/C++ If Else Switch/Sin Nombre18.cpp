/*
  Name: Ej 18
  Copyright: 
  Author: Facundo Dalsasso
  Date: 28/06/18 09:41
  Description: Un programa que cuente y muestre la cantidad de teclas presionadas incluyendo las de números. Si se presiona una vocal, que decremente el valor de una variable inicializada en 30 y al llegar la misma a cero no debe dejar presionar ninguna tecla más, avisando con un mensaje que se debe reiniciar la aplicación.
*/

#include <stdio.h>
#include <stdlib.h>

main(){
       int vocal=0, num=0, tot=0, f=30;
       char letra;
       printf("presione alguna tecla\n");
       while(f!=0){
       fflush(stdin);
       scanf("%c", &letra);
       switch(letra)
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
       case'0': num=num+1;
                break;
       case'a':
       case'e':
       case'i':
       case'o':
       case'u': vocal=vocal+1;
                f=f-1;
                break;
       default: tot=tot+1;
                break;
                    }}
       printf("Se precionaron %d veces los numeros, %d veces las vocales y %d veces otra tecla\n", num, vocal, tot);
       printf("Debe reiniciar el programa");
       system("pause>null");
       }
