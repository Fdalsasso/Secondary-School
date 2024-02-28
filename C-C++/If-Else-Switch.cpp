#include <stdio.h>
#include <stdlib.h>

// "If"

// Creá un programa que pida al usuario ingresar un número y diga si es positivo.
// Create a program that asks the user to enter a number and tells if it is positive.

void main(){
    int num;
    printf("ingrese numero");
    scanf("%d", &num);
    if (num<0) 
        printf("el numero es negativo");
    if(num>0) 
        printf("el numero es positivo");
    system("pause>null");
}

// Ídem anterior pero que diga si el número ingresado es cero.
// Same as above but it says if the number entered is zero.

void main(){
    int num;
    printf("ingrese numero");
    scanf("%d", &num);
    if (num<0) 
        printf("el numero es negativo");
    if(num>0) 
        printf("el numero es positivo");
    if (num==0) 
        printf("el numero es cero");
    system("pause>null");
}

// Creá un programa que pida al usuario ingresar un número entero y diga si es par.
// Create a program that asks the user to enter an integer and tells if it is even.

void main(){
    int num;
    printf ("ingrese numero");
    scanf ("%d", &num);
    if (num%2==0) 
        printf("el numero es par");
    system("pause>null");
}

// Escribí un programa que pida al usuario dos números enteros y diga cuál es el mayor de ellos.
// Write a program that asks the user for two integers and tells which is the largest of them.

void main(){
    int X;
    int Y;
    printf("ingrese numero");
    scanf("%d", &X);
    printf("ingrese numero");
    scanf("%d", &Y);
    if (X>Y) 
        printf ("el primer numero ingresado es mayor");
    if (X<Y) 
        printf ("el segundo numero ingresado es mayor");
    system ("pause>null");
}

// Realizá un programa que multiplique dos números reales de la siguiente forma: pedirá al usuario 
// un primer número y si es cero escribirá en pantalla: “El producto de cualquier número por 0 es 0”. 
// Si se ingresa un número distinto de cero, se pedirá un segundo número y se mostrará el producto de ambos.

// Create a program that multiplies two real numbers in the following way: it will ask the user
// a first number and if it is zero it will write on the screen: “The product of any number and 0 is 0”.
// If a number other than zero is entered, a second number will be requested and the product of both 
// will be displayed.

void main(){
    int x;
    int y;
    int z;
    printf ("ingrese numero");
    scanf ("%d", &x);
    if (x==0)
        printf ("El producto de cualquier numero por 0 es 0");
    if(x!=0){
        printf ("ingrese numero");
        scanf ("%d", &y);
        z=x*y;
        printf ("el resultado es %d", z);
    }
    system ("pause>null");
}

// "If – else"

// Creá un programa que diga si un número ingresado es positivo o negativo.
// Create a program that tells whether an entered number is positive or negative.

void main(){
    int x;
    printf("ingrese numero");
    scanf("%d", &x);
    if (x>0)
        printf("el numero es positivo");
    else 
        printf("el numero es negativo");
    system("pause>null");
}

// Ídem anterior pero que diga si es negativo, positivo ó cero.
// Same as above but say if it is negative, positive or zero.

void main(){
    int x;
    printf("ingrese numero");
    scanf("%d", &x);
    if (x<0)
        printf("el numero es negativo");
    else{
        if(x==0) 
            printf("el numero es cero");
        else 
            printf("el numero es positivo");
    }
    system ("pause>null");
}

// Realizá un programa que pida al usuario dos números y diga si: “Uno de los números es positivo”, 
// “Los dos números son positivos” ó “Ninguno de los dos números es positivo. Resolvelo usando operadores lógicos.

// Make a program that asks the user for two numbers and says if: “One of the numbers is positive”,
// “Both numbers are positive” or “Neither of the two numbers is positive.” Solve it using logical operators.

void main(){
    int x;
    int y;
    printf("ingrese numero");
    scanf("%d", &x);
    printf("ingrese numero");
    scanf("%d", &y);
    if(x==y){
        if(x>0)
            printf("los 2 numeros son positivos");
        else
            printf("ninguno de los numeros es positivo");
    }
    else{
        if(x>0)
            printf("el primer numero es positivo");
        else
            printf("el segundo numero es positivo");
    }
    system("pause>null");
}

// Creá el programa que pida al usuario tres números reales y muestre cuál es el mayor de ellos.
// Create the program that asks the user for three real numbers and shows which is the largest of them.

void main(){
    int x;
    int y;
    int z;
    printf("ingrese variable x");
    scanf("%i", &x);
    printf("ingrese variable y");
    scanf("%i", &y);
    printf("ingrese variable z");
    scanf("%i", &z);
    if(x==y){
        if(x==z)
            printf("los 3 numeros son iguales");
        else {
            if(x<z)
                printf("z es mayor");
            else 
                printf("x e y son los mayores");
        }
    } 
    else {
        if(x==z){
            if(x<y)
                printf("y es el mayor");
            else
                printf("x y z son los mayores");
        }
        else{
            if(z==y){
                if(x<z)
                    printf("z e y son los mayores");
                else
                    printf("x es el mayor");
            }
            else{
                if(x<z){
                    if(z<y)
                        printf("y es el mayor");
                    else
                        printf("z es el mayor");
                }
                else{
                    if(x<y)
                        printf("y es el mayor");
                    else
                        printf("x es el mayor");
                }
            }
        }
    }
    system("pause>null");
}

// Escribí el programa que pida ingresar una letra y diga si se trata de una vocal.
// I wrote the program that asks you to enter a letter and says if it is a vowel.

void main(){
    printf("introducir letra");
    char L1=getchar();
    if ((L1=='a')||(L1=='e')||(L1=='i')||(L1=='o')||(L1=='u')) 
        printf("es una vocal");
    system("pause>null");
}

// Realizá un programa que pida presionar una tecla y diga si se trata de un espacio, un número o ninguna 
// de las dos cosas.

// Make a program that asks you to press a key and says if it is a space, a number or neither
// of both things.

void main(){
    printf("introducir una tecla del taclado");
    char L1=getchar();
    if (L1==' ') 
        printf("es un espacio");
    else{
        if((L1=='1')||(L1=='2')||(L1=='3')||(L1=='4')||(L1=='5')||(L1=='6')||(L1=='7')||(L1=='8')||(L1=='9')||(L1=='0'))
            printf("es un numero");
        else
            printf("no es ni un numero ni un espacio");
    }
    system("pause>null");   
}

// Creá un programa que dé al usuario tres oportunidades para acertar un número del 1 al 100. Debe avisar 
// si el número ingresado está por encima o por debajo del número a adivinar.

// Create a program that gives the user three chances to guess a number from 1 to 100. It must prompt
// whether the number entered is above or below the number to be guessed.

void main(){
    int a=7;
    int b;
    int c=0;
    while(a!=b){
        printf("ingrese un numero del 1 al 100\n");
        scanf("%d", &b);
    if(a==b)
        printf("acertaste");
    else{
        if(b<a)
            printf("el numero ingresado es menor\n");
        else
            printf("el numero ingresado es mayor\n");
    }
    c=c+1;
    if(c==3) 
        goto aca;
    }
    aca: 
    system("pause>null");
}

// Escribí un programa que cuente y muestre en pantalla la cantidad de veces que presionaron una vocal, 
// un número, cualquier otra tecla y todas las teclas.

// Write a program that counts and displays on the screen the number of times they pressed a vowel,
// a number, any other key and all keys.

void main(){
    int v=0,num=0, otra=0, tot=0;
    char in;
    printf("toque las teclas que quiera y luego espacio para finalizar\n");
    while(in!=' '){ 
        scanf("%c", &in);
        tot=tot+1;
        if((in=='1')||(in=='2')||(in=='3')||(in=='4')||(in=='5')||(in=='6')||(in=='7')||(in=='8')||(in=='9')||(in=='0'))
            num=num+1;
        else{
            if((in=='a')||(in=='e')||(in=='i')||(in=='o')||(in=='u'))
                v=v+1;
            else
            otra=otra+1;
        }
    }
    printf("las vocales se precionaron %d veces, los numeros %d veces, las otras %d veces y se tocaron todas las teclas %d veces\nel programa cuenta cuando tocas enter como otra tecla", v, num, otra, tot);
    system("pause>null");
}

// "Switch"

// Escribí el programa que solicite el ingreso de dos números enteros y que luego permita seleccionar, 
// por medio de un menú, si se sumarán, restarán, dividirán o multiplicarán y muestre el resultado por 
// pantalla. Resolvelo usando la sentencia Switch.

// Write the program that requests the entry of two integers and then allows you to select,
// through a menu, if they will be added, subtracted, divided or multiplied and show the result by
// screen. Solve it using the Switch statement.

void main(){
    int x;
    int y;
    int z;
    char p;
    printf("Pulse\na para sumar\nb para restar el primer numero y el segundo\nc para multiplicarlos\nd para dividir el primero por el segundo\ne para restar el segundo y el primeron\nf para dividir el segundo por el primero\n");
    scanf("%c", & p);
    switch (p){
        case 'a':
            printf("escriba 2 numeros\n");
            scanf("%d", &x);
            scanf("%d", &y);
            z=x+y;
            printf("%d", z);
            system("pause>null");
            break;
        case 'b':
            printf("escriba 2 numeros\n");
            scanf("%d", &x);
            scanf("%d", &y);
            z=x-y;
            printf("%d", z);
            system("pause>null"); 
            break;
        case 'c':
            printf("escriba 2 numeros\n");
            scanf("%d", &x);
            scanf("%d", &y);
            z=x*y;
            printf("%d", z);
            system("pause>null");
            break;
        case 'd':
            printf("escriba 2 numeros\n");
            scanf("%d", &x);
            scanf("%d", &y);
            z=x/y;
            printf("%d", z);
            system("pause>null");
            break;
        case 'e':
            printf("escriba 2 numeros\n");
            scanf("%d", &x);
            scanf("%d", &y);
            z=y-x;
            printf("%d", z);
            system("pause>null");
            break;
        case 'f':
            printf("escriba 2 numeros\n");
            scanf("%d", &x);
            scanf("%d", &y);
            z=y/x;
            printf("%d", z);
            system("pause>null");
            break; 
    }
}

// Usando switch, realizá el programa que pida presionar una tecla y diga si se trata de un espacio, 
// un número o ninguna de las dos cosas.

// Using switch, make the program that asks you to press a key and say if it is a space,
// a number or neither.

void main(){
    char p;
    printf("toque alguna tecla\n");
    scanf("%c", &p);
    switch(p){
        case '1':  
        case '2':  
        case '3': 
        case '4':  
        case '5':  
        case '6': 
        case '7': 
        case '8': 
        case '9': 
        case '0':  
            printf("es un numero");
            break;
        case ' ':  
            printf("es un espacio");
            break;
        default:  
            printf("es otra cosa");
    }
    system("pause>null");
}

// Escribí un programa que cuente la cantidad de veces que presionaron una vocal, un número, y cualquier 
// otra tecla. Resolvelo utilizando la sentencia SWITCH.

// Write a program that counts the number of times they pressed a vowel, a number, and any
// another key. Solve it using the SWITCH statement.

void main(){
    char p;
    int vocal=0, num=0, otra=0;
    printf("precione las teclas que quiera y espacio cuando quiera terminar todo\n");
    aca:
    fflush(stdin);
    scanf("%c", &p);
    switch(p){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': 
            vocal=vocal+1;
            goto aca;
            break;     
        case '1':
        case '2':
        case '3':
        case '4':
        case '5': 
        case '6':
        case '7':
        case '8':
        case '9':
        case '0': 
            num=num+1;
            goto aca;
            break;  
        case ' ': 
            break;
        default:
            otra=otra+1;
            goto aca;
            break;
    }
    printf("las vocales se tocaron %d veces, los numeros %d veces y lo demas %d veces", vocal, num, otra);
    system("pause>null");
}

// Utilizando la sentencia switch, hacé el programa que pida al usuario un número de una cifra y muestre 
// el color correspondiente a dicho número según el código de colores de las resistencias.

// Using the switch statement, have the program ask the user for a one-digit number and display
// the color corresponding to said number according to the color code of the resistors.

void main(){
    char p;
    printf("escriba un numero\n");
    scanf("%c", &p);
    switch(p){
        case '1':
            printf("marron");
            break;
        case '2':
            printf("rojo");
            break;
        case '3':
            printf("naranja");
            break;
        case '4':
            printf("amarillo");
            break;
        case '5': 
            printf("verde");
            break;
        case '6':
            printf("azul");
            break;
        case '7':
            printf("violeta");
            break;
        case '8':
            printf("gris");
            break;
        case '9':
            printf("blanco");
            break;
        case '0':
            printf("negro");
            break;
    }
    system("pause>null");
}

// Usando la sentencia SWITCH escribí el programa que cuente y muestre la cantidad de teclas presionadas 
// incluyendo las de números. Si se presiona una vocal, que decremente el valor de una variable inicializada 
// en 30 y al llegar la misma a cero no debe dejar presionar ninguna tecla más, avisando con un mensaje que se 
// debe reiniciar la aplicación.

// Using the SWITCH statement I wrote the program that counts and displays the number of keys pressed
// including those of numbers. If a vowel is pressed, it decrements the value of an initialized variable
// at 30 and when it reaches zero you should not let any more keys be pressed, warning you with a message that
// you must restart the application.

void main(){
    int vocal=0, num=0, tot=0, f=30;
    char letra;
    printf("presione alguna tecla\n");
    while(f!=0){
        fflush(stdin);
        scanf("%c", &letra);
        switch(letra){
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
            case '0': 
                num=num+1;
                break;
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u': 
                vocal=vocal+1;
                f=f-1;
                break;
            default: 
                tot=tot+1;
                break;
        }
    }
    printf("Se precionaron %d veces los numeros, %d veces las vocales y %d veces otra tecla\n", num, vocal, tot);
    printf("Debe reiniciar el programa");
    system("pause>null");
}

// Usando SWITCH realizá un programa que simule el soft de acceso de una cerradura codificada. Debe dar al 
// usuario cuatro oportunidades de ingresar una clave de tres dígitos. Si no se ingresa el código correcto en 
// dichas oportunidades debe imprimir: “El código ingresado no es el correcto. Acceso denegado. Reinicie para 
// volver a intentar.”

// Using SWITCH, create a program that simulates the access software of a coded lock. Must give to
// user four opportunities to enter a three-digit password. If the correct code is not entered in
// These opportunities must print: “The code entered is not correct. Access denied. Reboot to
// try again."

void main(){
    int f=0; 
    int con;
    printf("ingrese la contrasenia\n");
    while(f!=4){
        scanf("%d", &con);
        switch(con){
            case 123: 
                printf("acceso concedido\n"); 
                goto aca;
                break;
        }
        f=f+1;
        printf("ingreso mal la contrasenia, siga intentando\n");
    }
    aca:
    system("pause>null");
}