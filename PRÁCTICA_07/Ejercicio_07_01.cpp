// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Fecha creación: 15/10/2024
// Número de ejercicio: 1

#include <iostream>

using namespace std;

void Mostrar(int matr[100][100],int tam);

int main ()
{
    system("chcp 65001");
    int n=0;
    int numeros=0;
    cout<<"Ingrese el tamaño de la matriz n x n: ";
    cin>>n;
    int matriz[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<"ingrese el valor "<<i+1<<","<<j+1<<": ";
            cin>>matriz[i][j];
        }
    }
    cout<<"La matriz original es: "<<endl;
    Mostrar(matriz,n);
    int aux;
    
    for (int j = 0; j < n; j++)
    {
        aux=matriz[0][j];
        matriz[0][j]=matriz[n-1][j];
        matriz[n-1][j]=aux;
    }
    cout<<"La matriz cambiada es: "<<endl;
    Mostrar(matriz,n);
    return 0;
}

void Mostrar(int matr[100][100],int tam)
{
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            cout<<matr[i][j]<<" ";
        }
        cout<<endl;
    }
}