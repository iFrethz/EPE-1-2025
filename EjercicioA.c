#include <stdio.h>  // Incluir la biblioteca estándar de entrada y salida
#include <stdlib.h>

int main() {
    int opcion; // Variable para almacenar la opción elegida por el usuario
    int num1, num2, suma;  // Variables para almacenar los números y su suma

    do { // Mostrar el menú de opciones
        printf("Seleccione una opción:\n");
        printf("1. Saludar\n");
        printf("2. Sumar dos números\n");
        printf("3. Salir\n");
        printf("Opción: ");
        scanf("%d", &opcion);  // Leer la opción elegida por el usuario
        
        switch (opcion) { // Evaluar la opción elegida
            case 1:  // Opción para saludar
                printf("¡Hola, usuario!\n");
                break;  // Salir del switch
            case 2:  // Opción para sumar
                printf("Ingrese el primer número: ");
                scanf("%d", &num1);  // Leer el primer número
                printf("Ingrese el segundo número: ");
                scanf("%d", &num2);  // Leer el segundo número
                suma = num1 + num2;  // Calcular la suma
                printf("%d + %d = %d\n", num1, num2, suma);  // Mostrar el resultado
                break;
            case 3:  // Opción para salir
                printf("Saliendo del programa...\n");
                break;
            default:  // Opción no válida
                printf("Opción no válida.\n");
        }
        printf("\n");  // Imprimir una línea en blanco para mejor legibilidad
    } while (opcion != 3);  // Repetir el bucle hasta que el usuario elija salir

    return 0;  // Finalizar el programa
}