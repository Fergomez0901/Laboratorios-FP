#include <iostream>
void calcPromedio(int, float&, int&, float&);

using namespace std;

int main(void)
{
    int suma = 0, numero; 
    float promedio = 0, contador = 0; 
    cout << endl << "Suma y promedio de los numeros introducidos." << endl;
    
    calcPromedio(numero, contador, suma, promedio);

    cout << "La suma de los numeros es: " << suma << endl; 
    cout << "La cantidad de numeros introducidos es: " << contador << endl; 
    cout << "El promedio de los numeros ingresados es: " << promedio << endl; 

    return 0; 
}
void calcPromedio(int numero, float &contador, int &suma, float &promedio)
{
    do
    {
        cout << "Ingrese un numero o presione 0 para salir" << endl; 
        cin >> numero; 
        suma = suma + numero; 
        contador = contador + 1; 

    } while (numero != 0);

        promedio = suma / contador;
}



