#include <stdio.h>

// Declaración de un subprograma
int sumar(int a, int b);

int main() {
    // Declaración de variables
    int num1, num2, resultado;

    // Solicitar al usuario que ingrese dos números
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    // Llamada al subprograma para sumar los números
    resultado = sumar(num1, num2);

    printf("La suma de %d y %d es: %d\n", num1, num2, resultado);

    return 0;
}

// Definición de un subprograma para sumar dos números
int sumar(int a, int b) {
    return a + b;
}