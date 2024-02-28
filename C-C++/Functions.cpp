#include"cambio de base.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Realizá el programa que calcule el cuadrado de un número ingresado por el usuario. Lo
// tiene que hacer creando la función “cuadrado”.

// Create the program that calculates the square of a number entered by the user. It
// has to do by creating the “cuadrado” function.

int cuadrado(int f){
    f=f*f;
    return f;
}

// Escribí el programa que sume dos números reales ingresados por el usuario y muestre
// el resultado. La suma la tiene que hacer a través de la función “suma”.

// Write the program that adds two real numbers entered by the user and displays
// the result. The sum must be done through the “suma” function.

int suma(int f, int c){
    f=f+c;
    return f;
}

// Realizá el programa que muestre el mayor de dos números ingresados por el usuario.
// Hacelo creando la función “mayor”.

// Create the program that shows the greater of two numbers entered by the user.
// Do this by creating the “mayor” function.

int mayor(int f, int c){
    if(f<c)
        f=c;
    return f;
}

// Ídem anterior pero debe dar a elegir si se quiere mostrar el menor o el mayor.
// Same as above but you must choose whether you want to show the smallest or the largest.

int mayor2(int f, int g, int k){
    int j, h;
    if(f<g){
        h=g;
        j=f;
    }
    else{
        h=f;
        j=g;
    }
    if(k==1)
        return j;
    if(k==2)
        return h;
}

// Escribí el programa que calcule la potencia de un número entero. Tiene que pedir la base
// y el exponente y mostrar el resultado. Hacelo creando la función potencia.

// Write the program that calculates the power of an integer. You have to order the base
// and the exponent and show the result. Do this by creating the power function.

int potencia(int f, int g){
    int c, d;
    d=f;
    for(c=1;c<g;c++)
        d=d*f;
    return d;
}

// Creá una función que se llame “signo”, que reciba un número real y devuelva un número
// entero con los siguientes valores: 1 si el número es positivo, 0 si es cero y -1 si es
// negativo.

// Create a function called “signo”, which receives a real number and returns a number
// integer with the following values: 1 if the number is positive, 0 if it is zero and -1 if it is
// negative.

int signo(float f){
    int d;
    if(f==0)
        d=0;
    else{
        if(f<0)
            d=-1;
        else 
            d=1;
    }
    return d;
}

// Creá la función que devuelva la última letra de una cadena de texto ingresada por el
// usuario.

// Create the function that returns the last letter of a text string entered by the
// user.

char letra(char f[20]){
    int c=20;
    do{
        c--; 
    }while(f[c]==' ');
    c--;
    return f[c];
}

// Creá una función que reciba una cadena y una letra y devuelva la cantidad de veces que
// esa letra aparece en la cadena.

// Create a function that takes a string and a letter and returns the number of times it
// that letter appears in the string.

int veces(char f[20], char d){
    int c, g=0;
    for(c=0;c<20;c++){
        if(f[c]==d) 
            g++;
    }
    return g;
}

// Creá una función que reciba un número cualquiera y que devuelva como resultado la
// suma de todos sus dígitos.

// Create a function that receives any number and returns as a result the
// sum of all its digits.

int suma2(int f){
    int b, x, k[100], r=0, l;
    for(b=0;b<100;b++)
        k[b]=0;
    for(b=99;b>-1;b--){
        k[b]=f%10;
        f=f/10;
    }
    for(b=0;b<100;b++)
        r=r+k[b];
    return r;
}

// Escribí el programa que calcule el perímetro y la superficie de un cuadrado y un
// rectángulo. Resolvelo con una función para cada operación: una que calcule el perímetro
// del cuadrado, otra que calcule la superficie, etc.

// Write the program that calculates the perimeter and surface area of ​​a square and a
// rectangle. Solve it with a function for each operation: one that calculates the perimeter
// of the square, another that calculates the surface, etc.

int pc(int e){
    e=e*4;
}

int ac(int e){
    e=e*e;
}

int pr(int b, int h){
    b=b*2+h*2;
}

int ar(int b, int h){
    b=b*h;
}
              
int perimeter(){
    char a;
    int c, d;
    printf("si se va a trabajar con un rectangulo presione r, si es un cuadrado presione c\n");
    scanf("%c", &a);
    if(a=='r'){
        printf("ingrese la base y la altura del rectangulo\n");
        scanf("%d", &d);
        scanf("%d", &c);
        printf("el perimetro es %d\n", pr(d, c));
        printf("el area es %d\n", ar(d, c));
    }
    if(a=='c'){
        printf("ingrese un lado del cuadrado\n");
        scanf("%d", &d);
        printf("el perimetro es %d\n", pc(d));
        printf("el area es %d\n", ac(d));
    }
    system("pause>null");
}

// Creá un programa que mediante 3 funciones (menor, mayor y promediy que a pedido
// del usuario, devuelva el mayor, el menor o el promedio de los valores de un arreglo de
// 20 números decimales.

// Create a program that, through 3 functions (lower, higher and average, and that on demand
// user, returns the largest, smallest, or average of the values ​​in an array of
// 20 decimal numbers.

int mayor3(){
    int a[20], b, c;
    printf("el arreglo es el siguiente\n");
    for(c=0;c<20;c++)
        printf("%d\t", a[c]);
    b=a[0];
    for(c=0;c<20;c++){
        if(b<a[c])b=a[c];
    }
    printf("\n");
    printf("el mayor numero es: %d", b);
}
           
int menor(){
    int e[20], f, g;
    printf("el arreglo es el siguiente\n");
    for(g=0;g<20;g++)
        printf("%d\t", e[g]);
    f=e[0];
    for(g=0;g<20;g++){
        if(f>e[g])f=e[g];
    }
    printf("\n");
    printf("el menor numero es: %d", f);
}
           
int promedio(){
    int h[20], i=0, j;
    printf("el arreglo es el siguiente\n");
    for(j=0;j<20;j++)
        printf("%d\t", h[j]);
    for(j=0;j<20;j++){
        i=i+h[j];
    }
    i=i/20;
    printf("\n");
    printf("el promedio es: %d", i);
}    

// Creá la función que reciba como parámetro un número entero y que escriba la tabla de
// multiplicar correspondiente a dicho número.

// Create the function that receives an integer as a parameter and writes the table of
// multiply corresponding to said number.

int t(int b){
    int c;
    for(c=0;c<10;c++)
        printf("%d\t", b*c);
}   

// Escribí el programa que simule el tiro de un dado. Lo hará creando una función llamada
// “dado”. Cada vez que el programa principal invoque a esta función debe generar un
// número aleatorio entre 1 y 6.

// Write the program that simulates the roll of a dice. You will do this by creating a function called
// “dado”. Every time the main program calls this function it must generate a
// random number between 1 and 6.

int dado(){
    int a;
    srand(time(0));
    a=1+rand()%(7-1);
}  

// Creá una función que reciba una letra y un número y dibuje un triángulo invertido
// formado por esa letra. El ancho de la base de ese triángulo está indicado por el número
// ingresado. El dibujo sería este si el número ingresado fuera 3 y la letra fuera A:

// Create a function that takes a letter and a number and draws an inverted triangle
// formed by that letter. The width of the base of that triangle is indicated by the number
// joined. The drawing would be this if the number entered was 3 and the letter was A:

// AAA
// AA
// A

int t(int c, char d){
    int e, f;
    printf("\n");
    for(e=c;e>0;e--){
        for(f=e;f>0;f--)
            printf("%c", d);
        printf("\n");
    }
}  

// Generá el programa que genere 100 números aleatorios y luego los muestre ordenados
// de menor a mayor.
// Lo tiene que hacer con la función ordenar y luego mostrar el resultado con la función
// mostrar.

// Generate the program that generates 100 random numbers and then displays them in order
// from smallest to largest.
// You have to do it with the sort function and then show the result with the function
// show.

int h[100];

int ordenar(){
    int b, c, d, e;
    for(e=0;e<99;e++){
        c=1;
        for(b=0;b<99;b++){
            if(h[b]>h[c]){
                d=h[b];
                h[b]=h[c];
                h[c]=d;
            }
            c++;
        }
    }
}

int mostrar(){
    int b;
    for(b=0;b<100;b++){
        printf("%d\t", h[b]);
    }
}

int exercise15(){
    int b;
    srand(time(0));
    for(b=0;b<100;b++){
        h[b]=1+rand()%(500-1);
    }
    ordenar();
    mostrar();
    system("pause>null");
}

// Escribí el programa que simule una calculadora. Tiene que pedir los números y mostrar
// el resultado en pantalla. Cada operación matemática la tiene que realizar con funciones.
// Los operandos se guardan en variables globales y los resultados en variables locales. Se
// puede usar la librería “math.h”

// Write the program that simulates a calculator. You have to ask for the numbers and show
// the result on the screen. Each mathematical operation must be performed with functions.
// The operands are stored in global variables and the results in local variables. HE
// You can use the “math.h” library

int a, c;

int suma16(){
    printf("%d", a+c);
}
    
int resta16(){
    printf("%d", a-c);
}
    
int mul16(){
    printf("%d", a*c);
}
    
int div16(){
    float b=a, e=c;
    if((a%c)==0)
        printf("%d", a/c);
    else 
        printf("%f", b/e);
}

int exercise16(){
    char b;
    printf("ingrese la operacion matematica a realizar, teniendo en cuenta que luego de ingresar cada numero y la operacion en si debe presionar enter\n");
    scanf("%d", &a);
    fflush(stdin);
    scanf("%c", &b);
    fflush(stdin);
    scanf("%d", &c);
    printf("\n");
    if(b=='+')
        suma();
    if(b=='-')
        resta();
    if(b=='*')
        mul();
    if(b=='/')
        div();
    system("pause>null");
}

// Escribí el programa que convierta un número decimal ingresado por el usuario a octal,
// hexa y binario. Resolvelo usando una función para cada operación.
// Estas funciones deben estar en una librería que tenés que crear llamada
// “cambio_de_base” y el programa la debe invocar.

// Write the program that converts a decimal number entered by the user to octal,
// hexa and binary. Solve it using a function for each operation.
// These functions must be in a library that you have to create called
// “base_change” and the program must invoke it.

int exercise17(){
    int a;
    printf("ingrese un numero\n");
    scanf("%d", &a);
    binario(a);
    hexa(a);
    octal(a);
    system("pause>null");
}

// Creá la función que pida ingresar dos números (entre 0 y 25y que muestre las
// siguientes operaciones lógicas entre ellos: OR, AND, EXOR y NOT. La operación será
// seleccionada a través de un menú de opciones en pantalla. Tenés que hacer una función
// para pedir los números, otra para el menú y una para cada una de las operaciones. Estas
// funciones deben estar en una librería creada por vos y el programa la debe invocar. Los
// resultados se deben mostrar en binario y para ello tenés que incluir la librería
// cambio_de_base.

// Create the function that asks you to enter two numbers (between 0 and 25) and that shows the
// following logical operations among them: OR, AND, EXOR and NOT. The operation will be
// selected through an on-screen options menu. You have to do a function
// to ask for the numbers, another for the menu and one for each of the operations. Are
// Functions must be in a library created by you and the program must invoke it. The
// Results must be shown in binary and for this you have to include the library
// cambio_de_base.

int a, b;

int num(){    
    printf("ingrese los numeros\n");
    scanf("%d", &a);
    fflush(stdin);
    scanf("%d", &b);
    fflush(stdin);
}
           
int menu(){
    int a;
    printf("ingrese la operacion a ejecutar\n1-OR\n2-AND\n3-EXOR\n4-NOT del primer numero\n5-NOT del segundo numero\n");
    scanf("%d", &a);
    return a;
}
           
int or1(){
    int c;
    c=a|b;
    return c;
}

int and1(){
    int c;
    c=a&b;
    return c;
}

int exor(){
    int c;
    c=a^b;
    return c;
}

int not1(){
    int c[20], d, e;
    for(d=0;d<20;d++)c[d]=0;
        d=0;
    do{
        c[d]=a%2;
        a=a/2;
        d++;
    }while(a!=0);
    for(d=0;d<20;d++)
        c[d]=!c[d];
    for(d=0;d<20;d++)
        if(c[d]==1)
            e=d;
    for(d=e;d>=0;d--)
        printf("%d", c[d]);
    printf("\n");
}
           
int not2(){
    int c[20], d, e;
    for(d=0;d<20;d++)c[d]=0;
        d=0;
    do{
        c[d]=b%2;
        b=b/2;
        d++;
    }while(b!=0);
    for(d=0;d<20;d++)
        c[d]=!c[d];
    for(d=0;d<20;d++)
        if(c[d]==1)
            e=d;
    for(d=e;d>=0;d--)
        printf("%d", c[d]);
    printf("\n");
}
           
int exercise18(){
    int c;
    num();
    switch(menu()){
        case 1:
            c=or1();
            binario(c);
            break;
        case 2:
            c=and1();
            binario(c);
            break;
        case 3:
            c=exor();
            binario(c);
            break;
        case 4:
            not1();
            break;
        case 5:
            not2();
            break;
    }
    system("pause>null");
}

// Escribí la función para obtener un bit concreto de un número ingresado por el usuario.
// Pedirá ingresar primero el número (entre 0 y 25y luego otro número correspondiente
// al orden del bit en el byte (entre 0 y 7). Resolvelo usando desplazamientos sucesivos de
// los bits. Tenés que mostrar en pantalla los bits sin desplazar primero y luego los bits
// desplazados. Usá la librería cambio_de_base.

// Write the function to get a specific bit of a number entered by the user.
// It will ask you to enter the number first (between 0 and 25 and then another corresponding number
// to the order of the bit in the byte (between 0 and 7). Solve it using successive displacements of
// the bits. You have to display the bits on the screen without moving first and then the bits
// displaced. Use the base_change library.

int mask(int a,int b){
    int c,d;
    c=a>>b;
    d=c&1;
    printf("El valor del bit es:%d",d);
} 