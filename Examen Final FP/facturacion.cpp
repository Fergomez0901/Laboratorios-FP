#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;

const int longCad = 20; 

struct costoxArticulo
{
    string nombreArticulo;
    int cantidad; 
    float precioTotal;
    float costoPorArticulo;
};

void llenararticulos(string, int, float, float);

int main(void)
{
    costoxArticulo f1;  //f1 variable de struct costoxArticulo

llenararticulos(f1.nombreArticulo,f1.cantidad, f1.precioTotal, f1.costoPorArticulo);


return 0; 
}


void llenararticulos(string nombreArticulo, int cantidad, float precioTotal, float costo)
{
    cout << endl << "Ingrese el nombre del Articulo: " << endl;
    cin >> nombreArticulo;
    cout << endl << "Ingrese la cantidad de productos a comprar:" << endl; 
    cin >> cantidad;
    cout << endl << "Ingrese el costo por unidad:" << endl;
    cin >> costo;

    precioTotal = cantidad*costo;
    cout << endl << "El precio total es: $" << precioTotal;

}