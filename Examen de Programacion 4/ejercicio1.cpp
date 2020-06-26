#include <iostream>
using namespace std;

void codificarArray(char [], int);

int main(void)
{
    int n;
    char letrasArray[75];

    cout << endl << "Codificar un mensaje" << endl;
    cout << "Cuantas letras desea utilizar?" << endl;
    cin >> n;

    cout << endl; 

    for(int i = 0; i < n; i++)
    {
        cout << "Ingrese una letra:" << endl; 
        cin >> letrasArray[i];
    }

    cout << endl; 

    codificarArray(letrasArray, n);

    return 0; 
}

void codificarArray(char letras[], int longitud)
{
    for(int i = 0; i < longitud; i++)
    {
        if(letras[i] == 'm')
        {
            letras[i] = '0';
        }
        else if(letras[i] == 'u')
        {
            letras[i] = '1';
        }
        else if(letras[i] == 'r')
        {
            letras[i] = '2';
        }
        else if(letras[i] == 'c')
        {
            letras[i] = '3';
        }
        else if(letras[i] == 'i')
        {
            letras[i] = '4'; 
        }
        else if(letras[i] == 'e')
        {
            letras[i] = '5';
        }
        else if(letras[i] == 'l')
        {
            letras[i] = '6';
        }
        else if(letras[i] == 'a')
        {
            letras[i] = '7'; 
        }
        else if(letras[i] == 'g')
        {
            letras[i] = '8';
        }
        else if(letras [i] == 'o')
        {
            letras[i] = '9';
        }
        else
        {
            letras[i] = letras[i];
        }
    }

    cout << endl << "El mensaje codificado es: " << endl; 

    for(int i = 0; i < longitud; i++)
    {
        cout << letras[i] << " ";
    }
    
    cout << endl;
}