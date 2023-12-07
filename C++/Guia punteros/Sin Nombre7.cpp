/*
  Name: 
  Copyright: 
  Author: 
  Date: 31/10/19 11:38
  Description: 
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float *punt, a[10], r[10], *jaja;

int cargar(){
             int b;
             for(b=0;b<10;b++){
                               scanf("%f", &a[b]);
                               punt=&a[b];
                               }
             }

int raiz(){
	       int b;
	       for(b=0;b<10;b++){
				             *punt=sqrt(*punt);
		                     punt--;
		                     }
		   for(b=0;b<10;b++){
				             jaja=&r[b];
				             punt++;
					    	 *jaja=*punt;
							 }
           }

int cuadrado(){
	           int b;
	           for(b=0;b<10;b++){
				                 *punt=*punt**punt;
		                         punt--;
		                         }
		       for(b=0;b<10;b++){
				                 jaja=&r[b];
				                 punt++;
								 *jaja=*punt;
		                         }
			   }

int cubo(){
	       int b;
	       for(b=0;b<10;b++){
				             *punt=*punt**punt**punt;
		                     punt--;
		                     }
		   for(b=0;b<10;b++){
				             jaja=&r[b];
				             punt++;
				    		 *jaja=*punt;
							 }
	       }

int mostrar(){
	          for(int b=0;b<10;b++) printf("%f\t", r[b]);
	          }

main(){
       int b;
       printf("ingrese 10 numeros\n");
       cargar();
       printf("ingrese \n1 si quire hacer la raiz de los numeros\n2 su quiere el cuadrado\n3 si quiere el cubo\n");
       scanf("%d", &b);
       switch(b){
                 case 1: raiz();
                         break;
                 case 2: cuadrado();
                         break;
                 case 3: cubo();
                         break;
                 }
       mostrar();
       system("pause>null");
       }
