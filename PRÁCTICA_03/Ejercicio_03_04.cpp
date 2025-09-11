// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 10/09/2025
// Número de ejercicio: 4

#include <iostream>

using namespace std;

float calcular_IMC(float peso, float altura);

int main() 
{
    float peso = 0;
    float altura = 0;;
    cout << "Ingrese su peso en kilogramos: ";
    cin >> peso;
    cout << "Ingrese su altura en metros: ";
    cin >> altura;
    float imc = calcular_IMC(peso, altura);

    cout << "Su IMC es: " << imc << endl;

    return 0;
}

// Calcular el IMC
float calcular_IMC(float peso, float altura) 
{
    return peso / (altura * altura);
}