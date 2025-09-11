// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 10/09/2025
// Número de ejercicio: 1

#include <iostream>
using namespace std;

bool Par(int numero);


int main() 
{
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    if (Par(num)) 
    {
        cout << "El numero " << num << " es par." << endl;
    } 
    else 
    {
        cout << "El numero " << num << " es impar." << endl;
    }

    return 0;
}

// Verificar numero par
bool Par(int numero) 
{
    return numero % 2 == 0;
}