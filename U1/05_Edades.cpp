/* Unidad 2. Edades
    Autor: Cristian G Morales Pérez / UP210173
    Objetivo: Muestra la etapa en la que se encuentra la persona
    Creado: 23 de septiembre 2022
    Editado: 27 de Septiembre 2022
    
    [1...150] Validacion
    [1...30] 1ra edad
    [31...60] 2da edad
    [61...90] 3ra edad
    [91...150] Horas Extras



*/

#include <iostream>
using namespace std;

int main()
{
    int edad;
    cout << "Ingresa tu edad:  ";
    cin >> edad;

    if (edad >= 1 && edad <= 150){
        if (edad <= 30){
            cout << "1ra edad" << endl;
        }
        else if (edad >= 31 && edad <= 60){
            cout << "2da edad" << endl;
        }
        else if (edad >= 61 && edad <= 90){
            cout << "3ra edad" << endl;
        }
        else if (edad >= 91 && edad <= 150){
            cout << "Horas extras" << endl;
        }
    }
    else
    {
        cout << "Edad inexistente" << endl;
    }
}