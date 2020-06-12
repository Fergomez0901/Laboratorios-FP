#include <iostream>
#include <stdlib.h>
void numeroMagico(int, int);
using namespace std; 

int main(void)
{
    int vidas = 5;
    int numero = rand() % 100 + 1;
    cout << endl << "EL NUMERO MAGICO: INTENTA ADIVINAR EL NUMERO MAGICO (ENTRE 1 Y 100)" << endl; 

    numeroMagico(numero, vidas);

    return 0; 
}
void numeroMagico(int numeroMagico, int vidas)
{
    int intento = 0;
    bool win = false; 

    while(vidas > 0 && win ==  false)
    {
        cout << "INGRESE UN NUMERO O PRESIONE 0 PARA SALIR" << endl; 
        cin >> intento; 

        if(intento < numeroMagico && intento != 0)
        {
            cout << "EL NUMERO MAGICO ES MAYOR" << endl;
            vidas -=1; 
            cout << "TE QUEDAN " << vidas << " VIDAS" << endl; 
        }
        if(intento > numeroMagico && intento != 0)
        {
            cout << "EL NUMERO MAGICO ES MENOR" << endl;
            vidas -=1;
            cout << "TE QUEDAN " << vidas << " VIDAS" << endl; 
        }
        if(intento == 0)
        {
            cout << "ADIOS, REGRESA PRONTO!" << endl; 
            break; 
        }
        else if(intento == numeroMagico)
        {
            cout << "FELICIDADES, ADIVINASTE EL NUMERO MAGICO!" << endl; 
            win = true; 
        }
    } 
}