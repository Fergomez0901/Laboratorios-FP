#include <iostream>
int mcd(int, int);
using namespace std;

int main(void)
{
    int n,m, respuesta; 
    cout << endl << "Maximo comun divisor de dos numeros" << endl;
    cout << "Ingrese el primer numero:" << endl;
    cin >> n; 
    cout << "Ingrese el segundo numero:" << endl; 
    cin >> m; 

    respuesta = mcd(n,m);
    cout << endl << "El m.c.d de los numeros ingresados es: " <<  respuesta; 

    return 0; 
}

int mcd(int n, int m)
{
    int mayor, menor, residuo; 
    if(n < m)
    {
        mayor = m;
        menor = n;
    }
    else
    {
        mayor = n; 
        menor = m; 
    }
    do
    {
        residuo = mayor % menor;
        mayor = menor; 
        menor = residuo; 
    }
    while(residuo != 0);
    
    return mayor; 
}