/* Unidad 2. Tablas de Multiplicar
    Autor: Cristian G Morales Pérez / UP210173
    06 de Octubre de 2022
    Objetivo: Tablas de Mulpitlicar con fors anidado
    Tablas del 1 al 10
*/
#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << endl;
            cout << i << " x " << j << " = " << i * j << endl;
        }
    }
}