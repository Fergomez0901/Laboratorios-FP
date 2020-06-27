#include <iostream>
#include <cmath>

int promedioAltura(int []);
void refMedia(int [], int);

using namespace std;

int main(void)
{
    int alturas[25];

    cout << endl <<"Calculo de promedio de diferentes alturas" << endl; 
    cout << "Ingrese la altura en cm" << endl; 

    for(int i = 0; i < 25; i++)
    {
        cout << "Digite la altura:" << endl; 
        cin >> alturas[i];
    }

    cout << endl << "El promedio de las estaturas es: " << promedioAltura(alturas) << " cm";

    cout << endl;

    refMedia(alturas, promedioAltura(alturas));

    return 0; 
}

int promedioAltura(int estatura[])
{
    int suma = 0, promedio; 

    for(int i = 0; i < 25; i++)
    {
        suma = suma + estatura[i];
    }

    promedio = suma / 25.0;

    return promedio; 
}

void refMedia(int estaturas[], int promedio)
{
    int arribaMed = 0, abajoMed = 0, enMed = 0; 

    for(int i = 0; i < 25; i++)
    {
        if(estaturas[i] > promedio)
        {
            arribaMed+=1;
        }
        else if(estaturas[i] < promedio)
        {
            abajoMed+=1; 
        }
        else        //estaturas[i0] == promedio
        {
            enMed+=1;
        } 
    }

    cout << "Hay " << arribaMed << " estudiantes con estatura arriba de la media." << endl; 
    cout << "Hay " << abajoMed << " estudiantes con estatura abajo de la media." << endl;
    cout << "Hay " << enMed << " estudiantes con estatura en la media." << endl;
}