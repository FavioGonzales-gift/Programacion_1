// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 28/08/2025
// Número de ejercicio: 8

#include <iostream>

using namespace std;

int main()
{
    // Diferenciar par de impar
    int numero = 0;
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    if (numero % 2 == 0)
    {
        cout << "El numero es par";
    }
    else
    {
        cout << "El numero es impar";
    }
    return 0;
}
    