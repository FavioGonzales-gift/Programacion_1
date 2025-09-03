// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 28/08/2025
// Número de ejercicio: 17

#include <iostream>

using namespace std;

int main()
{
    int numero1 = 0;
    cout << "Ingrese el primer numero: ";
    cin >> numero1;
    int numero2 = 0;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;
    int suma_divisores1 = 0;
    int suma_divisores2 = 0;

    for (int i = 1; i < numero1; i++)
    {
        if (numero1 % i == 0)
        {
            suma_divisores1+=i;
        }
    }
    for (int i = 1; i < numero2; i++)
    {
        if (numero2 % i == 0)
        {
            suma_divisores2+=i;
        }
    }
    
    if (suma_divisores1==numero2 && suma_divisores2==numero1)
    {
        cout << "Los numeros son amigos";
    }
    else
    {
        cout << "Los numeros no son amigos";
    }
    return 0;
}