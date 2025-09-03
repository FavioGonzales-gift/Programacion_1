// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 28/08/2025
// Número de ejercicio: 23

#include <iostream>

using namespace std;

int main()
{
    int numero = 0;
    cout << "Ingrese un numero entero: ";
    cin >> numero;
    int digito = 0;

    cout << "Numero al reves: ";
    if (numero < 0)
    {
        cout << "-";
        numero = -numero;
    }
    
    while (numero > 0)
    {
        digito = numero % 10;
        cout << digito;
        numero = numero / 10;
    }
    return 0;
}