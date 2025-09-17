// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 15/09/2025
// Número de ejercicio: 1

#include <iostream>

using namespace std;

void intercambiar_valores(int &valor1, int &valor2);

int main()
{
    int primer_valor = 0;
    int segundo_valor = 0;
    cout << "Ingrese el primer valor: ";
    cin >> primer_valor;
    cout << "Ingrese el segundo valor: ";
    cin >> segundo_valor;

    cout << "Valores antes del intercambio: " << endl;
    cout << "x = " << primer_valor << "; y = " << segundo_valor << endl;

    intercambiar_valores(primer_valor, segundo_valor);

    cout << "Valores despues del intercambio: " << endl;
    cout << "x = " << primer_valor << "; y = " << segundo_valor << endl;
    return 0;
}

void intercambiar_valores(int &valor1, int &valor2)
{
    int valor_temporal = valor1;
    valor1 = valor2;
    valor2 = valor_temporal;
}