// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 28/08/2025
// Número de ejercicio: 10

#include <iostream>

using namespace std;

int main()
{
    int nota = 0;
    cout << "Ingrese la nota del estudiante: ";
    cin >> nota;

    // Clasificacion de la nota del estudiante
    if (nota >= 0)
    {
        if (nota < 51)
        {
            cout << "Reprobado";
        }
        if (nota >= 51 && nota < 60)
        {
            cout << "Calificacion: C";
        }
        if (nota >= 60 && nota < 70)
        {
            cout << "Calificacion: C+";
        }
        if (nota >= 70 && nota < 80)
        {
            cout << "Calificacion: B";;
        }
        if (nota >= 80 && nota < 90)
        {
            cout << "Calificacion: B+";
        }
        if (nota >= 90 && nota < 95)
        {
            cout << "Calificacion: A";
        }
        if (nota >= 95 && nota <= 100)
        {
            cout << "Calificacion: A+";
        }
        
    }
    else
    {
        cout << "Nota invalida";
    }
    
    return 0;
}