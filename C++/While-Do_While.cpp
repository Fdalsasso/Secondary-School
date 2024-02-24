#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// While

// Escribí el programa que muestre en pantalla los números del 1 al 1000 usando while.
// Write the program that displays the numbers from 1 to 1000 on the screen using while.

void exercise1(){
    int a=0;
    while (a<1000){
        a=a+1;
        printf("%d\t", a);           
    }
    system("pause");
}

// Realizá el programa que pida al usuario que ingrese su contraseña numérica de 4
// dígitos y que termine cuando ingresa la contraseña correcta.

// Create the program that asks the user to enter their 4-number password.
// digits and ends when you enter the correct password.

void exercise2(){
    int a;
    printf("ingrese la contrase�a\n");
    scanf("%d", &a);
    while (a!=1234){
        printf("ingrese bien la contrase�a\n");
        scanf("%d", &a);             
    }
    printf("acceso concedido");
    system("pause>null");
}

// Utilizando la sentencia while, escribí el programa que vaya sumando los números
// ingresados por el usuario y vaya mostrando el resultado en pantalla. El programa tiene
// que terminar cuando el usuario ingresa un número negativo.

// Using the while statement, I wrote the program that adds the numbers
// entered by the user and display the result on the screen. The program has
// It ends when the user enters a negative number.

void exercise3(){
    int a, b;
    printf("ingrese los numeros que vaya a sumar\n");
    scanf("%d", &a);
    while (b>-1){
        scanf("%d", &b);
        a=a+b;
        printf("%d\n", a);
    }
    system("pause>null");
}

// Escribí el programa que muestre en pantalla todos los múltiplos de 2 desde un número
// ingresado por el usuario hasta un número también ingresado por el usuario. Resolvelo
// usando while.

// Write the program that displays all multiples of 2 from a number on the screen
// entered by the user up to a number also entered by the user. Solve it
// using while.

void exercise4(){
    int a, b;
    printf("ingrese el numero base\n");
    scanf("%d", &a);
    printf("ingrese el numero finalizador\n");
    scanf("%d", &b);
    while(a<b){
        a=a+2;
        printf("%d\t", a);
    }
    system("pause>null");
}

// Usando while, escribí el programa que muestre en pantalla un reloj con segundos,
// minutos y horas. Debe mostrarla en la parte superior izquierda de la ventana de
// comandos en el siguiente formato: HH:MM:SS.

// Using while, I wrote the program that displays a clock with seconds on the screen,
// minutes and hours. It should be displayed at the top left of the window.
// commands in the following format: HH:MM:SS.

void exercise5(){
    fa:
    int hh=0, mm=0, ss=0;
    while(hh!=24){
        printf("%d:%d:%d\n", hh, mm, ss);
        ss=ss+1;
        if(ss==60){
            mm=mm+1;
            ss=0;
        }
        if(mm==60){
            hh=hh+1;
            mm=0;
        }
        Sleep(1000);
        system("cls");
    }
    goto fa;
    system("pause>null");
}

// Creá un programa que calcule y muestre en pantalla cuántas cifras tiene un número
// entero positivo. Resolvelo utilizando while.

// Create a program that calculates and displays on the screen how many digits a number has
// positive integer. Solve it using while.

void exercise6(){
    int a, b;
    int c=-1;
    int d=1;
    printf("ingrese numero\n");
    scanf("%d", &a);
    if (a==0){
        printf("el numero tiene 1 cifra");
    }
    else{
        while (b>0){
            b=a/d;
            d=d*10;
            c=c+1;
        }
        printf("el numero tiene %d cifras", c);
    }
    system("pause>null");
}

// Do – While

// Utilizando la sentencia Do - While, escribí el programa que vaya sumando los números
// ingresados por el usuario y vaya mostrando el resultado en pantalla. El programa tiene
// que terminar cuando el usuario ingresa un número negativo o cero.

// Using the Do - While statement, I wrote the program that adds the numbers
// entered by the user and display the result on the screen. The program has
// It ends when the user enters a negative number or zero.

void exercise7(){
    int a, b=0;
    printf("ingrese los numeros a sumar, de lado izquierdo se muestra el resultado\n");
    do{
        scanf("%d", &a);
        b=b+a;
        printf("%d\t", b);
    }while (a>0);
    system ("pause>null");
}

// Escribí el programa que pida ingresar una clave de tres dígitos. Debe pedirla hasta que
// se acierte. Resolvelo con Do – While.

// Write the program that asks you to enter a three-digit password. You must ask for it until
// is right. Solve it with Do – While.

void exercise8(){
    int a;
    printf("ingrese la contrase�a hasta acertar, esta es de 3 digitos\n");
    do
        scanf("%d", &a);
    while(a!=131);
    printf ("acceso concedido");
    system("pause>null");
}

// Escribí el programa que pida al usuario una contraseña numérica de cuatro dígitos.
// Tiene que dar cuatro oportunidades para acertar y si esto no pasa, debe hacerlo saber
// mediante un mensaje que diga que tiene que reiniciar la aplicación. Resolvelo usando
// Do – While.

// Write the program that prompts the user for a four-digit numeric password.
// You have to give them four chances to get it right and if this doesn't happen, you have to let them know.
// by a message saying that you have to restart the application. Solve it using
// Do – While.

void exercise9(){
    int a, c=0;
    printf("ingrese la contrase�a de 4 digitos, tiene 4 intentos\n");
    do {
        scanf("%d", &a);
        c=c+1;
    }while ((a!=3495)&&(c!=4));
    if(a==3495)
        printf("acceso concedido");
    if(c==4)
        printf("debe reiniciar el programa");
    system("pause>null");
}

// Crea un programa que pida al usuario su código de usuario (un numero entero) y su
// contraseña numérica (otro numero entero), y no le permita seguir hasta que introduzca
// como código 1024 y como contraseña 4567.

// Create a program that asks the user for their user code (an integer) and their
// numeric password (another integer), and do not allow you to continue until you enter
// as code 1024 and as password 4567.

void exercise10(){
    int a, b;
    printf("ingrese su numero de usuario y su contrase�a hasta hacerlo correctamente\n");
    do{
        printf ("ingrese numero de usuario\n");
        scanf ("%d", &a);
        printf ("ingrese contrase�a\n");
        scanf ("%d", &b);             
    }while((a!=1024)||(b!=4567));
    printf("accesos concedido");
    system("pause>null");
}

// Usando Do – While, escribí el programa que muestre en pantalla un reloj con segundos,
// minutos y horas.

// Using Do – While, I wrote the program that displays a clock with seconds on the screen,
// minutes and hours.

void exercise11(){
    fa:
    int hh=0, mm=0, ss=0;
    do{
        printf("%d:%d:%d\n", hh, mm, ss);
        ss=ss+1;
        if(ss==60){
            mm=mm+1;
            ss=0;
        }
        if(mm==60){
            hh=hh+1;
            mm=0;
        }
        Sleep(1000);
        system("cls");
    }while(hh!=24);
    goto fa;
    system("pause>null");
}

// Escribí el programa que sume entre sí los números correspondientes a las cifras de un
// número entero ingresado por el usuario. Si se ingresa el 123, tiene que mostrar:
// 1+2+3=6. Resolvelo usando Do – While.

// I wrote the program that adds together the numbers corresponding to the figures of a
// integer entered by the user. If 123 is entered, it must show:
// 1+2+3=6. Solve it using Do – While.

void exercise12(){
    int a, b;
    int c=0;
    int d=10000;
    printf("ingrese numero\n");
    scanf("%d", &a);
    do{
        b=a/d;
        c=c+b;
        a=a-(b*d);
        d=d/10;
    }while(d>0);
    printf("la suma da como resultdo %d", c);
    system("pause>null");
}