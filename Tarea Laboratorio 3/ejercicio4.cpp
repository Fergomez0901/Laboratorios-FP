#include <iostream>
#include <math.h>
using namespace std;

int main(void)
{
    int a = 0;

    cout << "Introduzca un numero: ";
    cin >> a;

    if(a%2 != 0) 
    {
        cout << "El numero "<< a << " es impar";
    }
    else 
    {
        cout << "El numero "<< a << " es par";
    }
    
    return 0; 
}