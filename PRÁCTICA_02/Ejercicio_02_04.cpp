// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 07/09/2025
// Número de ejercicio: 4

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    //Generar un numero aleatorio hasta 50
    int numero_secreto = rand() % 51; 
    int intento_usuario = 0;
    int min = 0;
    int max = 50;
    cout << "Estoy pensando un numero entre 0 y 50" << endl;

    for (int i = 1; i <= 5; i++)
    {
        cout << "Intento " << i << endl;
        cin >> intento_usuario;

        if (intento_usuario == numero_secreto)
        {
            cout << "Felicitaciones... Adivinaste el numero";
            return 0;
        }
        else
        {
            if (intento_usuario < numero_secreto)
            {
                min = intento_usuario;
            }
            else
            {
                max = intento_usuario;
            }
            if (i < 5)
            {
                cout << "El numero esta entre " << min << " y " << max << endl;
            }   
        }
    }
    
    cout << "No adivinaste el numero\nEl numero era: " << numero_secreto;
    
    return 0;
}