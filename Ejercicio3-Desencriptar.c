#include <stdio.h>
#include <time.h>

int desencriptar(int num) {
    int d1, d2, d3, d4;

    // Extraer y desencriptar dígitos
    d2 = (num % 10 + 3) % 10;
    d1 = ((num / 10) % 10 + 3) % 10;
    d4 = ((num / 100) % 10 + 3) % 10;
    d3 = (num / 1000 + 3) % 10;

    // Reordenar el número
    return d1 * 1000 + d2 * 100 + d3 * 10 + d4;
}

int main() {
    int encriptado, desencriptado;
    clock_t inicio, fin;

    // Entrada del usuario
    printf("Ingrese un número encriptado de 4 dígitos: ");
    scanf("%d", &encriptado);

    // Medir tiempo de inicio
    inicio = clock();

    // Desencriptar el número
    desencriptado = desencriptar(encriptado);

    // Medir tiempo de finalización
    fin = clock();

    // Mostrar resultado
    printf("\nNúmero encriptado: %d", encriptado);
    printf("\nNúmero desencriptado: %d\n", desencriptado);

    // Calcular y mostrar tiempo de procesamiento
    printf("Tiempo de procesamiento: %f segundos\n", (double)(fin - inicio) / CLOCKS_PER_SEC);

    return 0;
}