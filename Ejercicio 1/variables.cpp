#include "variables.h"
#include <iostream>
#include <string>

void pedirDatos() {
    // Declara dos variables: una string para el nombre y una integer para la edad.
    std::string nombre;
    int edad;

    // Solicita al usuario su nombre
    std::cout << "Por favor ingresa tu nombre: ";
    std::cin >> nombre;

    // Solicita al usuario su edad
    std::cout << "Por favor ingresa tu edad: ";
    std::cin >> edad;

    // Imprime la edad y el nombre del usuario
    std::cout << "Hola, " << nombre << "! Tienes " << edad << " años.\n";
}
