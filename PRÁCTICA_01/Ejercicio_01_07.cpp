// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 28/08/2025
// Número de ejercicio: 7

#include <iostream>

using namespace std;

int main()
{
    // Pedir letra
    char letra;
    cout << "Ingrese una letra: ";
    cin >> letra;
    if ((letra >= 'A' && letra <= 'Z') || (letra >= 'a' && letra <= 'z'))
    {
        // Conversion de mayuscula a minuscula
        if (letra >= 'A' && letra <= 'Z')
        {
            letra = letra +32;
        }
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
        {
            cout << "La letra es una vocal" << endl;
        }
        else
        {
            cout << "La letra es una consonante" << endl;
        }
    }
    else
    {
        cout << "el caracter ingresado es especial" << endl;
    }
        return 0;
    }
    
