//Programa que verifique si un numero entero es divisible por otro

#include "iostream"
#include "math.h"
using namespace std;

int main(void)
{
    int a, b;
    cout << "Ingrese el primer numero entero: " ;
    cin >> a;
    cout << "Ingrese el segundo numero entero: ";
    cin >> b;

    int mod = a%b;
    int div = a/b;

    if(mod == 0){
        cout << a << " es divisible entre " << b << endl;
        cout << "La division es igual a: " <<div;

    }
    else{
        cout << a << " no es divisible entre "<<b;
    }
        return 0;
}
