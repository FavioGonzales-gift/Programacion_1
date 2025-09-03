// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 28/08/2025
// Número de ejercicio: 24

#include <iostream>

using namespace std;

int main()
{
    int opcion = 0;

    do
    {
        cout << "1. Opcion 1 \n2. Opcion 2 \n3. Opcion 3 \n0. Salir" << endl;
        cout << "Elija una opcion: ";
        cin >> opcion;


        switch (opcion)
        {
        case 1:
            cout << "Seleeciono opcion 1" << endl;
            break;;
        case 2:
            cout << "Seleeciono opcion 2" << endl;
            break;
        case 3:
            cout << "Seleeciono opcion 3" << endl;
            break;;
        case 0:
            cout << "Saliendo...";
            break;
        default:
            cout << "Opcion no válida";
            break;
        }
    } while (opcion != 0);
    
    return 0;
}