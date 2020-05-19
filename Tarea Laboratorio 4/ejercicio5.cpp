//Realizar un programa en c++ que verifique si la palabra ingresada inicia y finaliza con la misma letra.
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    cout << endl << "Verificar si una palabra comienza y termina con la misma letra" << endl; 

    string palabra = "";
    cout << "Ingrese una palabra: " << endl; 
    cin >> palabra;

    char c[palabra.length()];
    palabra.copy(c,palabra.length()); //copio y pego el contenido del str palabra en el char array  "c"
    char f, l;
    f = c[0];
    l = c[palabra.length() - 1];

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
