#include <iostream>
using namespace std;

int main()
{
    int edad = 0;
    do
    {
        cout << "Ingrese la edad: ";
        cin >> edad;
    } while (edad < 0 || edad >= 120);
    cout << "Ingreso la edad correcta";
    return 0;
}