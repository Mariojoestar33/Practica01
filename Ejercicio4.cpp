#include <iostream>
#include <ctime>

class Fecha {
private:
    int dia, mes, anio;

public:
    // Constructor predeterminado que inicializa la fecha con la fecha actual del sistema.
    Fecha() {
        time_t t = time(0);
        struct tm* now = localtime(&t);
        dia = now->tm_mday;
        mes = now->tm_mon + 1;  // tm_mon es 0-based
        anio = now->tm_year + 1900;  // tm_year cuenta desde 1900
    }

    // Constructor sobrecargado que permite inicializar la fecha con valores proporcionados.
    Fecha(int d, int m, int a) : dia(d), mes(m), anio(a) {}

    // Método para mostrar la fecha en formato DDD YYYY.
    void mostrarFormato1() {
        std::cout << "DDD YYYY: " << dia << " " << anio << std::endl;
    }

    // Método para mostrar la fecha en formato MM/DD/YYYY.
    void mostrarFormato2() {
        std::cout << "MM/DD/YYYY: " << mes << "/" << dia << "/" << anio << std::endl;
    }

    // Método para mostrar la fecha en formato "nombreMes dia, año".
    void mostrarFormato3() {
        const char* nombreMeses[] = { "", "enero", "febrero", "marzo", "abril", "mayo", "junio",
                                      "julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre" };

        std::cout << nombreMeses[mes] << " " << dia << ", " << anio << std::endl;
    }
};

int main() {
    Fecha fechaActual;
    clock_t inicio, fin;

    // Medir tiempo de inicio
    inicio = clock();

    // Mostrar la fecha en diferentes formatos
    std::cout << "Formato 1: ";
    fechaActual.mostrarFormato1();

    std::cout << "Formato 2: ";
    fechaActual.mostrarFormato2();

    std::cout << "Formato 3: ";
    fechaActual.mostrarFormato3();

    // Medir tiempo de finalización
    fin = clock();

    // Calcular y mostrar tiempo de procesamiento
    std::cout << "Tiempo de procesamiento: " << (double)(fin - inicio) / CLOCKS_PER_SEC << " segundos" << std::endl;

    return 0;
}
