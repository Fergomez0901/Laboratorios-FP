//Realizar un programa en c++ que verifique si la palabra ingresada inicia y finaliza con la misma letra.
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    cout << endl << "Verificar si una palabra comienza y termina con la misma letra" << endl; 
    string palabra = "";
    char retry = 'y';

    while(retry == 'y' || retry == 'Y') //Para ver si desea correr el codigo nuevamente :D
    {
    cout << "Ingrese una palabra: " << endl; 
    cin >> palabra;
    char f, l;

    f = palabra[0];
    l = palabra[palabra.length()-1];

    if(f == l){
        cout << "La palabra comienza y termina con la misma letra: " << f << endl; 
    }
    else
    {
        cout << "La palabra comienza y termina con letras diferentes: ("<<f << "," << l << ")" << endl;
    }
    cout << "Desea intentarlo con otra palabra? (Y/N)" << endl; 
    cin >> retry; 
    } // fin del while
    
    return 0; 
}
