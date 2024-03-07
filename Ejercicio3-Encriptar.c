#include <stdio.h>
#include <time.h>

int encriptar(int num) {
    int d1, d2, d3, d4;

    // Extraer y encriptar dígitos
    d4 = (num % 10 + 7) % 10;
    d3 = ((num / 10) % 10 + 7) % 10;
    d2 = ((num / 100) % 10 + 7) % 10;
    d1 = (num / 1000 + 7) % 10;

    // Reordenar el número
    return d3 * 1000 + d4 * 100 + d1 * 10 + d2;
}

int main() {
    int numero, encriptado;
    clock_t inicio, fin;

    // Entrada del usuario
    printf("Ingrese un número de 4 dígitos: ");
    scanf("%d", &numero);

    // Medir tiempo de inicio
    inicio = clock();

    // Encriptar el número
    encriptado = encriptar(numero);

    // Medir tiempo de finalización
    fin = clock();

    // Mostrar resultado
    printf("\nNúmero original: %d", numero);
    printf("\nNúmero encriptado: %d\n", encriptado);

    // Calcular y mostrar tiempo de procesamiento
    printf("Tiempo de procesamiento: %f segundos\n", (double)(fin - inicio) / CLOCKS_PER_SEC);

    return 0;
}
