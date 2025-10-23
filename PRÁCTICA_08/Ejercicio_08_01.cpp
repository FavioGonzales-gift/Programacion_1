// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 22/10/2025
// Número de ejercicio: 1

#include <iostream>

using namespace std;

int suma_digitos(int numero);

int main()
{
    int num = 0;
    cout << "Ingrese un numero: ";
    cin >> num;
    cout << "La suma de los digitos es: " << suma_digitos(num);
    return 0;
}

int suma_digitos(int numero)
{
    if (numero==0)
    {
        return 0;
    }
    else
    {
        int digito = 0;
        digito = numero % 10;
        return digito + suma_digitos(numero/10);
    }
}