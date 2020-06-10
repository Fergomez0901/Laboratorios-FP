#include <iostream>
void contVocales(int *);
using namespace std;

int main(void)
{
    int n; 
    cout << endl << "Contar vocales" << endl;
    
    contVocales(&n);

    cout << endl << "Cantidad de vocales digitadas: " << n << endl; 

return 0; 
}
void contVocales(int *cont)
{
    unsigned char caracter; 
    *cont = 0; 
    cout << endl << "Digite un caracter, o Control+z para finalizar: " << endl; 

    while(cin >> caracter)
    {
        if(caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter =='u')
        *cont = *cont + 1; 
        cout << "Digite un caracter, o Ctrl+z para finalizar: "<<endl; 

    }
}
