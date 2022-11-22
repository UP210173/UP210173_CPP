#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

int main()
{
    char apellidoP[50], apellidoM[50], nombre[50], rfc[50], a[50];
    cout << "Apellido paterno" << endl;
    cin >> apellidoP;
    cout << "Apellido materno " << endl;
    cin >> apellidoM;
    cout << "Nombre(s) " << endl;
    cin >> nombre;
    cout << "Fecha de nacimiento aaaa/mm/dd" << endl;
    cin >> a;

    rfc[0] = apellidoP[0];
    rfc[1] = apellidoP[1];
    rfc[2] = apellidoM[0];
    rfc[3] = nombre[0];
    strcat(apellidoP, apellidoM);
    strcat(apellidoM, nombre);
    strcat(nombre, a);

    cout << rfc << a << endl;

    return 0;
}