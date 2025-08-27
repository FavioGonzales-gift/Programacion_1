// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 28/08/2025
// Número de ejercicio: 13

#include <iostream>

using namespace std;

int main()
{
    int suma = 0;
    int N = 0;
    cout << "Ingrese un numero: ";
    cin >> N;
    
    // Suma de numeros de 1 hasta N
    for (int i = 1; i <= N; i++)
    {
        suma = suma + i;
    }
    
    cout << "La suma de 1 hasta " << N << " es: " << suma;

    return 0;
}