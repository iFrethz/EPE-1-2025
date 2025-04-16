#include <stdio.h>

// Función para calcular el descuento y el precio final de un producto
void calcular_descuento(float precio, char tipo_cliente, float *descuento, float *precio_final) {
    // Determina el descuento según el tipo de cliente
    if (tipo_cliente == '1') { // Regular
        *descuento = precio * 0.05; // 5% de descuento
    } else if (tipo_cliente == '2') { // Premium
        *descuento = precio * 0.15; // 15% de descuento
    } else if (tipo_cliente == '3') { // VIP
        *descuento = precio * 0.30; // 30% de descuento
    } else {
        *descuento = 0; // Sin descuento si el tipo de cliente no es válido
    }
    // Calcula el precio final restando el descuento al precio original
    *precio_final = precio - *descuento;
}

// Función para mostrar el menú principal de selección de tipo de cliente
void mostrar_menu_principal() {
    printf("Seleccione su tipo de cliente:\n");
    printf("1. Regular (5%% descuento)\n");
    printf("2. Premium (15%% descuento)\n");
    printf("3. VIP (30%% descuento)\n");
    printf("4. Salir\n");
}

// Función para mostrar el submenú de opciones después de ingresar un producto
void mostrar_submenu() {
    printf("\n¿Qué desea hacer ahora?\n");
    printf("1. Agregar otro producto\n");
    printf("2. Cambiar tipo de cliente\n");
    printf("3. Terminar compra\n");
}

int main() {
    float total_a_pagar = 0; // Variable para acumular el total a pagar
    int numero_productos = 0; // Contador de productos comprados
    char tipo_cliente = '0'; // Variable para almacenar el tipo de cliente

    // Bucle principal que permite al usuario seleccionar el tipo de cliente
    while (1) {
        mostrar_menu_principal(); // Muestra el menú principal
        printf("Seleccione una opción (1-4): ");
        scanf(" %c", &tipo_cliente); // Lee la opción seleccionada

        // Opción para salir del programa
        if (tipo_cliente == '4') {
            printf("\nGracias por usar la calculadora de descuentos. ¡Hasta luego!\n");
            break; // Sale del bucle principal
        }

        // Bucle para ingresar productos y calcular descuentos
        while (1) {
            float precio, descuento, precio_final; // Variables para precio, descuento y precio final
            printf("Ingrese el precio del producto: ");
            scanf("%f", &precio); // Lee el precio del producto

            // Llama a la función para calcular el descuento y el precio final
            calcular_descuento(precio, tipo_cliente, &descuento, &precio_final);
            total_a_pagar += precio_final; // Acumula el precio final al total
            numero_productos++; // Incrementa el contador de productos

            // Muestra los resultados del cálculo
            printf("\nPrecio original: $%.2f\n", precio);
            printf("Descuento: $%.2f\n", descuento);
            printf("Precio final: $%.2f\n", precio_final);

            mostrar_submenu(); // Muestra el submenú
            char opcion_submenu; // Variable para almacenar la opción del submenú
            printf("Seleccione una opción (1-3): ");
            scanf(" %c", &opcion_submenu); // Lee la opción seleccionada

            // Manejo de las opciones del submenú
            if (opcion_submenu == '1') {
                continue; // Vuelve al inicio del bucle para agregar otro producto
            } else if (opcion_submenu == '2') {
                break; // Sale del bucle para cambiar el tipo de cliente
            } else if (opcion_submenu == '3') {
                // Muestra el total a pagar y el resumen de la compra
                printf("\nTotal a pagar: $%.2f\n", total_a_pagar);
                printf("Número de productos comprados: %d\n", numero_productos);
                printf("Tipo de cliente: ");
                // Muestra el tipo de cliente correspondiente
                if (tipo_cliente == '1') {
                    printf("Regular\n");
                } else if (tipo_cliente == '2') {
                    printf("Premium\n");
                } else if (tipo_cliente == '3') {
                    printf("VIP\n");
                }
                printf("\nGracias por su compra. ¡Hasta luego!\n");
                return 0; // Termina el programa
            } else {
                printf("Opción no válida.\n"); // Mensaje de error para opción no válida
            }
        }
    }

    return 0; // Fin del programa
}