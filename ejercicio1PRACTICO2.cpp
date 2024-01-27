#include <iostream>

// Variables globales
float num1, num2;
std::string cadena1, cadena2;

// Declaración de funciones
void mostrarMenuPrincipal();
void mostrarSubMenuNumeros();
void sumaNumeros();
void divisionNumeros();

int main() {
    char opcion;

    do {
        mostrarMenuPrincipal();
        std::cout << "Ingrese su elección: ";
        std::cin >> opcion;

        switch (opcion) {
            case '1':
                mostrarSubMenuNumeros();
                std::cout << "Ingrese su elección: ";
                std::cin >> opcion;

                switch (opcion) {
                    case '1':
                        sumaNumeros();
                        break;
                    case '2':
                        divisionNumeros();
                        break;
                    case 'm':
                    case 'M':
                        // Volver al menú principal
                        break;
                    default:
                        std::cout << "Opción no válida." << std::endl;
                }
                break;

            case '2':
                // Concatenar 2 cadenas
                std::cout << "Ingrese la primera cadena: ";
                std::cin >> cadena1;
                std::cout << "Ingrese la segunda cadena: ";
                std::cin >> cadena2;
                std::cout << "Cadenas concatenadas: " << cadena1 + cadena2 << std::endl;
                break;

            case 's':
            case 'S':
                // Salir del programa
                std::cout << "Saliendo del programa." << std::endl;
                break;

            default:
                std::cout << "Opción no válida." << std::endl;
        }

    } while (opcion != 's' && opcion != 'S');

    return 0;
}

// Función para mostrar el menú principal
void mostrarMenuPrincipal() {
    std::cout << "MENU PRINCIPAL" << std::endl;
    std::cout << "(1) -- Operaciones con Números" << std::endl;
    std::cout << "(2) -- Concatenar 2 cadenas." << std::endl;
    std::cout << "(s/S) - Salir" << std::endl;
}

// Función para mostrar el submenú de operaciones con números
void mostrarSubMenuNumeros() {
    std::cout << "SUBMENU OP NUMEROS" << std::endl;
    std::cout << "1) - Suma de 2 números." << std::endl;
    std::cout << "2) - División de 2 números." << std::endl;
    std::cout << "(m/M) - Volver al Menu principal" << std::endl;
}

// Función para realizar la suma de dos números
void sumaNumeros() {
    std::cout << "Ingrese el primer número: ";
    std::cin >> num1;
    std::cout << "Ingrese el segundo número: ";
    std::cin >> num2;
    std::cout << "La suma es: " << num1 + num2 << std::endl;
}

// Función para realizar la división de dos números
void divisionNumeros() {
    std::cout << "Ingrese el numerador: ";
    std::cin >> num1;
    std::cout << "Ingrese el denominador: ";
    std::cin >> num2;

    if (num2 != 0) {
        std::cout << "El resultado de la división es: " << num1 / num2 << std::endl;
    } else {
        std::cout << "Error: No se puede dividir por cero." << std::endl;
    }
}

