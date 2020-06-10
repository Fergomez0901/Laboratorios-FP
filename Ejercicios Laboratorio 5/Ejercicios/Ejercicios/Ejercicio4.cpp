#include <iostream>
int contVocales();
using namespace std;

int main(void)
{
    cout << endl<< "Contar las vocales" << endl; 

    cout << endl << "El numero de vocales ingreasadas es: " << contVocales() << endl; 

    return 0; 
}

 int contVocales()
 {
    unsigned char car;
    int cont = 0; 
    cout << endl << "Ingrese un caracter, o presion Ctrl + z para finalizar:" << endl; 

    while(cin >> car)
    {
        if(car == 'a' || car == 'e' || car == 'i' || car == 'o' || car =='u')
        cont = cont + 1; 
        cout << "Digite un caracter, o Ctrl+z para finalizar: "<<endl; 
    }
  
    return cont;
 }
