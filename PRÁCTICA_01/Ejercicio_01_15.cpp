// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 28/08/2025
// Número de ejercicio: 15

#include <iostream>

using namespace std;

int main()
{
    // Pedir numero de notas a promediar
    float nota = 0, suma_notas = 0, promedio_notas = 0;
    int numero_notas = 0;
    cout << "Ingrese el numero de notas a promediar: ";
    cin >> numero_notas;

    for (int i = 1; i <= numero_notas; i++)
    {
        cout << "Ingrese la nota " << i <<": ";
        cin >> nota;
        suma_notas = suma_notas + nota;
    }

    promedio_notas = suma_notas / numero_notas;
    cout << "El promedio es: " << promedio_notas;
    
}