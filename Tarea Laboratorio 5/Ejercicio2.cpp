#include <iostream>
void calcHora(int&, int&, int&);
using namespace std;

int main(void)
{
    cout << endl << "Cual es la hora:" << endl; 
    int hora, min, seg;
    cout << "Ingrese la hora (hora [en formato 24h], minutos, sigundo) " << endl; 
    cin>>hora>>min>>seg; 

    calcHora(hora, min, seg);
    
    cout << "Luego de 1 segundo: " <<endl; 
    cout << "La hora es: " << hora << endl;
    cout << "El minuto es: " << min << endl;
    cout << "El segundo es: " << seg << endl; 

}

void calcHora(int& hora, int& min, int& seg)
{
    seg = seg + 1;
    if(seg == 60)
    {
        seg = 0; 
        min += 1;

        if(min == 60)
        {
            min = 0; 
            hora += 1;

            if(hora == 24)
            {
                hora = 0; 
            }
        }
    }    
}