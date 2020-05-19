//Realizar un programa en c++ que verifique si un número es par o impar.
#include <iostream>
using namespace std;

int main(void)
{
    cout << endl << "Verificar si un numero es par o impar" << endl << endl; 

    int numero, mod;

    cout << "Ingrese un numero: " << endl; 
    cin >> numero; 

    mod = numero % 2;

    if (mod == 0)
    {
        cout << "El numero " << numero << " es par" << endl;
    }
    else
    {
        cout << "El numero " << numero << " es impar";
    }
    return 0;
}
