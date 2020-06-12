#include <iostream>
float calcsalarioTot(float, float);
float calcsalarioFin(float);
using namespace std; 

int main(void)
{
    float horas = 0, horasExt = 0;
    cout << endl << "CALCULO DE SALARIO:" << endl; 
    int n; //Cantidad de trabajadores
    cout << "INGRESE LA CANTIDAD DE TRABAJADORES: " << endl; 
    cin >> n; 

    for(int i = 1; i <= n; i++)
    {
        cout << "INGRESE LA CANTIDAD DE HORAS TRABAJADAS: " << endl; 
        cin >> horas; 
        cout << "INGRESE LA CANTIAD DE HORAS EXTRAS TRABAJADAS: " << endl; 
        cin >>horasExt; 

        float respuesta1 = calcsalarioTot(horas, horasExt), respuesta2 = calcsalarioFin(respuesta1);

        cout << "EL SALARIO TOTAL ES: $" << respuesta1 << endl;
        cout << "EL SALARIO FINAL ES: $" << respuesta2 << endl; 
    }
    return 0; 
}
float calcsalarioTot(float horas, float horasExt)
{
    float valHora = 1.75, valhoraExt = 2.50, salarioTot = 0;

    salarioTot = (horas * valHora) + (horasExt * valhoraExt);

    return salarioTot;
}
float calcsalarioFin(float salarioTot)
{
    float seguro = 0.04, afp = 0.0625, tax = 0.10, salarioFin = 0;

    if(salarioTot > 500)
    {
        salarioFin = salarioTot - (salarioTot*seguro) - (salarioTot*afp) - (salarioTot*tax);
    }
    else
    {
        salarioFin = salarioTot - salarioTot*seguro - salarioTot*afp;
    }
    return salarioFin;
}