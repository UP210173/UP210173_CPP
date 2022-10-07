/* Unidad 2. Tablas de Multiplicar
    Autor: Cristian G Morales Pérez / UP210173
    04 de Octubre de 2022
    Objetivo: Tablas de Mulpitlicar con Ciclos

*/
#include <iostream>

using namespace std;

int main()
{
    /*Ciclo For Ascendente*/
    int n = 5;
    int r;
    cout << "Tabla de multiplicar en forma ascendente" << endl;
    for (int i = 1; i <= 10; i++)
    {
        r = n * i;
        cout << n << " x " << i << " = " << r << endl;
    }
    cout << endl;
    cout << "Tabla de multiplicar en forma descendente" << endl;
    for (int i = 10; i >= 1; i--)
    {
        //Ciclo For descendente
        int r = n * i;
        cout << i << " x " << n << " = " << r << endl;
    }
    cout<<endl;
    cout << "Tabla de multiplicar con while" << endl;
    int j = 1;
    while(j<=10)
    {
        //Ciclo While
        cout << n << " x " << j << " = " << n*j << endl;
        j=j+1;
    }
    cout<<endl;
    cout << "Tabla de multiplicar con while forma descendente" << endl;
    while(j > 0)
    {
        //Ciclo While
        cout << j << " x " << n << " = " << n*j << endl;
        j--;
    }
    
    return 0;
}