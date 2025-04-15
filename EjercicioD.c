#include <stdio.h>  // Incluir la biblioteca estándar de entrada y salida
#include <math.h>

int main() {
    double c1, c2, area, hipotenusa, perimetro;
    
    printf("Ingrese el valor del cateto 1: ");
    scanf("%lf", &c1);
    printf("Ingrese el valor del cateto 2: ");
    scanf("%lf", &c2);
    
    area = (c1 * c2) / 2; //calcular el área
    hipotenusa = sqrt((c1 * c1) + (c2 * c2)); //calcular la hipotenusa
    perimetro = hipotenusa + c1 + c2; //calcular el perimetro
    
    // Mostrar los resultados
    printf("Área del triángulo: %.2lf\n", area);
    printf("Hipotenusa: %.2lf\n", hipotenusa);
    printf("Perimetro: %.2lf\n", perimetro);
}