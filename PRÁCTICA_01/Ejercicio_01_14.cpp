// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 28/08/2025
// Número de ejercicio: 14

#include <iostream>

using namespace std;

int main()
{
    int N = 0;
    cout << "Ingrese la altura del triangulo: ";
    cin >> N;
    
    // Creación del triangulo con *
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}