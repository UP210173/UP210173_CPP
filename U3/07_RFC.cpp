/*
Unidad 3. Funciones
Autor: Morales Pérez Cristian Guadalupe / UP210173
*/
#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

int main()
{
    char p1[100], p2[100], p3[100], rfc[100], p4[100];
    cout << "Ingresa el apellido paterno" << endl;
    cin >> p1;
    cout << "Ingresa el apellido materno " << endl;
    cin >> p2;
    cout << "Ingrese solo su primer nombre " << endl;
    cin >> p3;
    cout << "Ingresa tu fecha de nacimiento aaaa/mm/dd" << endl;
    cin >> p4;

    rfc[0] = p1[0];
    rfc[1] = p1[1];
    rfc[2] = p2[0];
    rfc[3] = p3[0];
    strcat(p1, p2);
    strcat(p2, p3);
    strcat(p3, p4);

    cout << rfc << p4 << endl;

    return 0;
}