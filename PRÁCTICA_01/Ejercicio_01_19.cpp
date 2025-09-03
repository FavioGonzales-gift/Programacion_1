// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 28/08/2025
// Número de ejercicio: 19

#include <iostream>

using namespace std;

int main()
{
    int numero = 0;
    cout << "Ingrese un numero: ";
    cin >> numero;
    
    // Tabla de multiplicar hasta 10
    cout << "La tabla de multiplicar hasta el 10 es: " << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << numero << " * " << i << " = " << numero*i << endl;
    }
    return 0;
}