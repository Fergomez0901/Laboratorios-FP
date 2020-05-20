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
    char p[palabra.length()-1];   //palabra to char arra.... ahora me doy cuenta que no es necesario :/

    if(sizeof(p) == 10)
    {
        cout << "La palabra tiene 10 caracteres" << endl; 
    }
    else if (sizeof(p) > 10)
    {
        cout << "La palabra tiene mas de 10 caracteres" << endl;
        cout << "La palabra contiene exactamente " << sizeof(p) << " caracteres" << endl; //solamente para confirmar
    }
    else
    {
        cout << "La palabra tiene menos de 10 caracteres" << endl; 
        cout << "La palabra contiene exactamente " << sizeof(p) << " caracteres" << endl; //solamente para confirmar
    }
    
    mod = sizeof(p) % 2;
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