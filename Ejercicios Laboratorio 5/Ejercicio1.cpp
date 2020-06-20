#include <iostream>
using namespace std;

int main (void)
{
    int n, unidad, decena, centena, millar; 
    cout << endl << "Caluclo de las unidades, deceneas, centenas y millares que tiene un numero entero determinado" << endl;
    cout << "Ingrese un numero: (Maximo 4 digitos)" << endl; 
    cin >> n;

    if(n > 0 && n < 10)
    {
        unidad = n;
        cout << "El numero tiene: " << n << " unidades." << endl; 
    }
    else if(n > 9 && n < 100)
    {
        decena = n / 10;
        unidad = n - (decena * 10);

        cout << "El numero tiene: " << decena << " decenas." << endl; 
        cout << "El numero tiene: " << unidad << " unidades." << endl; 
    }
    else if(n > 99 && n < 1000)
    {
        centena = n / 100;
        decena = (n - (centena * 100)) / 10;
        unidad = n - (centena * 100 + decena * 10);

        cout << "El numero tiene: " << centena << " centenas." << endl;
        cout << "El numero tiene: " << decena << " decenas." << endl;
        cout << "El numero tiene: " << unidad << " unidades." << endl;
    }
    else if(n > 999 && n < 10000)
    {
        millar = n / 1000;
        centena = (n - (millar * 1000)) / 100;
        decena = (n - (millar * 1000 + centena * 100))/10;
        unidad = (n - (millar * 1000 + centena * 100 + decena * 10));

        cout << "El numero tiene: " << millar << " millares" << endl; 
        cout << "El numero tiene: " << millar << " millares" << endl; 
        cout << "El numero tiene: " << centena << " centenas." << endl;
        cout << "El numero tiene: " << decena << " decenas." << endl;
        cout << "El numero tiene: " << unidad << " unidades." << endl;
    }

    return 0; 
}