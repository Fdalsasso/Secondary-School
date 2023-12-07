/*
  Name: Ej 9
  Copyright: 
  Author: Facundo Dalsasso
  Date: 07/06/18 09:21
  Description: Un programa que pida al usuario tres números reales y muestre cuál es el mayor de ellos.
*/

#include <stdio.h>
#include <stdlib.h>

main(){
       int x;
       int y;
       int z;
       printf("ingrese variable x");
       scanf("%i", &x);
       printf("ingrese variable y");
       scanf("%i", &y);
       printf("ingrese variable z");
       scanf("%i", &z);
       if(x==y){
                if(x==z){
                         printf("los 3 numeros son iguales");
                } else {
                       if(x<z){
                               printf("z es mayor");
                        } else {
                                         printf("x e y son los mayores");
                        }
                }
       } else {
              if(x==z){
                       if(x<y){printf("y es el mayor");}
                       else{printf("x y z son los mayores");}
               }else{
                    if(z==y){if(x<z){printf("z e y son los mayores");}
                             else{printf("x es el mayor");}
                    }else{
                         if(x<z){if(z<y){printf("y es el mayor");}
                                 else{printf("z es el mayor");}}
                         else{if(x<y){printf("y es el mayor");}
                              else{printf("x es el mayor");}}}}}
       system("pause>null");}
       
