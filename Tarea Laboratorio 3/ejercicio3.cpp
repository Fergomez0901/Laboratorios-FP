//Resolver ecuaciones cuadráticas
#include <iostream>
#include <math.h>
using namespace std;

int main(void)
{
    cout << "Resolver ecuaciones cuadraticas: " << endl;
    float x1, x2, a, b, c;
    cout << "Introduzca los valores de a, b y c, respectivamente: "<< endl;
    
    cin >> a >> b >> c;

    x1 = (-b + sqrt(pow(b,2)-(4.0*a*c)))/(2.0*a);
    x2 = (-b - sqrt(pow(b,2)-(4.0*a*c)))/(2.0*a);

    cout << endl;
    cout << "El valor de x1 es: " << x1 << endl;
    cout << "El valor de x2 es: " << x2 << endl;

    return 0;
}