/*Realizar un programa en c++ que verifique si la palabra ingresada es mayor a
10 caracteres o no y si la longitud es par o impar.*/
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    cout << endl << "Verificar si una palabra tiene mas o menos de 10 caracteres y definir si su longitud es par o impar" << endl;
    string palabra = "";
    int mod = 0;
    cout << "Ingrese una palabra" <<endl;
    cin >> palabra;
    int size = palabra.length();

    if(size == 10)
    {
        cout << "La palabra contiene 10 caracteres" << endl;
    }
    else if(size > 10)
    {
        cout << "La palabra contiene mas de 10 caracteres" << endl;
    }
    else
    {
        cout << "La palabra contiene menos de 10 caracteres" << endl; 
    }
    
    cout << "La palabra contiene exactamente " << size << " caracteres" << endl; //solo para confirmar

    mod = palabra.length() % 2;
    if (mod == 0)
    {
        cout << "La cantidad de caracteres es par" << endl; 
    }
    else
    {
        cout << "La cantidad de caracteres es impar" << endl;
    }
    return 0;
}
    