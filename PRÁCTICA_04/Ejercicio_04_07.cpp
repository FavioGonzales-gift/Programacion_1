// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 15/09/2025
// Número de ejercicio: 7

#include <iostream>

using namespace std;

void cambio_variables(int &num_n, int &num_m);
int mcd_euclides(int n_num, int m_num);
int minimo_comun_multiplo(int n, int m);

int main()
{
    int numero_n;
    int numero_m;
    cout << "Ingrese el primer numero: ";
    cin >> numero_n;
    cout << "Ingrese el segundo numero: ";
    cin >> numero_m;

    if (numero_m > numero_n)
    {
        // Cambiar variables para que n siempre sea el mayor
        cambio_variables(numero_n, numero_m);
    }
    
    int mcd = mcd_euclides(numero_n, numero_m);
    cout << "El mcd es de: " << mcd;
    cout << endl;

    int mcm = minimo_comun_multiplo(numero_n, numero_m);
    cout << "El mcm es de: " << mcm;
    return 0;
}

void cambio_variables(int &num_n, int &num_m)
{
    int c = num_n;
    num_n = num_m;
    num_m = c;
}

int mcd_euclides(int n_num, int m_num)
{
    int residuo = 1;
    int cociente = 0;
    while (residuo != 0)    
    {
        residuo = n_num % m_num;
        cociente = n_num / m_num;
        n_num = m_num;
        if (residuo != 0)
        {
            m_num = residuo;
        }
    }
    return m_num;
}

int minimo_comun_multiplo(int n, int m)
{
    return (n * m) / mcd_euclides(n, m);
}
