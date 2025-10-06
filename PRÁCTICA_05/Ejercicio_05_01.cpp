// Materia: Programación I, Paralelo 4
// Autor: Favio Ignacio Gonzales Salazar
// Fecha creación: 01/10/2025
// Número de ejercicio: 1
// Problema planteado:

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

double aleatorio_double(double a, double b);
int aleatorio_int(int a, int b);
char caracter_alfanumerico();

int main()
{
    srand(time(0));

    vector<double> voltajes(100);
    vector<double> temperaturas(50);
    vector<char> alfanumericos(30);
    vector<int> años(100);
    vector<double> velocidades(32);
    vector<double> distancias(1000);

    for(int i=0;i<100;i++) 
    {
        voltajes[i]=aleatorio_double(20,220);
    }
    for(int i=0;i<50;i++) 
    {
        temperaturas[i]=aleatorio_double(0,100);
    }
    for(int i=0;i<30;i++) 
    {
        alfanumericos[i]=caracter_alfanumerico();
    }
    for(int i=0;i<100;i++) 
    {
        años[i]=aleatorio_int(1990,2025);
    }
    for(int i=0;i<32;i++) 
    {
        velocidades[i]=aleatorio_double(10,300);
    }
    for(int i=0;i<1000;i++) 
    {
        distancias[i]=aleatorio_double(1,1000);
    }

    cout<<"Primeros 5 voltajes:"<<endl;
    for(int i=0;i<5;i++) 
    {
        cout<<voltajes[i]<<" ";
    }
    cout<<"\nPrimeros 5 temperaturas:"<<endl;
    for(int i=0;i<5;i++) 
    {
        cout<<temperaturas[i]<<" ";
    }
    cout<<"\nCaracteres alfanumericos:"<<endl;
    for(int i=0;i<30;i++) 
    {
        cout<<alfanumericos[i]<<" ";
    }
    cout<<"\nPrimeros 5 años:"<<endl;
    for(int i=0;i<5;i++) 
    {
        cout<<años[i]<<" ";
    }
    cout<<"\nPrimeros 5 velocidades:"<<endl;
    for(int i=0;i<5;i++) 
    {
        cout<<velocidades[i]<<" ";
    }
    cout<<"\nPrimeros 5 distancias:"<<endl;
    for(int i=0;i<5;i++) 
    {
        cout<<distancias[i]<<" ";
    }
    cout<<endl;
    return 0;
}

double aleatorio_double(double a, double b)
{
    return a + (rand()/(double)RAND_MAX)*(b-a);
}

int aleatorio_int(int a, int b)
{
    return a + rand()%(b-a+1);
}

char caracter_alfanumerico()
{
    string caracter = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    int posicion = aleatorio_int(0, caracter.size()-1);
    return caracter[posicion];
}
