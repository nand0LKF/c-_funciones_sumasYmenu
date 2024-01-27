#include <iostream>
#include <cstdlib>  // Para la función rand
#include <ctime>    // Para la función time
#include <vector>   // Para utilizar vectores

// Declaración de funciones
void generarNumeroAleatorio(int &numero, int minimo, int maximo);
void generarNumeroRealAleatorio(double &numero);
bool esPrimo(int numero);
void generarNumerosPrimos(int N, std::vector<int> &primos);

int main() {
    char opcion;
    int numeroEntero, cantidadPrimos;
    double numeroReal;
    std::vector<int> numerosPrimos;

    // Inicializar la semilla para generar números aleatorios
    srand(static_cast<unsigned>(time(nullptr)));

    do {
        std::cout << "GENERANDO NÚMEROS ALEATORIOS" << std::endl;
        std::cout << "(1) -- Genere al azar numero entre 0-500" << std::endl;
        std::cout << "(2) -- Genere un numero aleatorio real" << std::endl;
        std::cout << "(3) -- Genere N números primos" << std::endl;
        std::cout << "(s/S) -- Salir" << std::endl;

        std::cout << "Ingrese su elección: ";
        std::cin >> opcion;

        switch (opcion) {
            case '1':
                generarNumeroAleatorio(numeroEntero, 0, 500);
                std::cout << "Número generado: " << numeroEntero << std::endl;
                break;

            case '2':
                generarNumeroRealAleatorio(numeroReal);
                std::cout << "Número real generado: " << numeroReal << std::endl;
                break;

            case '3':
                std::cout << "Ingrese la cantidad de números primos a generar: ";
                std::cin >> cantidadPrimos;
                generarNumerosPrimos(cantidadPrimos, numerosPrimos);
                std::cout << "Números primos generados: ";
                for (int primo : numerosPrimos) {
                    std::cout << primo << " ";
                }
                std::cout << std::endl;
                break;

            case 's':
            case 'S':
                std::cout << "Saliendo del programa." << std::endl;
                break;

            default:
                std::cout << "Opción no válida." << std::endl;
        }

    } while (opcion != 's' && opcion != 'S');

    return 0;
}

// Función para generar un número entero aleatorio en el rango [minimo, maximo]
void generarNumeroAleatorio(int &numero, int minimo, int maximo) {
    numero = rand() % (maximo - minimo + 1) + minimo;
}

// Función para generar un número real aleatorio entre 0 y 1
void generarNumeroRealAleatorio(double &numero) {
    numero = static_cast<double>(rand()) / RAND_MAX;
}

// Función para verificar si un número es primo
bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

// Función para generar N números primos
void generarNumerosPrimos(int N, std::vector<int> &primos) {
    primos.clear();
    int numero = 2;
    while (primos.size() < N) {
        if (esPrimo(numero)) {
            primos.push_back(numero);
        }
        ++numero;
    }
}
