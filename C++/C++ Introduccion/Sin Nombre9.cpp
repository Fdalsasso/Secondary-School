/*
  Name: Ej 9
  Copyright: 
  Author: Facundo Dalsasso
  Date: 24/05/18 09:34
  Description: Un programa que pida ingresar el valor de la tensión de fuente y los valores de las resistencias de un divisor resistivo simple de 2 resistores y que muestre la caída de tensión en cada uno de ellos.
*/

#include <stdio.h>
#include <stdlib.h>

main(){
       int R1; 
       int R2;
       int V1;
       int VR1;
       int VR2;
       printf("valor de la resistencia 1");
       scanf("%d", &R1);
       
       printf("valor de la resistencia 2");
       scanf("%d", &R2);
       
         printf("valor de la fuente");
       scanf("%d", &V1); 
       
       VR1=V1*R1/(R1+R2);
       
       VR2=V1*R2/(R1+R2);
       
       printf("caida de tension en R1 %d", VR1);
       printf("caida de tension en R2 %d", VR2);
       system("pause");
       }
