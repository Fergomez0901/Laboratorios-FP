#include <iostream>
int sumaIntervalo(int, int, int);
using namespace std;

int main(void)
{
    int a, b, n;
    cout << endl << "Suma de los numeros enteros divibles por un numero determinado en un intervalo de numeros" << endl; 
    cout << endl << "Ingrese el limite inferior del intervalo" << endl; 
    cin >> a;
    cout << "Ingrese el limite superior del intervalo" << endl;
    cin >> b; 
    cout << "Ingrese el divisior a tomar en cuenta" << endl;
    cin >> n;

    sumaIntervalo(a,b,n);

    cout << "La suma de los numeros divisibles por " <<n << " en el intervalo de [" <<a<<", "<< b << "] es:" << endl; 
    cout << "Suma = " << sumaIntervalo(a,b,n);
}   

int sumaIntervalo(int a,int b,int n)
{
    int suma = 0; 

    for(int i = a; i <= b; i++)
    {
        if(i % n == 0)
        {
            suma = suma + i;
        }
        else
        {
            suma = suma + 0;
        }
    }
        return suma; 
}
