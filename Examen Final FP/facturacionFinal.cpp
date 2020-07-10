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

void llenarArreglo(costoXarticulo [], int);
void calcCostoArticulo(costoXarticulo [], int);
void displayProductos(costoXarticulo [], int);
void calcCostoTotal(costoXarticulo [], int, float);

int main (void)
{
    string nombre; 
    int n; //cantidad de articulos a comprar / en el arreglo.
    float costoTotal = 0.0; //acumulador del costo total

    cout << endl << "Ingrese la cantidad de articulos a comprar: " << endl; 
    cin >> n; 
    fflush(stdin);

    costoXarticulo productos[n];
    llenarArreglo(productos, n);
    calcCostoArticulo(productos, n);
    displayProductos(productos, n);
    calcCostoTotal(productos, n, costoTotal);

    return 0; 
}

void llenarArreglo(costoXarticulo productos[], int size)
{
    string nombre; 
    cout << "Digite el nombre del producto, cantidad y el precio por unidad." << endl; 

    for(int i = 0; i < size; i++)
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
}

void calcCostoArticulo(costoXarticulo productos[], int size)
{
   for(int i = 0; i < size; i++)
    {
        productos[i].costoPorArticulo = productos[i].precioUni * productos[i].cantidad;
    } 
}

void displayProductos(costoXarticulo productos[], int size)
{
    cout << "Detalles de los articulos" << endl; 
    for(int i = 0; i < size; i++)
    {
        cout << "Nombre del producto: "<<productos[i].nombreArticulo << endl;
        cout << "Cantidad: " << productos[i].cantidad << endl; 
        cout << "Costo por unidad: $" << productos[i].precioUni << endl; 
        cout << "Costo por articulo: $" << productos[i].costoPorArticulo << endl; 
    }
}

void calcCostoTotal(costoXarticulo productos[], int size, float costoTotal)
{
 
    for(int i = 0; i < size; i++)
    {
        costoTotal = costoTotal + productos[i].costoPorArticulo; 
    }

    cout << endl << "El precio total es: $" << costoTotal;
}