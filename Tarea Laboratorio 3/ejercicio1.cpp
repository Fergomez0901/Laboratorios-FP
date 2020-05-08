//Programa que calule el promedio de tres numeros ingresados.
#include <iostream>
#include <math.h>

using namespace std;

 int main(void)
 {
    float a, b, c, promedio;
    cout << "Ingrese tres numeros numeros: " << endl;

    cin >>a>>b>>c;
    
    promedio = (a+b+c)/3.0;
    cout << "El promedio es: "<<promedio;
    return 0;
}
