/* Unidad 2. Tablas de Multiplicar
    Autor: Cristian G Morales Pérez / UP210173
    06 de Octubre de 2022
    Objetivo: Sumatoria de los primero 10 numero
*/
#include <iostream>

using namespace std;

int main()
{
    int suma = 0, i = 1, numero, fact = 1;
    cout << "Ingrese el numero de la sumatoria y el factorial: " << endl;
    cin >> numero;
    if (numero == 0)
    {
        cout << "El factorial es: 1" << endl;
        cout << "La sumatoria es: 0" << endl;
    }
    else
    {
        while (i <= numero)
        {
            suma = suma + i;
            fact = fact * i;
            i++;
        }
        cout << "Sumatoria: " << suma << endl;
        cout << "Factorial: " << fact << endl;
    }

    return 0;
}