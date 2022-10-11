/* Unidad 2. Temperaturas
    Autor: Cristian G Morales Pérez / UP210173
    08 de Octubre de 2022
    Descripcion: Se mostraran el promedio, temperatura maxima y minima, segun las temperaturas que se ingresen.

*/
#include <iostream>

using namespace std;

int main()
{
    float TAcumulada = 0, temperatura;
    int T_min = 9999, T_max = -9999, i = 0;

    cout << "Metereologo" << endl;

    do
    {
        cout << "Introduce la temperatura: " << endl;
        cin >> temperatura;
        TAcumulada = TAcumulada + temperatura;

        i ++;
        if (temperatura <= T_min)
        {
            T_min = temperatura;
        }
        if (temperatura >= T_max)
        {
            T_max = temperatura;
        }
    } while (i <=6);

    cout << "La temperatura de hoy es: " << TAcumulada / 6 << " ° "<<endl;
    cout << "La temperatura minima es: " << T_min << " ° " << endl;
    cout << "La temperatura maxima es: " << T_max << " ° "<< endl;
    
    return 0;
}