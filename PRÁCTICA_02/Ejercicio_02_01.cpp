// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 07/09/2025
// Número de ejercicio: 1

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    
    int repeticiones_pares = 0;
    int numero_lanzamientos = 0;
    cout << "Ingrese la cantidad de lanzamientos: ";
    cin >> numero_lanzamientos;

    for (int i = 1; i <= numero_lanzamientos; i++)
    {
        // Numero aleatorio entre 1 y 6
        int dado = rand() % 6 + 1;
        if (dado % 2 == 0)
        {
            
            repeticiones_pares += 1;
        }
    }

    cout << "Repeticion de caras pares: " << repeticiones_pares;
    
    return 0;
}