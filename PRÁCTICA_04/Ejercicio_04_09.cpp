// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 15/09/2025
// Número de ejercicio: 9

#include <iostream>

using namespace std;

double calculo_sueldo(double sueldo, int anio_antiguedad);
double sueldo_adicional(int cantidad_productos, double precio);

int main()
{
    system("chcp 65001");

    double precio_producto = 0;
    cout << "Ingrese el precio de los productos: ";
    cin >> precio_producto; 

    int cantidad_vendedoras = 0;
    cout << "Ingrese la cantidad de vendedoras: ";
    cin >> cantidad_vendedoras;

    int productos_vendidos = 10;
    double sueldo_basico = 2750.0;

    for (int i = 1; i <= cantidad_vendedoras; i++)
    {
        int antiguedad = 0;
        cout << "Ingrese la antiguedad de la vendedora " << i << " (en anios): ";
        cin >> antiguedad;

        // Calcular sueldo con la antiguedad
        double sueldo_total = calculo_sueldo(sueldo_basico, antiguedad);
        cout << "Sueldo vendedora segun su antiguedad" << i << ": " << sueldo_total << endl;

        double sueldo_extra = sueldo_adicional(productos_vendidos, precio_producto);
        cout << "Comisión: " << sueldo_extra << endl;
        
        sueldo_total = sueldo_total + sueldo_extra;
        cout << "Sueldo toal de la vendedora " << i << ": " << sueldo_total << endl;

        cout << endl;
    }

    return 0;
}

double calculo_sueldo(double sueldo, int anio_antiguedad)
{
    double sueldo_completo = 0;
    for (int i = 1; i <= anio_antiguedad; i++)
    {
        sueldo = sueldo + (sueldo * 0.1);
    }
    sueldo_completo = sueldo;
    return sueldo_completo;
}

double sueldo_adicional(int cantidad_productos, double precio)
{
    double monto_vendido = 0;
    monto_vendido = cantidad_productos * precio;
    return monto_vendido * 0.1;
}