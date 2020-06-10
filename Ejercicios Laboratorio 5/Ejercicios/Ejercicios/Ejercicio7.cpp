#include <iostream>
bool divisible(int, int);
using namespace std;

int main(void)
{
    int m, n;
    char retry = 'y';
    cout << endl << "Divisibilidad de un numero" << endl;

    while(retry =='y'||retry == 'Y')
    {
    cout << "Ingrese un numero:" <<endl;
    cin >> m;
    cout << "Ingrese otro numero (Divisor):" << endl;
    cin >> n;

    divisible(m,n);
    
    if(divisible == false)
    {
        cout << "El numero " << m << " NO ES divisible por " << n; 
    }
    else
    {    
        cout << "El numero " << m << " ES divisible por " << n;   
    }
    cout << endl << "Desea intentarlo de nuevo? (Y/N)" << endl; 
    cin >> retry;

    }   // fin del while
    
return 0;
}

bool divisible(int m, int n)
{
    int mod = m % n;

    if(mod == 0)
    {
        return true; 
    }
    else
    {
        return false; 
    }
}