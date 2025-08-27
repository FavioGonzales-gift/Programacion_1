// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 28/08/2025
// Número de ejercicio: 6

#include <iostream>

using namespace std;

int main()
{
    // Clasificación del número
    int valor = 0;
    cout << "Ingrese el valor : ";
    cin >> valor;
    if (valor == 0)
    {
        cout << "El numero es 0";
    }
    else
    {
        if (valor > 0)
        {
            cout << "El numero " << valor << " es positivo";
        }
        else
        {
            cout << "El numero " << valor << " es negativo";
        }
        
    }
    
    return 0;
}