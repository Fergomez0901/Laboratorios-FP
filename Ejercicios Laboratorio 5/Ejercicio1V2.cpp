#include <iostream>
void descomponer (int, int *, int *, int *, int *);
using namespace std;

int main(void)
{
    int n, uni, dec, cent, mil;

    cout << endl << "Descomponer un numero en unidades, decenas, centenas y millare" << endl; 
    cout << "Ignrese un un numero:" << endl; 
    cin >> n;   

    descomponer(n, &uni, &dec, &cent, &mil);

    cout << "El numero " << n << " tiene:" <<endl;
    cout << uni << " unidades " << endl;
    cout << dec << " decenas " << endl;
    cout << cent << " centenas" << endl; 
    cout << mil << " millares" << endl;

    return 0;

}
    void descomponer(int n, int *uni, int *dec, int *cent, int *mil)
    {
        *uni = n % 10; 
        n = n/10;
        *dec = n % 10;
        n = n/10;
        *cent = n % 10; 
        n = n/10;
        *mil = n%10;
    }
