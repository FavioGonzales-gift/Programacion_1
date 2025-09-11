// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 10/09/2025
// Número de ejercicio: 3

#include <iostream>

using namespace std;

bool Capicua(int numero);

int main() 
{
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    if (Capicua(num)) 
    {
        cout << "El numero " << num << " es capicua." << endl;
    } 
    else 
    {
        cout << "El numero " << num << " no es capicua." << endl;
    }

    return 0;
}

// Verificar numero capicua
bool Capicua(int numero) 
{
    int original = numero;
    int invertido = 0;

    while (numero > 0) 
    {
        int digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero /= 10;
    }

    return original == invertido;
}