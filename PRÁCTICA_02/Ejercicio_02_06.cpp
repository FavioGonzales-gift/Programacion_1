// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 07/09/2025
// Número de ejercicio: 6

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int cantidad_numeros = 0;
    cout << "Ingrese la cantidad de numeros a generar: ";
    cin >> cantidad_numeros;
    int numeros_primos = 0;

    for (int i = 1; i <= cantidad_numeros; i++)
    {
        int numero = rand() % 10000 + 1;
        cout << numero << " ";

        // Determinar si el numero es primo
        bool primo = true;

        if (numero <= 1)
        {
            primo = false;
        }
        else
        {
            for (int i = 2; i < numero; i++)
            {
                if (numero % i == 0)
                {
                    primo = false;
                    break;
                }
            }
            
        }
        
        if (primo)
        {
            numeros_primos += 1;
        }
        
    }

    cout << endl;
    cout << "Cantidad de numeros primos: " << numeros_primos;
    return 0;
}