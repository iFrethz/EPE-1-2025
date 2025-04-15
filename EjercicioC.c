#include <stdio.h>  // Incluir la biblioteca estándar de entrada y salida

// Función para calcular el factorial de un número
unsigned long long factorial(int n) {
    unsigned long long resultado = 1;  // Inicializar el resultado en 1

    // Calcular el factorial usando un bucle
    for (int i = 1; i <= n; i++) {
        resultado *= i;  // Multiplicar el resultado por cada número desde 1 hasta n
    }
    return resultado;  // Devolver el resultado del factorial
}

int main() {
    int numero;  // Variable para almacenar el número ingresado por el usuario

    printf("Ingrese un número (Que no sea negativo): ");
    scanf("%d", &numero);  // Leer el número ingresado

    // Verificar que el número sea no negativo
    if (numero < 0) {
        printf("El factorial no sirve para números negativos.\n");
    } else {
        // Llamar a la función para calcular el factorial
        unsigned long long resultado = factorial(numero);
        // Mostrar el resultado en el formato solicitado
        printf("%d! = %llu\n", numero, resultado);
    }

    return 0;
}