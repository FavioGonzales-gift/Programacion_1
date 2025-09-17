// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 15/09/2025
// Número de ejercicio: 8

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void suma_total(int numero_productos, double &suma);
double calcular_IVA(double suma);

int main()
{
    // Generar semilla aleatoria
    srand(time(NULL));
    int cantidad_productos = 0;
    cout << "Ingrese la cantidad de productos vendidos en el día: ";
    cin >> cantidad_productos;
    double suma_precio = 0;

    suma_total(cantidad_productos, suma_precio);
    cout << "La suma total de los productos es: Bs. " << suma_precio << endl;

    if (suma_precio > 2500)
    {
        double descuento = suma_precio * 0.05;
        cout << "El descuento es de: " << descuento << endl;
        suma_precio = suma_precio - descuento;
        cout << "La suma total menos el descuento es de: Bs. " << suma_precio << endl;
    }

    double IVA = calcular_IVA(suma_precio);
    cout << "El monto de IVA a pagar a impuestos Nacionales es de: Bs. " << IVA;

    return 0;
}

void suma_total(int numero_productos, double &suma)
{
    for (int i = 1; i <= numero_productos; i++)
    {
        int precio_producto = 20 + rand() % (50 - 20 + 1);
        suma = suma + precio_producto;
    }   
}

double calcular_IVA(double suma)
{
    return suma * 0.13;
}