// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Fecha creación: 15/10/2024
// Número de ejercicio: 6

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int GenerarAleatorios(int min,int max);
void Mostrar(int matr[100][100],int tam1, int tam2);

int main()
{
    srand(time(0));
    system("chcp 65001");
    int N=0;
    int M=0;
    cout<<"Ingrese el valor de N: ";
    cin>>N;
    cout<<"Ingrese el valor de M: ";
    cin>>M;
    int matriz_1[100][100];
    int matriz_2[100][100];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            matriz_1[i][j]=GenerarAleatorios(0,9);
        }
    }
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            matriz_2[i][j]=matriz_1[j][i];
        }
    }
    cout<<"La matriz original es: "<<endl;
    Mostrar(matriz_1,N,M);
    cout<<"La matriz traspuesta es: "<<endl;
    Mostrar(matriz_2,M,N);
    return 0;
}

int GenerarAleatorios(int min,int max)
{
    return (rand()%(max-min+1))+min;
}

void Mostrar(int matr[100][100],int tam1, int tam2)
{
    for (int i = 0; i < tam1; i++)
    {
        for (int j = 0; j < tam2; j++)
        {
            cout<<matr[i][j]<<" ";
        }
        cout<<endl;
    }
}