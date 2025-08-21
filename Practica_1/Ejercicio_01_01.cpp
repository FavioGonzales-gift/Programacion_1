#include <iostream>

using namespace std;

int main()
{
    int valor1 = 0;
    int valor2 = 0;
    cout << "Ingrese el valor 1: ";
    cin >> valor1;
    cout << "Ingrese el valor 2: ";
    cin >> valor2;
    if (valor2 > valor1)
    {
        cout << valor2 << " es mayor a " << valor1;
    }
    else 
    {
        if (valor1 == valor2)
        {
            cout << valor2 << " es igual a " << valor1;
        }
        else
        {
            cout << valor2 << " es menor a " << valor1;
        }
        
        
    }
    return 0;
}