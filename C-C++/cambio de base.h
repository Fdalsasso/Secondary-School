#include <stdio.h>
#include <stdlib.h>

int binario(int a){
  int c[20], d, e;
  for(d=0;d<20;d++)
    c[d]=0;
  d=0;
  do{
    c[d]=a%2;
    a=a/2;
    d++;
  }while(a!=0);
  for(d=0;d<20;d++)
    if(c[d]==1)
      e=d;
  for(d=e;d>=0;d--)
    printf("%d", c[d]);
  printf("\n");
}

int hexa(int a){
  printf("%x\n", a);
}

int octal(int a){
  printf("%o\n", a);
}