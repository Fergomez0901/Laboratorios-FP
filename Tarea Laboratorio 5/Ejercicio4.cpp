#include <iostream>
void calcFecha(int&, int&, int&);
using namespace std; 

int main(void)
{
    int dia, mes, anio;
    cout << endl << "Cual es la fecha? (dd, mm, aa) " << endl;
    cin>>dia>>mes>>anio;

    calcFecha(dia, mes, anio);

    cout << "Despues de 1 dia la fecha es: " << endl; 
    cout << dia << "/" << mes << "/" << anio << endl;
}

void calcFecha(int& dia, int& mes, int& anio)
{
    //Es bisiesto?
    int mod = anio % 400, mod2 = anio % 4, mod3 = anio % 100;
    bool bisiesto = false;
    if(mod == 0)
    {
        bisiesto = true;
    }
    else if(mod2 == 0 && mod3 != 0)
    {
        bisiesto = true; 
    }
    else
    {
        bisiesto = false; 
    }

    dia +=1;
    if(bisiesto == true)
    {
        if(mes == 2 && dia == 30)
        {
            dia = 1;
            mes += 1; 
            
        }
        else if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 11 || mes == 12)
        {
            if(dia == 32)
            {
                dia = 1;
                mes += 1; 

                if(mes == 13)
                {
                    mes = 1; 
                    anio += 1;
                }
            }
        }
        else if(mes == 4, mes == 6, mes == 9, mes == 10)
        {
            if(dia == 31)
            {
                dia = 1; 
                mes += 1; 
            }
        }
    }
    if(bisiesto == false)
    {
            if(mes == 2 && dia == 29)
        {
            dia = 1;
            mes += 1; 
            
        }
        else if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 11 || mes == 12)
        {
            if(dia == 32)
            {
                dia = 1;
                mes += 1; 

                if(mes == 13)
                {
                    mes = 1; 
                    anio += 1;
                }
            }
        }
        else if(mes == 4, mes == 6, mes == 9, mes == 10)
        {
            if(dia == 31)
            {
                dia = 1; 
                mes += 1; 
            }
        }
    }
    
}