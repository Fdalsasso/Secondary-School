/*
  Name: 
  Copyright: 
  Author: 
  Date: 13/06/19 15:12
  Description: 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int d(){
        int a;
        srand(time(0));
        a=1+rand()%(7-1);
        }    
                     
main(){
       printf("%d", d());
       system("pause>null");
       }
