// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 07/09/2025
// Número de ejercicio: 2

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    
    int cara = 0;
    int cruz = 0;
    int porcentaje_cara = 0;
    int porcentaje_cruz = 0;
    int numero_lanzamientos = 0;
    cout << "Ingrese la cantidad de lanzamientos: ";
    cin >> numero_lanzamientos;

    for (int i = 1; i <= numero_lanzamientos; i++)
    {
        // Solo da 2 numeros aleatorios
        int lado_moneda = rand() % 2;
        if (lado_moneda == 0)
        {
            cara += 1;
        }
        else
        {
            cruz += 1;
        }    
    }

    porcentaje_cara = (cara*100)/numero_lanzamientos;
    porcentaje_cruz = (cruz*100)/numero_lanzamientos;
    cout << "Porcentaje cara: " << porcentaje_cara << "%" << endl;
    cout << "Porcentaje cruz: " << porcentaje_cruz << "%" << endl;
    
    return 0;
}