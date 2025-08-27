// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 28/08/2025
// Número de ejercicio: 11

#include <iostream>

using namespace std;

int main()
{
    int mes = 0;
    cout << "Ingrese un mes del anio: ";
    cin >> mes;

    // Designacion de mes con el numero
    switch (mes)
    {
    case 1:
        cout << "Enero";
        break;
    case 2:
        cout << "Febrero";
        break;
    case 3:
        cout << "Marzo";
        break;
    case 4:
        cout << "Abril";
        break;
    case 5:
        cout << "Mayo";
        break;
    case 6:
        cout << "Junio";
        break;
    case 7:
        cout << "Julio";
        break;
    case 8:
        cout << "Agosto";
        break;
    case 9:
        cout << "Septiembre";
        break;
    case 10:
        cout << "Octubre";
        break;
    case 11:
        cout << "Noviembre";
        break;
    case 12:
        cout << "Diciembre";
        break;
    default:
        cout << "Valor de mes incorrecto";
        break;
    }

    return 0;
}