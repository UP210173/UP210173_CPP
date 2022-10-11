/* Unidad 2. Productos
    Autor: Cristian G Morales Pérez / UP210173
    09 de Octubre de 2022
    Descripcion: Convertidor de numeros Binarios a decimal

*/
#include <iostream>

using namespace std;

int main()
{
    int contador = 1;
    int numero = 0;
    string resultado;

    cout << "Ingresa un número: ";
    cin >> numero;

    if (numero > 0)
    {

        while (numero != 0)
        {

            resultado = (numero % 2 == 0) ? "0" + resultado : "1" + resultado;
            numero /= 2;
        }

        cout << "El numero binario es " << resultado << endl;
    }
    else if (numero == 0)
    {

        cout << "El numero en binario es 0. \n";
    }
    else
    {
        cout << "Solo puedes ingresar numeros iguales o mayores a 0. \n";
    }
    return 0;
}