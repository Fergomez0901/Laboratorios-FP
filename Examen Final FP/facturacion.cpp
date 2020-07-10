#include <iostream>
#include <string.h>
using namespace std; 

struct costoXarticulo;
{
    string nombreArticulo[21];
    int cantidad; 
    float precioUni; 
    float costoporArticulo; 
};

float costoporArticulo(float, int);

int main(void)
{
    costoXarticulo 
    int cant, opcion;
    char retry = 'Y';
    cout << "Cuantos articulos se compraran?" << endl; 
    cin >> cant; 

    int productos[cant];
    int cantProd;

    detallesArticulos(); 

    while(retry == 'y' || retry == 'Y')
    {
        cout << "Ingrese una opcion" << endl; 
        cin >> opcion; 

        if(opcion == 1)
        {
            float precio1 = 1.50;
            cout << "Ingrese la cantidad que desea:" << endl; 
            cin >> cantProd;

           cout << "Costo total por producto: " << costoporArticulo(precio1, cantProd);
        }
        else if(opcion == 2)
        {

        }else if(opcion == 3)
        {

        }else if(opcion == 4)
        {

        }else if(opcion == 5)
        {
            
        }

        cout << "Desea agregar otro producto?" << endl; 
        cin >> retry; 
    }


    return 0; 
}

void detallesArticulos()
{
    cout << "Productos:" << endl; 
    cout << "1) Chocolate \n2) Gaseosa \n3) Jugo \n4) Leche \n5) Nachos" << endl;
}

float costoporArticulo(float precioProd, int cantidadProd)
{
    float resultado = precioProd*cantidadProd; 
    return resultado; 
}