// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 28/08/2025
// Número de ejercicio: 3

#include <iostream>

using namespace std;

int main()
{
    // Pedir base y altura al usuario
    int base = 0;
    int altura = 0;
    int area_triangulo = 0;
    cout << "Ingrese el valor de la base: ";
    cin >> base;
    cout << "Ingrese el valor de la altura: ";
    cin >> altura;
    area_triangulo = area_triangulo + (base*altura/2);
    cout << "El área del triángulo es: " << area_triangulo;
    return 0;
}