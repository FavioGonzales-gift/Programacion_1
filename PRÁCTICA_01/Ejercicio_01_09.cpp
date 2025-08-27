// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 28/08/2025
// Número de ejercicio: 9

#include <iostream>

using namespace std;

int main()
{
    int edad = 0;
    cout << "Ingrese la edad: ";
    cin >> edad;

    // Clasificacion por edad
    if (edad >= 0)
    {
        if (edad <= 12)
        {
            cout << "Nino";
        }
        if (edad > 12 && edad <= 18)
        {
            cout << "Adolescente";
        }
        if (edad > 18 && edad < 60)
        {
            cout << "Mayor de edad";
        }
        if (edad >= 60)
        {
            cout << "Adulto mayor";
        } 
    }
    else
    {
        cout << "Edad invalida";
    }
    
    return 0;
}
    