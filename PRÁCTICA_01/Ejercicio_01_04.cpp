// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 28/08/2025
// Número de ejercicio: 4

#include <iostream>

using namespace std;

int main()
{
    // Pedir radio de la circunferencia al usuario
    const double PI=3.14159;
    float radio = 0;
    float volumen_esfera = 0;
    cout << "Ingrese el valor del radio: ";
    cin >> radio;
    volumen_esfera=(4.0/3.0)*PI*radio*radio*radio;
    cout << "El volumen de la esfera: " << volumen_esfera;

    return 0;
}