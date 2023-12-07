/*
  Name:
  Copyright:
  Author:
  Date: 24/10/19 11:33
  Description: Ídem anterior pero que calcule, a pedido del usuario, la raíz cuadrada o el cuadrado de un número ingresado.
*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int *punt;

int raiz(int d){
                int s;
                s=sqrt(d);
                *punt=0;
                return s;
                }
                       
int cuadrado(int d){
                    int s;
                    s=d*d;
                    *punt=0;
                    return s;
                    }

main(){
       int a, b, c;
       
       printf("ingrese un numero\n");
       scanf("%d", &a);
       printf("ingrese 1 si quiere la raiz del numero o 2 si quiere el cuadrado del mismo\n");
       scanf("%d", &b);
       punt=&b;
       if(b==1){
                c=raiz(a);
                punt=&c;
                punt++;
                printf("el nuevo valor del numero es: %d\n", *punt);
                punt--;
                printf("y el resultado de la raiz es: %d\n", *punt);
                }
       else{
            c=cuadrado(a);
            punt=&c;
            punt++;
            printf("el nuevo valor del numero es: %d\n", *punt);
            punt--;
            printf("y el resultado de la raiz es: %d\n", *punt);
            }
       system("pause>null");
       }
