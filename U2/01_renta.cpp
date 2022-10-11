/* Unidad 2. Edades
    Autor: Cristian G Morales Pérez / UP210173
    27 de Septiembre de 2022
    Objetivo: Mostrara a la persona el impuesto que les corresponde

*/
#include <iostream>
using namespace std;

int main()
{
    int renta, desc, impuesto;
    cout << "Ingresa tu renta anual" << endl;
    cin >> renta;

    if (renta < 10000)
    {
        cout << "Tu impuesto es del 5%";
        desc = 5;
    }
    else if (renta <= 200000)
    {
        cout << "Tu impuesto es del 10%";
        desc = 10;
    }
    else if (renta <= 35000)
    {
        cout << "Tu impuesto es del 15%";
        desc = 15;
    }
    else if (renta <= 60000)
    {
        cout << "Tu impuesto es del 30%";
        desc = 30;
    }
    else if (renta > 60000)
    {
        cout << "Tu impuesto es del 45%";
        desc = 45;
    }
    impuesto = renta * desc / 100;
    cout << " \n Debes de pagar: $ " << impuesto << endl;
    
    return 0;
}
