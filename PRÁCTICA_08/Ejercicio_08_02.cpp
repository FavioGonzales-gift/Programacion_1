// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 22/10/2025
// Número de ejercicio: 2

#include <iostream>

using namespace std;

int Potencia(int num, int exponente);

int main()
{
    int base=0;
    int n=0;
    cout<<"Ingrese la base: ";
    cin>>base;
    cout<<"Ingrese el exponente: ";
    cin>>n;
    cout << "Potencia: " << Potencia(base, n);
    return 0;
}

int Potencia(int num, int exponente)
{
    if (exponente == 0)
    {
        num=1;
        return num;
    }
    else
    {
        exponente -= 1;
        return num * Potencia(num, exponente);
    }
}