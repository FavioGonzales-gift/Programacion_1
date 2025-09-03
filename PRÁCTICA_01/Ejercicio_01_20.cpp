// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 28/08/2025
// Número de ejercicio: 20

#include <iostream>

using namespace std;

int main()
{
    // Contador de digitos de un numero
    int numero = 0;
    cout << "Ingrese un numero: ";
    cin >> numero;
    int cantidad_digitos = 0;

    while (numero != 0)
    {
        numero = numero / 10;
        cantidad_digitos+=1;
    }
    cout << "Cantidad de digitos: " << cantidad_digitos;
    return 0;
}