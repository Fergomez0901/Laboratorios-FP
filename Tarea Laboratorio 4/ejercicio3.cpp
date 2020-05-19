//Realizar un programa en c++ que verifique si un número es positivo, negativoo cero.
#include <iostream>
using namespace std;

int main(void)
{
    cout << endl << "Verificar si un numero es positivo, negativo o 0" << endl;

    int numero;

    cout << "Ingrese un numero" << endl;
    cin >> numero;

    if(numero > 0)
    {
        cout << "El numero " << numero << " es positivo" << endl;
    }
    else if(numero < 0)
    {
        cout << "El numero " << numero << " es negativo" << endl;
    }
    else
    {
        cout << "El numero es 0"<<endl; 
    }
    return 0; 
}