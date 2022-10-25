/* Unidad 2. Cadenas
    Autor: Cristian G Morales Pérez / UP210173
    13 de Octubre de 2022
    Objetivo:
*/
/*
    isalpha Pregunta si la variable es alfanumerica
    isdigit Pregunta si es numero
    isalnum Pregunta si son letras o numeros
    isspace Para espacios
    islower Pregunta si las letras son minusculas
    isupper Pregunta si las letras son mayúsculas
    tolower Cambia las letras a mayúsculas
    toupper Cambia las letras a minúsculas
*/
#include <iostream>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    string cadena ="Universidad";
    char texto [30] = "Politecnica";
    int longitud = cadena.length();
    int v_i = 0;
    int i = 0;

    for (int i = 0; i < longitud; i++)
    {
         cout << cadena[i] << " " ;

    }
    cout<< endl;
    i=0;
    while(texto[i] != '\0')
    {
        texto[i] = toupper (texto[i]);
        cout << texto [i] << " ";
        i++;
    }
    
    for(int i = 0; i < 30; i++){
        cout<< texto [i] << " ";
    }

    switch(cadena[i])
    {
        case 'i' : v_i++; break;
    }
    
    if (isalpha(texto[0]))
{ 
}

    cout<<" Total de vocales i: "<< v_i << endl;
    cout << "ready" << endl;
    return 0;
    
}
