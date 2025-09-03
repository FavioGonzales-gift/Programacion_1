// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 28/08/2025
// Número de ejercicio: 22

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

    if (numero1==0 || numero2==0)
    {
        cout << "No hay multiplos de 0";
    }
    else
    {
        if (numero1 % numero2 == 0 || numero2 % numero1 == 0)
        {
            cout << "Los numeros son multiplos entre si";
        }
        else
        {
            cout << "Los numeros no son multiplos";
        }
        
    }
    
    return 0;
}