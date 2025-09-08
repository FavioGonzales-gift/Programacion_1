// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 07/09/2025
// Número de ejercicio: 3

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int numero = rand() % 10 + 1;
    int factorial = 1;

    for (int i = 1; i <= numero; i++)
    {
        // Multiplicar de 1 hasta numero
        factorial *= i;
    }

    cout << "El factorial de " << numero << " es: " << factorial;
    
    return 0;
}