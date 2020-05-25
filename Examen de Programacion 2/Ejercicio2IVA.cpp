#include <iostream>
using namespace std; 

int main(void)
{
    cout << endl << "Calculo del IVA por pais" << endl;
    int opcion;
    float monto; 
    float iva; 
    cout << "Menu de opciones: " << endl; 
    cout << "1) El Salvador" << endl;
    cout << "2) Guatemala" << endl, 
    cout << "3) Honduras" << endl;
    cout << "4) Espana" << endl;
    cout << "Seleccione el numero de opcion del pais donde se encuentra" << endl;
    cin >> opcion; 
    switch (opcion)
    {
    case 1:
    cout << "Ingrese el monto al que desea calcular el IVA" << endl;
    cin >> monto; 
    iva = monto * 0.13;
    cout << "El IVA es: $" << iva; 
    break; 
    case 2: 
    cout << "Ingrese el monto al que desea calcular el IVA" << endl;
    cin >> monto; 
    iva = monto * 0.09;
    cout << "El IVA es: $" << iva; 
    break; 
   case 3: 
    cout << "Ingrese el monto al que desea calcular el IVA" << endl;
    cin >> monto; 
    iva = monto * 0.15;
    cout << "El IVA es: $" << iva; 
    break; 
    case 4: 
    cout << "Ingrese el monto al que desea calcular el IVA" << endl;
    cin >> monto; 
    iva = monto * 0.20;
    cout << "El IVA es: $" << iva;  //simbolo de dolar porque el del euro no funciona
    break; 
    default:
    cout << "El numero ingresado no es valido" << endl; 
        break;
    }
    return 0;
}