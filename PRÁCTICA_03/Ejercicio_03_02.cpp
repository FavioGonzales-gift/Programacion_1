// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 10/09/2025
// Número de ejercicio: 2

#include <iostream>
using namespace std;

float conversion_fahrenheit(float celsius);

int main() 
{
    system("chcp 65001");
    float grados_celsius;
    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> grados_celsius;

    float grados_farenheit = conversion_fahrenheit(grados_celsius);
    cout << grados_celsius << "°C equivalen a " << grados_farenheit << " °F." << endl;

    return 0;
}

// Conversión a Farenheir
float conversion_fahrenheit(float celsius) 
{
    return (celsius * 9.0 / 5.0) + 32;
}