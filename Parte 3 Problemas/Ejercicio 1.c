#include <stdio.h>

int main() {
    int num[4], suma = 0;
    float promedio;

    for(int i = 0; i < 4; i++) {
        printf("Introduce el %d° número: ", i + 1);
        scanf("%d", &num[i]);
        suma += num[i];
    }

    promedio = suma / 4.0;
    printf("\nLa suma de los números es: %d\n", suma);
    printf("El promedio es: %.2lf\n", promedio);
    
    if(promedio < 50) {
        printf("\nEl promedio es menor o igual a 50.\n");
    } else {
        printf("\nEl promedio es mayor a 50.\n");
    }

    return 0;
}