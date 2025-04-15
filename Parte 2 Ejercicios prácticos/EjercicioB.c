#include <stdio.h>  // Incluir la biblioteca estándar de entrada y salida

// Función que recibe un array de enteros y su tamaño, y devuelve el número mayor
int encontrar(int arr[], int tamaño) {
    int mayor = arr[0];  // Inicializar el mayor con el primer elemento del array

    for (int i = 1; i < tamaño; i++) { // Bucle para recorrer el array para encontrar el número mayor
        if (arr[i] > mayor) {
            mayor = arr[i];  // Actualizar el mayor si se encuentra un número mayor
        }
    }
    return mayor;  // Devolver el número mayor encontrado
}

int main() {
    int numeros[5];  // Array para almacenar 5 números enteros

    printf("Ingrese 5 números enteros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);  // Leer cada número ingresado por el usuario
    }
    
    int mayor = encontrar(numeros, 5); // Llamar a la función para encontrar el número mayor

    // Mostrar el resultado
    printf("El número mayor es: %d\n", mayor);

    return 0;  // Finalizar el programa
}