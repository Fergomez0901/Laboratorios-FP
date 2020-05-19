//Realizar un programa en c++ que verifique si la palabra ingresada inicia y finaliza con la misma letra.
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    cout << endl << "Verificar si una palabra comienza y termina con la misma letra" << endl; 

    string palabra = "";
    char f, l;
    cout << "Ingrese una palabra: " << endl; 
    cin >> palabra;

    char p[palabra.length()];

    for(int i = 0; i < palabra.length(); i++)
    {
        p[i] = palabra[i];
    }
    
    f = p[0]; 
    l = p[palabra.length() -1];

    if(f == l)
    {
        cout << "La palabra comienza y termina con la misma letra" << endl;
    }
    else 
    {
        cout << "La palabra comeienza y termina con letras distintas" << endl; 
    }
    return 0; 
}