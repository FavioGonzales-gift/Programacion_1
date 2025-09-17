// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 15/09/2025
// Número de ejercicio: 2

#include <iostream>
#include <cmath>

using namespace std;

double calcular_volumen(double radio, double altura);

int main()
{
    double radio;
    double altura = 10.0;
    cout << "Ingrese el valor del radio: ";
    cin >> radio;

    double volumen = calcular_volumen(radio, altura);
    cout << "El valor del volumen es: " << volumen;

    return 0;
}

double calcular_volumen(double radio, double altura)
{
    return M_PI * pow(radio, 2) * altura;
}