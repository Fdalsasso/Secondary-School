/*
  Name: Ej 9
  Copyright: 
  Author: Facundo Dalsasso
  Date: 02/08/18 08:16
  Description: Unprograma que pida al usuario una contraseña numérica de cuatro dígitos. Tiene que dar cuatro oportunidades para acertar y si esto no pasa, debe hacerlo saber mediante un mensaje que diga que tiene que reiniciar la aplicación.
*/

#include <stdio.h>
#include <stdlib.h>

main(){
       int a, c=0;
       printf("ingrese la contraseña de 4 digitos, tiene 4 intentos\n");
       do {
           scanf("%d", &a);
           c=c+1;
           }
       while ((a!=3495)&&(c!=4));
       if(a==3495)printf("acceso concedido");
       if(c==4)printf("debe reiniciar el programa");
       system("pause>null");
       }
