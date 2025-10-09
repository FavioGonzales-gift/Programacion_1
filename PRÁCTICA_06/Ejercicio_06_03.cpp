// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar.
// Fecha creación: 08/10/2024
// Número de ejercicio: 3
// Problema planteado:

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

void Mostrar(string nom[], string ape[], vector<int>ed, int N);

int main()
{
    srand(time(0));
    string nombres[10] = {"Belen", "Josue", "Luciana", "Josep", "Juan", "Lucia", "Waldo", "Sergio", "Ithalo", "Pedro"};
    string apellidos[10] = {"Manrrique", "Gomez", "Lopez", "Ticona", "Villa", "Vaca", "Claure", "Vargas", "Diaz", "Moldez"};
    vector<int> edades = {20, 22, 25, 30, 19, 27, 18, 21, 29, 24};
    int n;
    cout << "Ingrese la cantidad de combinaciones: ";
    cin >> n;
    Mostrar(nombres, apellidos, edades, n);
    return 0;
}

void Mostrar(string nom[], string ape[], vector<int>ed, int N)
{
    int posicion_nom = 0;
    int posicion_ape = 0;
    int posicion_ed = 0;
    for (int i = 0; i < N; i++)
    {
        posicion_nom = rand() % 10;
        posicion_ape = rand() % 10;
        posicion_ed = rand() % 10;

        cout << "Combinacion " << i+1 << " -> " << nom[posicion_nom] << " " << ape[posicion_ape] << ": " << ed[posicion_ed] << " anios" << endl;
    }
}