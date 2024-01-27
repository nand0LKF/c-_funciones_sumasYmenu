#include <iostream>
#include <cctype>  // Para la función std::toupper. Comprueba si un carácter individual tiene un atributo determinado, o clasifica los atributos de cada carácter de un intervalo y los almacena en una matriz.

using namespace std;

string nombreCompleto, nombre, apePat, apeMat;

// Función para separar el nombre completo y convertir las primeras letras en mayúsculas
void separarYConvertirMayusculas()
{
    int pini = 0;
    int pfinal = nombreCompleto.find(" ", pini);

    // Tomamos el substring para el nombre y lo convertimos a mayúsculas
    nombre = nombreCompleto.substr(pini, pfinal);
    nombre[0] = toupper(nombre[0]);  // Primer letra en mayúscula

    // Avanzamos al siguiente espacio en blanco para el apellido paterno
    pini = pfinal + 1;
    pfinal = nombreCompleto.find(" ", pini);

    // Tomamos el substr para el apellido paterno y lo convertimos a mayúsculas
    apePat = nombreCompleto.substr(pini, pfinal - pini);
    apePat[0] = toupper(apePat[0]);  // Primer letra en mayúscula

    // El resto se considera como apellido materno y lo convertimos a mayúsculas
    apeMat = nombreCompleto.substr(pfinal + 1);
    apeMat[0] = toupper(apeMat[0]);  // Primer letra en mayúscula
}

// Función para realizar la suma de una cadena
void sumarCadena()
{
    string cadena;
    cout << "Ingrese la cadena de números separados por '+': ";
    cin.ignore();  // Limpiar el buffer antes de getline
    getline(cin, cadena);

    // Lógica para calcular la suma de la cadena
    int resultado = 0;
    size_t pos = 0;
    while ((pos = cadena.find("+")) != string::npos)
    {
        resultado += stoi(cadena.substr(0, pos));
        cadena.erase(0, pos + 1);
    }
    resultado += stoi(cadena);

    cout << "Resultado: " << resultado << endl;
}

// Función para imprimir el nombre completo en formato "Apellido1 Apellido2 Nombre"
void nombreCompletoFormateado()
{
    cout << "Ingrese el nombre completo: ";
    cin.ignore();  // Limpiar el buffer antes de getline
    getline(cin, nombreCompleto);

    // Llamada a la función para separar el nombre completo y convertir a mayúsculas
    separarYConvertirMayusculas();

    // Imprimir nombre, apellido paterno y apellido materno
    cout << "Nombre completo: " << apePat << " " << apeMat << " " << nombre << endl;
}

// Función para ofuscar una cadena según la tabla de cambios
void ofuscarCadena()
{
    string cadena;
    cout << "Ingrese la cadena a ofuscar: ";
    cin.ignore();  // Limpiar el buffer antes de getline
    getline(cin, cadena);

    // Lógica para ofuscar la cadena según la tabla de cambios
    for (char &c : cadena)
    {
        switch (c)
        {
        case 'a':
        case 'A':
            c = '4';
            break;
        case 'e':
        case 'E':
            c = '3';
            break;
        case 'i':
        case 'I':
            c = '1';
            break;
        case 'o':
        case 'O':
            c = '0';
            break;
        case 's':
        case 'S':
            c = '5';
            break;
        case 't':
        case 'T':
            c = '7';
            break;
        // Añadir más casos según la tabla de cambios
        }
    }

    cout << "Cadena ofuscada: " << cadena << endl;
}

int main()
{
    char opcion;

    do
    {
        // Menú principal
        cout << "MENU PRINCIPAL" << endl;
        cout << "(1) - suma de una cadena." << endl;
        cout << "(2) - Nombre completo." << endl;
        cout << "(3) - ofuscar." << endl;
        cout << "(s/S) - Salir" << endl;

        cout << "Ingrese su elección: ";
        cin >> opcion;

        switch (opcion)
        {
        case '1':
            sumarCadena();
            break;

        case '2':
            nombreCompletoFormateado();
            break;

        case '3':
            ofuscarCadena();
            break;

        case 's':
        case 'S':
            cout << "Saliendo del programa." << endl;
            break;

        default:
            cout << "Opción no válida." << endl;
        }

    } while (opcion != 's' && opcion != 'S');

    return 0;
}
