// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 15/09/2025
// Número de ejercicio: 3

#include <iostream>

using namespace std;

void modificar_valores(int num1, int &num2);

int main()
{
    int numero1;
    int numero2;
    cout << "Ingrese el primer valor: ";
    cin >> numero1;
    cout << "Ingrese el segundo valor: ";
    cin >> numero2;

    cout << endl;

    modificar_valores(numero1, numero2);

    cout << endl;
    cout << "Despues de la funcion: " << endl;
    cout << "numero 1: " << numero1 << endl;
    cout << "Numero 2: " << numero2 << endl;

    return 0;
}

void modificar_valores(int num1, int &num2)
{
    num1 = num1 * 2;
    num2 = num2 + 10;

    cout << "Dentro la funcion: " << endl;
    cout << "Numero 1: " << num1 << endl;
    cout << "Numero 2: " << num2 << endl;
}