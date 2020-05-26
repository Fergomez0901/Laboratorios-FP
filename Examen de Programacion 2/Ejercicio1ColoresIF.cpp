#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    cout << endl << "Escoge un color y gana un premio!" << endl;
    string opcion;

    cout << "Menu de opciones:" << endl; 
	cout << "Negro" << endl;
	cout << "Amarillo"<< endl;
	cout << "Rojo" << endl;
	cout << "Anaranjado" << endl;
	cout << "Azul" << endl;

	cout << "Escoga un color: " << endl;
	cin >> opcion;

    if(opcion == "Negro" || opcion == "negro")
    {
        cout << "Felicidades! Usted ha ganado $10" << endl;
    }
    else if(opcion == "Amarillo" || opcion == "amarillo")
    {
        cout << "Felicidades! Usted ha ganado $1" << endl;
    }
    else if(opcion == "Rojo" || opcion == "rojo")
    {
        cout << "Felicidades! Usted ha ganado $20" << endl;
    }
    else if(opcion == "Anaranjado" || opcion == "anaranjado")
    {
        cout << "Felicidades! Usted ha ganado $50" << endl;
    }
    else if(opcion == "Azul" || opcion == "azul")
    {
        cout << "Felicidades! Usted ha ganado $10000" << endl; 
    }
    return 0;
}