#include <iostream>
using namespace std;

int main(void)
{
	cout << endl << "Escoge un color y gana un premio!" << endl;
	int opcion;
	
	cout << "Menu de opciones:" << endl; 
	cout << "1) Negro" << endl;
	cout << "2) Amarillo"<< endl;
	cout << "3) Rojo" << endl;
	cout << "4) Anaranjado" << endl;
	cout << "5) Azul" << endl;

	cout << "Ingrese el numero de la opcion que desea" << endl;
	cin >> opcion;

	switch(opcion)
	{
	case 1:
	cout << "Felicidades! Usted ha ganado $10" << endl;
	break;

	case 2:
	cout << "Felicidades! Usted ha ganado $1" << endl;
	break;

	case 3:
	cout << "Felicidades! Usted ha ganado $20" << endl;
	break;

	case 4: 
	cout << "Felicidades! Usted ha ganado $50" << endl;
	break;
	
	case 5:
	cout << "Felicidades! Usted ha ganado $10000" << endl; 
	break; 

	default:
	cout << "Error, el numero ingresado no es valido" << endl;
	break;
	}
	return 0; 
}
