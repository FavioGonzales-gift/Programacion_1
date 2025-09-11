// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 10/09/2025
// Número de ejercicio: 10

#include <iostream>

using namespace std;

double calcular_tarifa (double km);

int main()
{
    double recorrido;
    cout << "Ingrese el recorrido del viaje en taxi" << endl;
    cin >> recorrido;
    
    double costo = calcular_tarifa(recorrido);
    
    cout << "El costo del viaje es de: " << costo << endl;
    
    return 0;
}

double calcular_tarifa (double km)
{
    double costo = 10.0;
    costo += (km * 2.0);
    if(km > 10.0){
        costo -= (costo * 0.1);
    }
    
    return costo;
}

