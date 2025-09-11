// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 10/09/2025
// Número de ejercicio: 11

#include <iostream>

using namespace std;

double retirar_dinero (double saldo, int cantidad);

int main()
{
    double saldo;
    int cantidad;
    cout << "Ingrese el saldo: " << endl;
    cin >> saldo;
    cout << "Ingrese la cantidad a retirar" << endl;
    cin >> cantidad;
    
    double nuevo_saldo = retirar_dinero(saldo, cantidad);
    
    if(nuevo_saldo == 0){
        cout << "No se realizo la transaccion" << endl;
    } else {
        cout << "Su saldo actual es de: " << nuevo_saldo << endl;
    }
    return 0;
}

// Validar retiro de dinero
double retirar_dinero (double saldo, int cantidad)
{
    if(saldo < cantidad){
        cout << "No tiene saldo suficiente" << endl;
        return 0.0;
    }
    
    if(cantidad % 10 != 0){
        cout << "La cantidad no es valida para retirar" << endl;
        return 0.0;
    }
    
    cout << "El retiro es valido" << endl;
    return saldo - cantidad;
}