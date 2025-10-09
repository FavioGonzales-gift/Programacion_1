// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar.
// Fecha creación: 08/10/2024
// Número de ejercicio: 10
// Problema planteado:

#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto, resultado = "";

    cout << "Ingrese una cadena: ";
    getline(cin, texto);

    for (char c : texto) 
    {
        if (!isdigit(c)) 
        {   
            resultado += c;
        }
    }

    cout << "Cadena sin digitos: " << resultado << endl;

    return 0;
}