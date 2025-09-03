// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 28/08/2025
// Número de ejercicio: 25

#include <iostream>

using namespace std;

int main()
{
    int numero = 0;
    char si_no;

    do
    {
        cout << "Ingrese un numero: ";
        cin >> numero;
        
        cout << "La tabla de multiplicar hasta el 10 es: " << endl;
        for (int i = 1; i <= 10; i++)
        {
            cout << numero << " * " << i << " = " << numero*i << endl;
        }
        cout << "¿Desea calcular otra tabla? (s/n)" << endl;
        cin >> si_no;
    } while (si_no == 's');
    
    return 0;
}