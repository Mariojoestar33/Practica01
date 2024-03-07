#include <stdio.h>
#include <time.h>

int main() {
    int num_empleados, i;
    clock_t inicio, fin;
    float tiempo_transcurrido, ventas_totales, ingresos;
    printf("Ingrese el numero de empleados: ");
    scanf("%d", &num_empleados);
    for (i = 1; i <= num_empleados; i++) {
        printf("Ingrese las ventas totales del empleado %d durante la ultima semana: ", i);
        scanf("%f", &ventas_totales);
        inicio = clock();
        ingresos = 200 + (0.09 * ventas_totales);
        printf("Los ingresos del empleado %d son: $%.2f\n", i, ingresos);
        fin = clock();
        tiempo_transcurrido = ((fin - inicio)) / CLOCKS_PER_SEC;
        printf("Tiempo de procesamiento: %.10f segundos\n", tiempo_transcurrido);
    }
    return 0;
}