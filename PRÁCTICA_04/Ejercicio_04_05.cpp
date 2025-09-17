// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Carnet: 12863620
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 15/09/2025
// Número de ejercicio: 5

#include <iostream>

using namespace std;

double salario_trabajador(int horas, double t_hora);
double bonificacion(double salario_b);

int main()
{
    system("chcp 65001");
    int horas_trabajadas;
    double tarifa_hora;
    double bonificación;
    cout << "Ingrese las horas trabajadas: ";
    cin >> horas_trabajadas;
    cout << "Ingrese la tarifa por hora trabajada: ";
    cin >> tarifa_hora;

    // Calcular salario
    double salario = salario_trabajador(horas_trabajadas, tarifa_hora);
    cout << "Salario: " << salario << endl;

    if (horas_trabajadas > 8)
    {
        cout << "La bonificación sera el 5% del salario" << endl;
        double salario_bonificacion = bonificacion(salario);
        cout << "El salario total con bonificación es de: " << salario_bonificacion;
    }
    
    return 0;
}

double salario_trabajador(int horas, double t_hora)
{
    return horas * t_hora;
}

double bonificacion(double salario_b)
{
    double salario_total;
    salario_total = salario_b + (salario_b * 0.05);
    return salario_total;
}