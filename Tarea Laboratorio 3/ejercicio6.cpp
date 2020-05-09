//Compra de productos. 
#include <iostream>
#include <math.h>
using namespace std;

int main(void)
{
    float manzana = 0.25;
    float churros = 0.40;
    float gaseosa = 0.60;
    float chocolate = 1.00;
    float hamburguesa = 1.50;
    int cantidad = 0; 

    cout << "Bienvenidos a mi tienda! \n Productos: \n Manzana = $0.25 \n Churros = $0.40 \n Gaseosa = $0.60 \n Chocolate = $1.00 \n Hamburguesa = $1.50 \n";

    string producto = "";
    cout << "Que producto desea?" << endl;
    cin >> producto; 

    if (producto == "manzana" || producto == "Manzana"|| producto == "MANZANA") 
    {
        cout << "Que cantidad desea?" << endl;
        cin >> cantidad; 

        float total = manzana*cantidad;
        cout << "El total a cancelar es: $" << total;
    }
    else if (producto == "churros" || producto == "Churros"|| producto == "CHURROS") 
        {
            cout << "Que cantidad desea?" << endl;
            cin >> cantidad; 

        float total = churros*cantidad;
        cout << "El total a cancelar es: $" << total;
        }

        else if (producto == "gaseosa" || producto == "Gaseosa"|| producto == "GASEOSA") 
        {
            cout << "Que cantidad desea?" << endl;
            cin >> cantidad; 

        float total = gaseosa*cantidad;
        cout << "El total a cancelar es: $" << total;
        }

        else if (producto == "chocolate" || producto == "Chocolate" || producto =="CHOCOLATE")
        {
            cout << "Que cantidad desea?" << endl;
            cin >> cantidad; 

        float total = chocolate*cantidad;
        cout << "El total a cancelar es: $" << total;
        }

        else if (producto == "hamburguesa" || producto == "Hamburguesa" || producto == "HAMBURGUESA")
        {
        cout << "Que cantidad desea?" << endl;
        cin >> cantidad; 

        float total = hamburguesa*cantidad;
        cout << "El total a cancelar es: $" << total;
        }

        return 0;
}

