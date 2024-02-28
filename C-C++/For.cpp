#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

// Escribí el programa que muestre en pantalla los números del 1 al 100
// usando un bucle FOR.

// Write the program that displays the numbers from 1 to 100 on the screen
// using a FOR loop.

int exercise1(){
    int a;
    for (a = 1; a < 101; a++)
        printf("%i\n", a);
}

// Usando FOR, escribí el programa que muestre en pantalla la tabla de
// multiplicar del número 6. Deberá mostrar:

// Using FOR, Write the program that displays the table of
// multiply from the number 6. You must show:

// 6*0=0
// 6*1=6
// 6*2=12
// Etc.

int exercise2(){
    int a, b;
    for(a=0;a<=10;a++){
        b=6*a;
        printf("6*%d=%d\t", a, b );
    }
    system("pause>null");
}

// Creá el programa que muestre el abecedario de la A a la Z. Resolvelo usando FOR.
// Create the program that shows the alphabet from A to Z. Solve it using FOR.

int exercise3(){
    char a;
    for(a='a';a<='z';a++){
        printf("%c\t", a);                   
    }
    system("pause>null");
}

// Usando FOR, escribí el programa que muestre el abecedario de la Z a la A.
// Using FOR, Write the program that displays the alphabet from Z to A.

int exercise4(){
    char a;
    for(a='z';a>='a';a--){
        printf("%c\t", a);                   
    }
    system("pause>null");
}

// Creá el programa que muestre las tablas de multiplicar del 1 al 9.
// Resolvelo usando bucles FOR anidados.

// Create the program that shows the multiplication tables from 1 to 9.
// Solve it using nested FOR loops.

int exercise5(){
    int a, b;
    for(a=0;a<=9;a++){
        b=1*a;
        printf("1*%d=%d\t", a, b );                
    }
    for(a=0;a<=9;a++){
        b=2*a;
        printf("2*%d=%d\t", a, b );                
    }
    for(a=0;a<=9;a++){
        b=3*a;
        printf("3*%d=%d\t", a, b );                
    }
    for(a=0;a<=9;a++){
        b=4*a;
        printf("4*%d=%d\t", a, b );                
    }
    for(a=0;a<=9;a++){
        b=5*a;
        printf("5*%d=%d\t", a, b );                
    }
    for(a=0;a<=9;a++){
        b=6*a;
        printf("6*%d=%d\t", a, b );                
    }
    for(a=0;a<=9;a++){
        b=7*a;
        printf("7*%d=%d\t", a, b );                
    }
    for(a=0;a<=9;a++){
        b=8*a;
        printf("8*%d=%d\t", a, b );                
    }
    for(a=0;a<=9;a++){
        b=9*a;
        printf("9*%d=%d\t", a, b );                
    }
    system("pause>null");
}

// Escribí el programa que muestre la tabla de multiplicar de un número
// ingresado por el usuario. Resolvelo usando FOR.

// Write the program that shows the multiplication table of a number
// entered by the user. Solve it using FOR.

int exercise6(){
    int a, b, c;
    printf("ingrese el numero cuya tabla quiere saber\n");
    scanf("%d", &c);
    for(a=0;a<=9;a++){
        b=c*a;
        printf("%d*%d=%d\t", c, a, b);    
    }
    system("pause>null");
}

// Escribí el programa que muestre en pantalla las tablas de multiplicar del 1 al
// 9 menos la del 3 y la del 7. Resolvelo usando bucles For anidados.

// Write the program that displays the multiplication tables from 1 to 1 on the screen.
// 9 minus 3 and 7. Solve it using nested For loops.

int exercise7(){
    int a, b, c;
    for(a=0;a<=2;a++)
        for(b=0;b<=9;b++)
            printf("%d*%d=%d\t", a, b, a*b);
    for(a=4;a<=6;a++)
        for(b=0;b<=9;b++)
            printf("%d*%d=%d\t", a, b, a*b);
    for(a=8;a<=9;a++)
        for(b=0;b<=9;b++)
            printf("%d*%d=%d\t", a, b, a*b);
    system("pause>null");
}

// Usando bucles FOR, escribí el programa que muestre en pantalla un reloj con
// segundos, minutos y horas.

// Using FOR loops, Write the program to display a clock with
// seconds, minutes and hours.

int exercise8(){
    int a, b, c=0;
    aca:
    for(a=0;a<=24;)
        for(b=0;b<=60;){
            c=c+1;
            if(c==60){
                b=b+1;
                c=0;
            }
            if(b==60){
                a=a+1;
                b=0;
            }
        Sleep(1000);
        if(a==24)goto aca;
        system("cls");
        printf("%d:%d:%d\t", a, b, c);
    }
    system("pause>null");
}

// Idem anterior pero ahora los números deben cambiar de color en cada
// segundo.

// Same as above but now the numbers must change color each time.
// second.

int exercise9(){
    int a, b, menem, c=0;
    aca:
    for(a=0;a<=24;)
        for(b=0;b<=60;){
            c=c+1;
            if(c==60){
                b=b+1;
                c=0;
            }
            if(b==60){
                a=a+1;
                b=0;
            }
            Sleep(1000);
            menem=menem+1;
            if(menem==16)
                menem=0;
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), menem);
            if(a==24)
                goto aca;
            system("cls"); 
            printf("%d:%d:%d\t", a, b, c);
        }
    system("pause>null");
}

// Idem anterior pero ahora que permita setear un tiempo y que al llegar al
// tiempo seteado detenga la cuenta y apague la máquina.

// Same as before but now it allows you to set a time and when you reach the
// set time stop counting and turn off the machine.

int exercise10(){
    int a, b c hs, ms, ss, c=0, t;
    printf("sete� la hora, minuto y segundo en el que quiere que se detenga\n");
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
                    printf("%d:%d:%d\t", a, b, c);
                }
            }
        }
    }
}

// Usando bucles FOR, diseñá el programa que muestre en pantalla un
// cronómetro que al presionar una tecla comience a contar o se detenga según
// corresponda.

// Using FOR loops, design the program that displays a
// stopwatch that when you press a key starts counting or stops depending on
// correspond.

int exercise11(){
    int a, b, g, h, c=0;
    char f;
    printf("toque espacio para comenzar o pausar el programa");
    scanf("%c", &f);
    if(f==' ')
        aca:
    for(a=0;a<=24;){
        for(b=0;b<=60;){
            if(b==60){
                a=a+1;
                b=0;
            }
            for(c=0;c<=60;c++){
                if(kbhit()){
                    g=getch();
                    while(kbhit==0);
                    h=getch();
                }
                if(c==60){
                    b=b+1;
                    c=0;
                }
                Sleep(1000);
                if(a==24)
                    goto aca;
                system("cls");
                printf("%d:%d:%d\t", a, b, c);
            }
        }
    }
    system("pause>null");
}

// Idem anterior pero comenzará a contar al presionar la tecla “c y parará al
// presionar “f”.

// Same as above but it will start counting when you press the “c” key and stop when
// press “f”.

int exercise12(){
    int a, b, g, c=0;
    char f, h = 0;
    printf("toque c para comenzar o f pausar el programa");
    scanf("%c", &f);
    if(f=='c')
        aca:
    for(a=0;a<=24;){
        for(b=0;b<=60;){
            if(b==60){
                a=a+1;
                b=0;
            }
            for(c=0;c<=60;c++){
                if(kbhit()){
                    g=getch();
                    if(g=='f'){
                        wh:
                        while(kbhit()==0);
                        h=getch();
                        if(h=='c')
                            {continue;}
                        else
                            {goto wh;}
                    }
                }
                                        
                if(c==60){
                    b=b+1;
                    c=0;
                }
                Sleep(1000);
                if(a==24)goto aca;
                system("cls");
                            
                printf("%d:%d:%d\t", a, b, c);
            }
        }
    }
    system("pause>null");
}

// Usando bucles FOR, realizá un programa que muestre una salida de 20
// líneas de este tipo:

// Using FOR loops, make a program that outputs 20
// lines like this:

// 1
// 2
// 1 2 3
// 1 2 3 4

int exercise13(){
    int a,c, b;
    for(a=1;a<=20; a++){
        printf("\n");
        for(b=1;b<=a;b++){
            printf("%d", b);
        }
    }        
    system("pause>null");      
}

// Creá el programa en el que se introduce un número entero y se crea una
// pirámide de asteriscos. Por ejemplo si se introduce el 6, el resultado sería:

// Create the program in which you enter an integer and create a
// pyramid of asterisks. For example, if 6 is entered, the result would be:

// *
// ***
// *****
// *******
// *********
// ***********

int exercise14(){
    int a, b, c=0, d;
    printf("ingrese la cantidad de renglones que va a tener la piramide\n");
    scanf("%d", &d);
    for(a=1;a<=d; a++){
        printf("\n");
        c++;
        for(b=1;b<=c;b++){
            printf("*");
        }
    }    
    system("pause>null"); 
}

// Creá un programa que lea un número entero y a partir de él cree un cuadrado
// de asteriscos con ese tamaño. Los asteriscos sólo se verán en el borde del
// cuadrado, no en el interior.

// Create a program that reads an integer and creates a square from it
// of asterisks with that size. The asterisks will only be seen on the edge of the
// square, not inside.

int exercise15(){
    int a, b, c, d, e;
    printf("ingrese la cantidad de asteriscos que va a tener el cuadrado en cada lado\n");
    scanf("%d", &d);
    for(a=1;a<=d; a++){
        printf("*");
    }
    printf("\n");
    c=d-2;
    for(e=1;e<=c;e++){
        printf("*");
        for(b=1;b<=c;b++){
            printf(" ");   
        }
        printf("*\n");                 
    }
    for(a=1;a<=d; a++){
        printf("*");
    }
    system("pause>null"); 
}