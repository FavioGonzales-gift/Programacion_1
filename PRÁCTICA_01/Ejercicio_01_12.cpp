// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 28/08/2025
// Número de ejercicio: 12

#include <iostream>

using namespace std;

int main()
{
    // Pedir numero entre 1 y 5
    int numero;
    do
    {
        cout << "Ingrese un numero entre 1 y 5: ";
        cin >> numero;
    } while (numero < 1 || numero > 5);
    
    cout << "Numero valido";
    
    return 0;
}