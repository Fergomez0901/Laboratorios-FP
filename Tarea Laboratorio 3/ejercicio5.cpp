<<<<<<< HEAD
//Calcular area y perimetro de un circulo.
#include <iostream>
#include <math.h>
using namespace std;

int main(void)
{
    float r = 0;
    float area, perimetro;
    const float pi = 3.1415926;

    cout <<"Introduzca el radio del circulo: " << endl; 
    cin >>r; 

    area = pow(r,2)*pi;
    perimetro = 2 * pi * r;

    cout <<"El area del circulo es: " << area << endl;
    cout <<"El perimetro del circulo es: " << perimetro << endl;


    return 0;

=======
//Calcular area y perimetro de un circulo.
#include <iostream>
#include <math.h>
using namespace std;

int main(void)
{
    float r = 0;
    float area, perimetro;
    const float pi = 3.1415926;

    cout <<"Introduzca el radio del circulo: " << endl; 
    cin >>r; 

    area = pow(r,2)*pi;
    perimetro = 2 * pi * r;

    cout <<"El area del circulo es: " << area << endl;
    cout <<"El perimetro del circulo es: " << perimetro << endl;


    return 0;

>>>>>>> ee2522613af29b9ccdefadd013cd13dd631d672a
}