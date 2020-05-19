//Realizar un programa en c++ que verifique si un número es divisible entre otro
#include <iostream>
using namespace std;

int main(void)
{
    cout << endl << "Verificar si un numero es divisible entre otro" << endl << endl;
    int num1 = 0; 
    int num2 = 0;
    int mod1 = 0;

    cout << "Introduzca el primer numero"<<endl;
    cin >> num1;
    cout << "Introduzca el segundo numero" << endl;
    cin >> num2;

    mod1 = num1 % num2;

    if(mod1 == 0)
    {
        cout << "El numero "<<num1<< " es divisible por "<< num2 << endl;
    }
    else
    {
        cout << "El numero "<< num1 << " no es divisble por " << num2 << endl;
    }
    return 0;
}