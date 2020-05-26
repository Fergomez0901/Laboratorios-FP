#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    cout << endl << "Calculo del IVA por pais" << endl;
    string opcion;
    float monto; 
    float iva; 

    cout << "Menu de opciones: " << endl; 
    cout << "1) ESA" << endl;
    cout << "2) Guatemala" << endl, 
    cout << "3) Honduras" << endl;
    cout << "4) Espana" << endl;
    cout << "Seleccione el pais donde se encuentra" << endl;
    cin >> opcion;

    if(opcion == "ESA" || opcion == "esa")
    {
        cout << "Ingrese el monto al que desea calcular el IVA" << endl;
        cin >> monto; 
        iva = monto * 0.13;
        cout << "El IVA es: $" << iva; 
    }
    else if(opcion == "Guatemala" || opcion == "guatemala")
    {
        cout << "Ingrese el monto al que desea calcular el IVA" << endl;
        cin >> monto; 
        iva = monto * 0.09;
        cout << "El IVA es: $" << iva; 
    }
    else if(opcion == "Honduras" || opcion == "honduras")
    {
        cout << "Ingrese el monto al que desea calcular el IVA" << endl;
        cin >> monto; 
        iva = monto * 0.15;
        cout << "El IVA es: $" << iva; 
    }
    else if(opcion == "Espana" || opcion == "espana")
    {
        cout << "Ingrese el monto al que desea calcular el IVA" << endl;
        cin >> monto; 
        iva = monto * 0.20;
        cout << "El IVA es: $" << iva; //$ porque no funcina el simbolo de euro
    }
    return 0;
}