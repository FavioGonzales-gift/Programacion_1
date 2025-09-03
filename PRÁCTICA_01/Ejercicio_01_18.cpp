// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 28/08/2025
// Número de ejercicio: 18

#include <iostream>

using namespace std;

int main()
{
    int contador = 0;   
    int numero = 2;     

    cout << "Los primeros 100 numeros primos son:" << endl;
    // Contar los 100 primeros numeros primos
    while (contador < 100) {
        bool primo = true;

        for (int i = 2; i < numero; i++) {
            if (numero % i == 0) {
                primo = false;
                break;
            }
        }

        if (primo) {
            cout << numero << " ";
            contador+=1;
        }

        numero+=1;
    }

    cout << endl;
    return 0;
}