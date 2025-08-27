// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 28/08/2025
// Número de ejercicio: 5

#include <iostream>

using namespace std;

int main()
{
    // Conversion de grados centigrados a kelvin
    float grados_centigrados = 0;
    float kelvin = 0;
    cout << "Ingrese la temperatura en grados centigrados: ";
    cin >> grados_centigrados;
    kelvin+=grados_centigrados+273.15;
    cout << "La temperatura en kelvin es: " << kelvin;

    return 0;
}