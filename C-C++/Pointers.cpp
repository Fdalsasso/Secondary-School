#include<stdlib.h>
#include<stdio.h>
#include<math.h>

// Escribí el programa que muestre en pantalla el valor de una variable de tipo 
// entera y la dirección que tiene la misma.

// I wrote the program that displays the value of a type variable on the screen
// integer and the address it has.

int exercise1(){
    int a=50;
    int *punt;
    punt=&a;
    printf("La direccion de la variable es: %d\n",punt);
    printf("El valor de la variable es: %d",*punt);
    system("pause>null");
}

// Escribí el programa que cambie el valor de dos variables de tipo entera accediendo 
// a las mismas a través de un puntero. Debe mostrar en pantalla el valor de las variables 
// antes y después de cambiarles el valor.

// I wrote the program that changes the value of two variables of type integer by accessing
// to them through a pointer. It must display the value of the variables on the screen
// before and after changing the value.

int exercise2(){
    int a=40,b=70;
    int *punt;
    
    punt=&a;
    printf("El valor de la variable 1 es: %d\n",*punt);
    punt=&b;
    printf("El valor de la variable 2 es: %d\n\n",*punt);
    punt=&a;
    *punt=a+1;
    printf("Aumento de variables\n\n");
    printf("El nuevo valor de la variable 1 es: %d\n",*punt);
    punt=&b;
    *punt=b+1;
    printf("El nuevo valor de la variable 2 es: %d\n",*punt);
    system("pause>null");
}

// Escribí el programa que intercambie el valor de dos variables entre sí. Realizarlo 
// utilizando punteros.

// I wrote the program that exchanges the value of two variables with each other. Do it
// using pointers.

int exercise3(){
    int a=40, b=70, c;
    int *punt;
    c=a;
    punt=&a;
    printf("El valor de la variable 1 es: %d\n",*punt);
    punt=&b;
    printf("El valor de la variable 2 es: %d\n\n",*punt);
    printf("Intercambio de variables\n\n");
    punt++;
    *punt=b;
    printf("El nuevo valor de la variable 1 es: %d\n",*punt);
    punt--;
    *punt=c;
    printf("El nuevo valor de la variable 2 es: %d\n",*punt);
    system("pause>null");
}

// Escribí el programa que incremente en 1 el valor de los 10 elementos de un vector 
// de enteros. Hacelo a través de un puntero.

// I wrote the program that increments the value of the 10 elements of a vector by 1
// of integers. Do it through a pointer.

int exercise4_a(){
    int a[10]={0,11,22,33,44,55,66,77,88,99}, b;
    int *punt;
    
    for(b=0;b<10;b++){
        punt=&a[b];
        printf("el numero %d es: %d\n", b+1, *punt);
        printf("el nuevo numero %d es: %d\n\n", b+1, (*punt)+1);
    }
    system("pause>null");
}

int exercise4_b(){
    int a[10]={0,11,22,33,44,55,66,77,88,99}, b;
    int *punt;
    
    for(b=0;b<10;b++){
        punt=&a[b];
    }
    for(b=1;b<10;b++){
        *punt--;
    }
    for(b=1;b<11;b++){
        printf("el numero %d es: %d\n", b, *punt);
        printf("el nuevo numero %d es: %d\n\n", b, (*punt)+1);
        *punt++;
    }
    system("pause>null");
}

// Creá el programa que sume dos números ingresados por el usuario a través de la función 
// suma. Al salir de la función las variables utilizadas para sumar (declaradas en main)
// deben quedar cargadas con 0. Cambiá Los valores de las variables a través de punteros.

// Create the program that adds two numbers entered by the user through the function
// addition. When exiting the function the variables used to add (declared in main)
// They must be loaded with 0. Change the values ​​of the variables through pointers.

int *punt;

int suma(int a, int b){
    int s;
    s=a+b;
    *punt=0;
    punt++;
    *punt=0;
    return s;
}

int exercise5(){
    int a, b, c, d;
    
    printf("ingrese 2 numeros\n");
    scanf("%d", &a);
    scanf("%d", &b);
    punt=&a;
    c=suma(a, b);
    punt=&c;
    printf("el resultado de la suma es: %d\n", *punt);
    for(d=1;d<3;d++){
        punt++;
        printf("el nuevo valor del numero %d es: %d\n", d, *punt);
    }
    system("pause>null");
}

// Ídem anterior pero que calcule, a pedido del usuario, la raíz cuadrada o el cuadrado 
// de un número ingresado.

// Same as above but that calculates, at the user's request, the square root or the square
// of an entered number.

int *punt6;

int raiz(int d){
    int s;
    s=sqrt(d);
    *punt6=0;
    return s;
}
                       
int cuadrado(int d){
    int s;
    s=d*d;
    *punt6=0;
    return s;
}

int exervise6(){
    int a, b, c;
    
    printf("ingrese un numero\n");
    scanf("%d", &a);
    printf("ingrese 1 si quiere la raiz del numero o 2 si quiere el cuadrado del mismo\n");
    scanf("%d", &b);
    punt6=&b;
    if(b==1){
        c=raiz(a);
        punt6=&c;
        punt6++;
        printf("el nuevo valor del numero es: %d\n", *punt6);
        punt--;
        printf("y el resultado de la raiz es: %d\n", *punt6);
    }
    else{
        c=cuadrado(a);
        punt6=&c;
        punt6++;
        printf("el nuevo valor del numero es: %d\n", *punt6);
        punt6--;
        printf("y el resultado de la raiz es: %d\n", *punt6);
    }
    system("pause>null");
}

// Escribí el programa que, según seleccione el usuario, calcule el cuadrado, el cubo 
// o la raíz cuadrada de los números reales cargados en un arreglo de 10 elementos. Tendrá 
// una función para cargar los números del arreglo, otra para calcular el cuadrado, otra para 
// el cubo, otra para la raíz cuadrada y una última para mostrar el resultado. Los resultados 
// de las operaciones los tenés que guardar en un único arreglo llamado resultado, al que tenés 
// que acceder desde cada función. Los elementos de los vectores recorrelos incrementando punteros 
// y las operaciones hacelas con las direcciones a las que apuntan los punteros.

// I wrote the program that, depending on the user's selection, calculates the square, the cube
// or the square root of the real numbers loaded in an array of 10 elements. Will have
// a function to load the numbers from the array, another to calculate the square, another to
// the cube, another for the square root and a last one to show the result. The results
// of the operations you have to save them in a single arrangement called result, to which you have
// to access from each function. The elements of the vectors traverse them by incrementing pointers
// and the operations are done with the addresses to which the pointers point.

float *punt7, a[10], r[10], *jaja;

int cargar(){
    int b;
    for(b=0;b<10;b++){
        scanf("%f", &a[b]);
        punt7=&a[b];
    }
}

int raiz(){
    int b;
    for(b=0;b<10;b++){
        *punt7=sqrt(*punt7);
        punt7--;
    }
    for(b=0;b<10;b++){
        jaja=&r[b];
        punt7++;
        *jaja=*punt7;
    }
}

int cuadrado(){
    int b;
    for(b=0;b<10;b++){
        *punt7=*punt7**punt7;
        punt7--;
    }
    for(b=0;b<10;b++){
        jaja=&r[b];
        punt7++;
        *jaja=*punt7;
    }
}

int cubo(){
    int b;
    for(b=0;b<10;b++){
        *punt7=*punt7**punt7**punt7;
        punt7--;
    }
    for(b=0;b<10;b++){
        jaja=&r[b];
        punt7++;
        *jaja=*punt7;
    }
}

int mostrar(){
    for(int b=0;b<10;b++) printf("%f\t", r[b]);
}

int exercise7(){
    int b;
    printf("ingrese 10 numeros\n");
    cargar();
    printf("ingrese \n1 si quire hacer la raiz de los numeros\n2 su quiere el cuadrado\n3 si quiere el cubo\n");
    scanf("%d", &b);
    switch(b){
        case 1: 
            raiz();
            break;
        case 2: 
            cuadrado();
            break;
        case 3: 
            cubo();
            break;
    }
    mostrar();
    system("pause>null");
}