// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 22/10/2025
// Número de ejercicio: 8

#include <iostream>

using namespace std;

int Funcion(int n);

int main()
{
    int num=0;
    cout<<"Ingrese un número: ";
    cin>>num;
    cout<<Funcion(num);
    return 0;
}

int Funcion(int n)
{
    cout<<n<<"  ";
    while (n>0)
    {
        if (n==2)
        {
            return 1;
        }
        else
        {
            if (n%2==0)
            {
                return Funcion(n/2);
            }
            else
            {
                return Funcion((n*3)+1);
            }
        }
    }
}