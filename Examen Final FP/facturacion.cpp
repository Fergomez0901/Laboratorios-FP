#include <iostream>
#include <string.h>
using namespace std; 

const int longCad = 20;

struct costoXarticulo
{
    char nombreArticulo[longCad + 1];
    int cantidad;
    float precioUni;
    float costoPorArticulo;
}; 

int main(void)
{
    string nombre; 
    int n; // Cantidad de articulos a comprar.
    float costoTotal = 0.0;
    cout << endl << "cuantos articulos comprara?" << endl; 
    cin >> n; 
    fflush(stdin);
    
    costoXarticulo productos[n];

    cout << "Digite el nombre del producto, cantidad y el precio por unidad." << endl; 

    for(int i = 0; i < n; i++)
    {
        cout << "Nombre del articulo: " ; 
        getline(cin, nombre, '\n');
        strncpy(productos[i].nombreArticulo, nombre.c_str(), longCad);
        productos[i].nombreArticulo[longCad] = '\0';
        cout << "Ingrese la cantidad de producto: ";
        cin >> productos[i].cantidad;
        cout << "Ingrese el precio por unidad: ";
        cin >> productos[i].precioUni; 

        cout << endl; 

        fflush(stdin);
    }

    for(int j = 0; j < n; j++)
    {
        productos[j].costoPorArticulo = productos[j].precioUni * productos[j].cantidad;
    }

    for(int i = 0; i < n; i++)
    {
        costoTotal = costoTotal + productos[i].costoPorArticulo; 
    }

    cout << "Los datos del arreglo son: " << endl; 
    for(int i = 0; i <n; i++)
    {
        cout << "Nombre del producto: "<<productos[i].nombreArticulo << endl;
        cout << "Cantidad: " << productos[i].cantidad << endl; 
        cout << "Costo por unidad: " << productos[i].precioUni << endl; 
        cout << "Costo por articulo: " << productos[i].costoPorArticulo << endl; 
    }

    cout << "Total a cancelar: " << costoTotal << endl; 
}   