#include <stdio.h>
#include <time.h>

int main() {
    long long int numero;
    int digito, contador = 0;
    clock_t inicio, fin;
    float tiempo_transcurrido;
    printf("Introduce un numero: ");
    scanf("%lld", &numero);
    inicio = clock();

    while (numero != 0) {
        digito = numero % 10;
        if (digito == 7) {
            contador++;
        }
        numero /= 10;
    }

    fin = clock();
    tiempo_transcurrido = ((fin - inicio)) / CLOCKS_PER_SEC;

    printf("El numero de digitos 7 en el numero dado es: %d\n", contador);
    printf("Tiempo de procesamiento: %.10f segundos\n", tiempo_transcurrido);

    return 0;
}
