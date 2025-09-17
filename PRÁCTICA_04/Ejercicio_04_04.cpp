// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 15/09/2025
// Número de ejercicio: 4

#include <iostream>

using namespace std;

double convertir_gradosAfarenheit(double celsius);
double mayor_temperatura(double temp1, double temp2);

int main()
{
    system("chcp 65001");
    double grados_celsius;
    double grados_farenheit;
    cout << "Ingrese el valor de los grados celsius: ";
    cin >> grados_celsius;

    // Conversion de grados
    grados_farenheit = convertir_gradosAfarenheit(grados_celsius);
    cout << "La conversion de grados celsius a farenheit es de: " << grados_farenheit << endl;
    cout << endl;

    double temperatura1;
    double temperatura2;
    cout << "Ingrese la primera temperatura (en ° celsius): ";
    cin >> temperatura1;
    cout << "Ingrese la segunda temperatura (en ° celsius): ";
    cin >> temperatura2;
    double mayor = mayor_temperatura(temperatura1, temperatura2);
    cout << "La mayor temperatura es: " << mayor << "°C";
    return 0;
}

double convertir_gradosAfarenheit(double celsius)
{
    return (9.0/5.0 * celsius) + 32.0;
}

double mayor_temperatura(double temp1, double temp2)
{
    if (temp1 > temp2)
    {
        return temp1;
    }
    else
    {
        return temp2;
    }
    
    
}