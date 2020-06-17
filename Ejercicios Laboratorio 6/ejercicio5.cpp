#include <iostream>
using namespace std;

int main(void)
{
    int numeros[200], numPares[100], numImpares[100]; 

    cout << endl << "Arreglo de numeros impares" << endl; 

    int cont1 = 0, cont2 = 0;

    for(int i = 0; i < 200; i++)
    {
        int n = i+1;
        numeros[i] = n;
    }
    for(int i = 0; i < 200; i++)
    {
        if((numeros[i]%2) == 0)
        {
            numPares[cont1] = numeros[i];
            cont1++;
        }
        else
        {
            numImpares[cont2] = numeros[i];
            cont2++;
        }
    }
    cout << endl << "Los primeros 100 numeros impares son: " << endl;
    for(int i = 99; i >= 0; i--)
    {
        cout << numImpares[i] << endl;
    }
    return 0; 
}