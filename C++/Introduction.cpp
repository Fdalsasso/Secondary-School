#include <stdio.h>
#include <stdlib.h>

// Realizá un programa que muestre en pantalla: “Este es mi primer programa”.
// Make a program that shows on the screen: “This is my first program.”

int exercise1(){
    printf("Este es mi primer programa");
    return 0;
}

// Escribí el programa que muestre en pantalla tres frases en tres renglones distintos.
// Write the program that displays three phrases on the screen in three different lines.

void exercise2(){
    printf("Hola Gerardo.\n Hola Alumno.\n Que feo dia nublado");
    getchar();
}

// Ídem anterior pero ahora que genere un beep luego de imprimir la última frase.
// Same as above but now it generates a beep after printing the last sentence.

void exercise3(){
    printf("Hola Gerardo.\n Hola Alumno.\n Que feo dia nublado\a");
    getchar();
}

// Ídem anterior y que en otra línea pida que presionen Enter para terminar.
// Same as above and on another line ask them to press Enter to finish.

void exercise4(){
    printf("Hola Gerardo.\nHola Alumno.\nQue feo dia nublado\a");
    system("pause>n");
}

// Realizá el programa que te muestre en pantalla cuántos minutos existen en 24 horas.
// Run the program that shows you on the screen how many minutes there are in 24 hours.

void exercise5(){
    int D;
    D=60*24;
    printf("La cantidad de minutos en 24 horas es:%d", D);
    getchar();
}

// Escribí el programa que pida dos números enteros y muestre su suma en pantalla.
// Write the program that asks for two integers and displays their sum on the screen.

void exercise6(){
    int D;
    int B;
    int A;
    D=A+B;
    printf("%d", D);
    getchar();
}

// Escribí el programa que pida los valores de Intensidad de corriente y los de resistencia 
// para que termine mostrando el valor de la tensión en pantalla. Los valores tienen que ser números reales.

// Write the program that requests the current intensity and resistance values ​​so that it ends up 
// showing the voltage value on the screen. The values ​​must be real numbers.

void exercise7(){
    int D;
    float B;
    int A;

    printf("ingrese Resistencia");   
    scanf("%d", &A);
    printf("ingrese corriente");   
    scanf("%f", &B);
    D=A*B;
    printf("%d", D);
    system("pause>n");
}

// Hacé el programa que pida los valores de tres resistencias (en Ohms) conectadas en paralelo 
// y muestre en pantalla el valor de la resistencia equivalente.

// Make the program that requests the values ​​of three resistors (in Ohms) connected in parallel 
// and displays the value of the equivalent resistance on the screen.

void exercise8(){
    int D;
    int F;
    int G;
    int R;
    float P;
    printf("ingrese resistencia1");   
    scanf("%d", &D);
    printf("ingrese resistencia2"); 
    scanf("%d", &F);
    printf("ingrese resistencia3"); 
    scanf("%d", &G);
    P=(1/F)+(1/G)+(1/D);
    R=1/P;
    printf("la resistencia equivalente es: %d", R);
    system("pause>n");
}

// Creá un programa que pida ingresar el valor de la tensión de fuente y los valores de las 
// resistencias de un divisor resistivo simple de 2 resistores y que muestre la caída de tensión 
// en cada uno de ellos.

// Create a program that asks you to enter the value of the source voltage and the values ​​of the 
// resistances of a simple resistive divider of 2 resistors and that shows the voltage drop in each of them.

void exercise9(){
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
