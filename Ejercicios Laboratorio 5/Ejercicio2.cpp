#include <iostream>
using namespace std;

int invNum(int);

int main(void)
{
    int n; 

    cout << endl << "Invertir el numero ingresado: " << endl;
    cout << "Ingrese un numero: " << endl; 
    cin >> n;

    cout << "El numero invertido es: " << invNum(n) << endl;
        
    return 0; 
}
    int invNum(int n)
    {
        int numInver = 0;
        while(n > 0)
        {
            numInver = numInver * 10 + (n % 10); 
            n = n / 10; 
        }
        
        return numInver;
    }

