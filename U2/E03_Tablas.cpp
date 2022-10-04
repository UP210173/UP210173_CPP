/* Unidad 2. Tablas de Multiplicar
    Autor: Cristian G Morales Pérez / UP210173
    04 de Octubre de 2022
    Objetivo: Tablas de Mulpitlicar con Ciclos

*/
#include <iostream>

using namespace std;

int main()
{
    /*Ciclo For*/
    int n = 5;
    for (int i = 1; i <= 10; i++)
    {

        int r = n * i;
        cout << n << "x" << i << "=" << r << endl;
    }
    return 0;
}