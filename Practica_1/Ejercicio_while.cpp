#include <iostream>
using namespace std;

int main()
{
    int numero = -1;
    int suma = 0;
    system("chcp 65001");
    system("cls");
    while (numero!=0)
    {
        cout << "Ingrese un número (0 para salir): ";
        cin >> numero;
        suma=suma+numero;
    }
    cout << "La suma es " << suma;
    return 0;
}