/*
  Name:
  Copyright:
  Author:
  Date: 24/10/19 11:33
  Description: Creá el programa que sume dos números ingresados por el usuario a través de la función suma. 
  Al salir de la función las variables utilizadas para sumar (declaradas en main) deben quedar cargadas con 0. 
  Cambiá Los valores de las variables a través de punteros.
*/

#include<stdlib.h>
#include<stdio.h>

int *punt;

int suma(int a, int b){
                       int s;
                       s=a+b;
                       *punt=0;
                       punt++;
                       *punt=0;
                       return s;
                       }

main(){
       int a, b, c, d;
       
       printf("ingrese 2 numeros\n");
       scanf("%d", &a);
       scanf("%d", &b);
       punt=&a;
       c=suma(a, b);
       punt=&c;
       printf("el resultado de la suma es: %d\n", *punt);
       for(d=1;d<3;d++){
                        punt++;
                        printf("el nuevo valor del numero %d es: %d\n", d, *punt);
                        }
       system("pause>null");
       }
