// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 07/09/2025
// Número de ejercicio: 5

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
    long long suma = 0;
    int mayor = 0;
    int menor = 1001;
    int promedio = 0;

    for (int i = 1; i <= cantidad_numeros; i++)
    {
        //Generar numeros aleatorios hasta 1000
        int numero = rand() % 1000 + 1;
        suma += numero;

        if (numero > mayor)
        {
            mayor = numero;
        }
        if (numero < menor)
        {
            menor = numero;
        }
    }

    promedio = suma / cantidad_numeros;

    cout << "Sumatoria de todos los numeros: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Mayor valor generado: " << mayor << endl;
    cout << "Menor valor generado: " << menor << endl;
    
    return 0;
}