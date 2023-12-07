/*
  Name: Ej 10
  Copyright: 
  Author: Facundo Dalsasso
  Date: 30/08/18 07:53
  Description: Idem anterior pero ahora que permita setear un tiempo y que al llegar al tiempo seteado detenga la cuenta y apague la máquina.
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

main(){
       int a, b c hs, ms, ss, c=0, t;
       printf("seteé la hora, minuto y segundo en el que quiere que se detenga\n");
       scanf("%d", &hs);
       scanf("%d", &ms);
       scanf("%d", &ss);
       
       for(h=0;h<=24;){
                       for(m=0;m<=60;){
                                       for(s=0;s<=60;){
                                                       while((h!=hs)&&(m!=ms)&&(s!=ss)){
                                                                                        
                          
          
            
                        Sleep(1000);
                        t=t+1;
                        if(t==16)t=0;
                        if(a==24)goto aca;
                        if((a==d)&&(b==e)&&(c==f))
                     system("cls");
              printf("%d:%d:%d\t", a, b, c);}
              
       
}
