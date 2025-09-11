// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 10/09/2025
// Número de ejercicio: 6

#include <iostream>

using namespace std;

bool bisiesto(int anio);
int diasEnMes(int anio, int mes);

int main() 
{
    system("chcp 65001");
    int anio, mes;
    cout << "Ingrese el año: ";
    cin >> anio;
    cout << "Ingrese el mes (1-12): ";
    cin >> mes;
    int dias = diasEnMes(anio, mes);

    if (dias == -1)
        cout << "Mes invalido." << endl;
    else
        cout << "El mes " << mes << " del año " << anio << " tiene " << dias << " dias." << endl;

    return 0;
}

bool bisiesto(int anio) 
{
    return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}

// Cantidad de días
int diasEnMes(int anio, int mes) 
{
    switch (mes) 
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return bisiesto(anio) ? 29 : 28;
        default:
            return -1; 
    }
}