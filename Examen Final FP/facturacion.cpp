#include <iostream>
#include <cmath>
using namespace std;

const int longCad = 20; 

struct costoxArticulo
{
    char nombreArticulo[longCad + 1];
    int cantidad; 
    float precio;
    float costoPorArticulo;
}factura1;

void llenararticulos();

int main(void)
{
    cout << "Cuantos articulos desea comprar?" << endl; 
    cin >> factura1.cantidad;


}



void llenararticulos()
{
    cout << endl << "Digite el nombre de los artículos a comprar: ."
}