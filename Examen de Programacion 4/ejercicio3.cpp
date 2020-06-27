#include <iostream>
#include <cmath>

void llenarArreglo(int [][5], int, int);
void notaFinal(int [][5],int ,int);

using namespace std;

int main(void)
{
    int filas = 0, columnas = 5;

    cout << endl << "Calculo de notas" << endl;

    cout << "Cuantos estudiantes son?" << endl; 
    cin >> filas ;

    int notas[filas][5]; //Array de notas

    llenarArreglo(notas, filas, columnas);
    notaFinal(notas, filas, columnas);

    cout << endl;

    return 0; 
}   

void llenarArreglo(int notas[][5], int nfilas, int ncolumnas)
{
    for(int i = 0; i < nfilas; i++)
    {
        for(int j = 0; j < ncolumnas; j++)
        {
            cout << "Estudiante # " << i+1 << " , Actividad # " << j+1 << " :" << endl;
            cout << "Digite la nota: " << endl;
            cin >> notas[i][j];
        }
    }
}

 void notaFinal(int notas[][5], int nfilas, int ncolumnas)
{
    for(int i = 0; i < nfilas; i++)
    {
        float calificacion = 0;  //Nota final (resultado de la suma de las notas por su valor)

        for(int j = 0; j < ncolumnas; j++)
        {
            calificacion = calificacion + (notas[i][j] * 0.20);
        }
        if(calificacion >= 6.00)
        {
            cout << "El estudiante " << i+1 << " Aprobo el curso con una nota de: " << calificacion << endl; 
        }
        else        //calificacion < 6.00
        {
            cout << "El estudiante " << i+1 << " Reprobo el curso con una nota de: " << calificacion << endl; 
        }
    }
}
