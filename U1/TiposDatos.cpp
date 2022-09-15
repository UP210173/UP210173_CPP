/* Unidad 1. Tipo de datos
    Autor: Cristian G Morales Pérez / UP210173
    Fecha: 15 de Septiembre 2022
    Descripción: Muestra lod diferentes tipos de datos en c++
*/

#include<iostream> //Libreria para el manejo de entradas y salida de la pantalla
#include<stdio.h> //Libreria para el uso de printf y scanf

using namespace std; //Para los nombre setsandar que maneja el cin y cout

int main() //Regresa un valor entero
{
    int entero = 2147483647;
    float flotante = 3.4e38;
    double grande = 7.842765257;
    char caracter = 'C';

    cout<<"Este programa muestra los tipos de datos \n";
    cout<<"El numero entero es: "<< entero<< endl;
    cout<<"El tamaño del entero es "<< sizeof(entero) << "bytes" <<endl;
    cout<<"El caracter char es: " <<endl;
    cout<<"El tamaño del char es "<< sizeof(caracter) << "bytes" <<endl;

   get char(); //Para correr el programa de windows
   return 0;
}
