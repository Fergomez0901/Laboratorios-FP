#include <iostream>
void llenarArreglo1(int longitud,int miArreglo1[]);
void llenarArreglo2(int longitud,int miArreglo2[]);
int* sumArrays(int myArray1[], int myArray2[], int longitud, int arrayRes[]);
void printRes(int arrResultado[], int longitud);

using namespace std;
int main(void)
{
    int n;
    cout << endl << "Cual es el tamannio de los arreglos?" << endl; 
    cin >> n;

    int Array1[n];
    int Array2[n];
    int suma[n];
    int resultado[n];

    llenarArreglo1(n, Array1);
    llenarArreglo2(n, Array2);
    cout << endl; 
    printRes(sumArrays(Array1, Array2, n, suma), n);

    return 0; 
}
void llenarArreglo1(int longitud,int miArreglo1[])
{
    for(int i = 0; i < longitud; i++)
    {
        cout << endl << "Cual es el valo No. " << i+1 << "?" << endl; 
        cin >> miArreglo1[i];
    }

    cout << "El arreglo 1 es:" << endl; 
    for(int i = 0; i < longitud; i++)
    {
        cout << miArreglo1[i] << " ";
    }
    cout << endl; 
}
void llenarArreglo2(int longitud,int miArreglo2[])
{
    for(int i = 0; i < longitud; i++)
    {
        cout << endl << "Cual es el valo No. " << i+1 << "?" << endl; 
        cin >> miArreglo2[i];
    }

    cout << "El arreglo 2 es:" << endl; 
    for(int i = 0; i < longitud; i++)
    {
        cout << miArreglo2[i] << " ";
    }
    cout << endl; 
}
int* sumArrays(int myArray1[], int myArray2[], int longitud, int arrayRes[])
{
    for(int i = 0; i < longitud; i++)
    {
        arrayRes[i] = myArray1[i] + myArray2[i];
    }
    return arrayRes;
}
void printRes(int arrResultado[], int longitud)
{
    cout << "El resultado de la suma de los arreglos es: " << endl; 

    for(int i = 0; i < longitud; i++)
    {
        cout << arrResultado[i] << " ";
    } 
    cout << endl; 
}