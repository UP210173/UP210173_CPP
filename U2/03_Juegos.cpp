/*
Unidad 2. Juegos
Autor: Morales Pérez Cristian Guadalupe / UP210173
08 de Octubre de 2022
Descripcion: Se mostrara la cuota dependiendo de la edad del usuario
*/

#include <iostream>

using namespace std;

int main()
{
    int edad, cuota;

    // Pregunta para conocer la edad del usuario

    cout << "¿Cuantos años tienes? ";
    cin >> edad;

    // Proceso para calcular el precio de la entrada

    if (edad >= 4 && edad <= 18)
    {
        cuota = 5;
        if (edad > 18)
        {
            cuota = 10;
        }
        cout << "Deberas de pagar un total de: $" << cuota << endl;
    }
    else
    {
        cout << "Tu entrada es gratuita" << endl;
    }

    return 0;
}