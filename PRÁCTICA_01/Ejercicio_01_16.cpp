// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 28/08/2025
// Número de ejercicio: 16

#include <iostream>

using namespace std;

int main()
{
    int divisores = 0;
    int numero = 0;
    cout << "Ingrese un numero: ";
    cin >> numero;
    
    for (int i = 1; i <= numero; i++)
    {
        if (numero % i == 0)
        {
            divisores+=1;
        }
    }
    if (divisores == 2)
    {
        cout << "El numero es primo";
    }
    else
    {
        cout << "El numero no es primo";
    }
    return 0;
}