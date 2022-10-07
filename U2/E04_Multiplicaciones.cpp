/* Unidad 2. Tablas de Multiplicar
    Autor: Cristian G Morales Pérez / UP210173
    06 de Octubre de 2022
    Objetivo: Tablas de Mulpitlicar introducidas por el usuario con Ciclos while/do while 

*/
#include <iostream>

using namespace std;

int main()
{
    int n, num, i=1;
    char opc ='s';
    cout<<"Hasta que numero vas a multiplicar"<<endl;
    cin>>num;
    while(opc == 's'){
        cout<<"Cual numero vas a multiplicar"<<endl;
        cout<< "Numero:  "<<endl;
        cin>>n;
    do{
        cout<< n << " x " << i << " = " << i*n << endl;
        i++;    
        }
    while(i<=0);
    cout<< "Tabla de multiplicar de forma descendente"<<endl;
    do{
        cout<< n << " x " << i << " = " << i*n << endl;
        i--;
    }
    while(i>0);
    cout<<"Deseas multiplicar otro numero <s/n>"<<endl;
    cin>>opc;
    }
    cout<<"... hecho";
    return 0;
}