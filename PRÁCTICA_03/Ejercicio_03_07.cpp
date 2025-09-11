// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 10/09/2025
// Número de ejercicio: 7

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int generar_altura();
int generar_edad();

int main() 
{
    system("chcp 65001");
    srand(time(0)); 

    int cantidad_alumnos;
    cout << "Ingrese la cantidad de alumnos: ";
    cin >> cantidad_alumnos;
    int suma_edades = 0;
    int suma_alturas = 0;
    int mayores = 0; 
    int altos = 0;
    float edad_media = 0;
    float altura_media = 0;

    for (int i = 1; i <= cantidad_alumnos; i++) 
    {
        int edad = generar_edad();
        int altura = generar_altura();

        suma_edades += edad;
        suma_alturas += altura;

        if (edad > 18)
            mayores += 1;
        if (altura > 175)
            altos += 1;
    }

    edad_media = suma_edades / cantidad_alumnos;
    altura_media = suma_alturas / cantidad_alumnos;

    cout << "\nEdad media: " << edad_media << " años" << endl;
    cout << "Altura media: " << altura_media << " cm" << endl;
    cout << "Cantidad de alumnos mayores de 18: " << mayores << endl;
    cout << "Cantidad de alumnos con altura > 175 cm: " << altos << endl;

    return 0;
}

// Generación de alturas y edades
int generar_edad() 
{
    return rand() % 35 + 1; 
}

int generar_altura() 
{
    return rand() % 81 + 120; 
}