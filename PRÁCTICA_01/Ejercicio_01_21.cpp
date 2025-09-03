// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 28/08/2025
// Número de ejercicio: 21

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
    int resultado = 0;
    int signo = 1;

    if (numero1 < 0)
    {
        numero1 = -numero1;
        signo*=-1;
    }
    
    if (numero2 < 0)
    {
        numero2=-numero2;
        signo *= -1;
    }
    
    for (int i = 0; i < numero2; i++)
    {
        resultado+=numero1;
    }
    resultado*=signo;
    cout << "Resultado: " << resultado;

    return 0;
}