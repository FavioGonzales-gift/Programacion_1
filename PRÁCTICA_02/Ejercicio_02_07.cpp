// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 07/09/2025
// Número de ejercicio: 7

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int cantidad_ninos = 0;
    cout << "Ingrese la cantidad de ninos: ";
    cin >> cantidad_ninos;
    int un_anio = 0;
    int dos_anios = 0;
    int tres_anios = 0;
    int consumo_panales = 0;

    for (int i = 1; i <= cantidad_ninos; i++)
    {
        int edad = rand() % 3 + 1;
        //Separacion por edad

        if (edad == 1)
        {
            un_anio += 1;
        }
        if (edad == 2)
        {
            dos_anios += 1;
        }
        if (edad == 3)
        {
            tres_anios += 1;
        }
    }
    
    consumo_panales = (un_anio * 6) + (dos_anios * 3) + (tres_anios * 2);

    cout << "Ninos de 1 anio: " << un_anio << endl;
    cout << "Ninos de 2 anio: " << dos_anios << endl;
    cout << "Ninos de 3 anio: " << tres_anios << endl;
    cout << "Consumo de panales: " << consumo_panales;

    return 0;
}