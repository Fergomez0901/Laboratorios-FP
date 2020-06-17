#include <iostream>
void promedio(int numArray[], float cant);
using namespace std;

int main(void)
{
    int size; 
    cout << endl << "Calcular promedio de un arreglo" << endl;
    cout << endl << "Introduzca el tamano del arreglo:" << endl; 
    cin >> size;

    int numArray[size];

    for(int i = 0; i < size; i++)
    {
        cout << "Introduzca un numero entero:" << endl;
        cin >> numArray[i];
    }

    cout << "El arreglo es:\n{ ";
    for(int i = 0; i < size; i++)
    {
        cout << numArray[i] << " ";
    }
    cout << "}" << endl; 

    promedio(numArray, size);
    
    return 0; 
}

void promedio(int myArray[], float cant)
{
    int suma = 0; 
    
    for(int i = 0; i < cant; i++)
    {
        suma = suma + myArray[i];
    }

    cout << endl << "La suma de los elementos es: " << endl; 
    cout << suma;
    
    float promedio = suma / cant; 

    cout << endl << "El promedio de los elementos es: " << endl;
    cout << promedio << endl;
}