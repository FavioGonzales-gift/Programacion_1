// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 15/09/2025
// Número de ejercicio: 6

#include <iostream>

using namespace std;

bool suma_digitos_primo(int num);

int main()
{
    int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;
    
    // Verificar si la suma de digitos generan un numero primo
    if (suma_digitos_primo(numero))
    {
        cout << "La suma de los digitos de " << numero << " SI generan un numero primo.";
    }
    else
    {
        cout << "La suma de los digitos de " << numero << " NO generan un numero primo.";
    }
    
    
    return 0;
}

bool suma_digitos_primo(int num)
{
    int suma_digitos = 0;
    while (num > 0)
    {
        int digito = num % 10;
        suma_digitos = suma_digitos + digito;
        num = num / 10;
    }
    for (int i = 2; i < suma_digitos; i++)
    {
        if (suma_digitos % i == 0)
        {
            return false;
        }
    }
    return true;
}