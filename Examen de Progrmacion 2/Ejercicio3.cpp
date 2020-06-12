#include <iostream>
bool esBisiesto(int);
using namespace std;

int main(void)
{
    int n, respuesta; 
    cout << endl << "Definir si un annio es bisiesto o no" << endl; 
    cout << "Ingresa el annio" << endl; 
    cin >> n; 

    if(esBisiesto(n) == true)
    {
        cout << "El annio ES bisiesto" << endl; 
    }
    else
    {
        cout << "El annio NO ES bisiesto" << endl; 
    }
    
 return 0;   
}
bool esBisiesto(int n)
{
    int mod = n % 400; //PRUEBA 1
    int mod2 = n % 4;  //PRUEBA 2
    int mod3 = n % 100;//PRUEBA 2
    
    if(mod == 0)
    {
        return true; 
    }
    else if(mod2 == 0 && mod3 != 0)
    {
        return true;
    }
    else
    {
        return false; 
    }
}