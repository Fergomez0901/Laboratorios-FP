#include <iostream>
void fillArray(int array[], int longitud);
void repNumero(int arreglo[], int longitd, int count, int numero);
using namespace std;

int main (void)
{
    int size = 0, numArray[size], num = 0, cont = 0; 

    cout << endl << "Ingrese el tamannio del arreglo: " << endl; 
    cin >> size; 
    cout << endl << "Ingrese los valores del arreglo" << endl; 

    fillArray(numArray, size);

    cout << "Ingrese el numero que desea saber si se repite en el arreglo: " << endl; 
    cin >> num; 

    repNumero(numArray, size, cont, num);

    return 0; 
}
void fillArray(int array[], int longitud)
{
    for(int i = 0; i < longitud; i ++)
    {
        cout << "Ingrese un numero entero: " << endl; 
        cin >> array[i];
    }
    
    cout << endl << "El arreglo es:\n{"; 
    for(int i = 0; i < longitud; i++)
    {
        cout << array[i] << " "; 
    }
    cout << "}" << endl; 
}
void repNumero(int arreglo[], int longitud, int count, int numero)
{
    
    for(int i = 0; i < longitud; i++)
    {
        if(arreglo[i] == numero)
        {
            count++;
        }
        else
        {
            count += 0;
        }
    }
    if(count == 0)
    {
        cout << "El numero " << numero << " no esta en el arreglo"<< endl; 
    }
    else if(count == 1)
    {
        cout << "El numero " << numero << " no se repite en el arreglo" << endl; 
    }
    else 
    {
        cout << "El numero " << numero << " se repite " << count << " veces" << endl; 
    }
}