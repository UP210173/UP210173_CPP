/* Unidad 2. Edades
    Autor: Cristian G Morales Pérez / UP210173
    27 de Septiembre de 2022
    Objetivo: Mostrara a la persona el impuesto que les corresponde

*/
#include <iostream>
 using namespace std;

 int main()
 {
    int renta;
    cout<<"Ingresa tu renta anual"<<endl;
    cin>>renta;

    if(renta < 10000)
    {
        cout<<"Tu impuesto es del 5%";
    }
        else if(renta <= 200000){
            cout<<"Tu impuesto es del 10%";
        }
        else if(renta <=35000){
            cout<<"Tu impuesto es del 15%";
        }
        else if(renta <= 60000){
            cout<<"Tu impuesto es del 30%";
        }
        else if( renta > 60000){
            cout<<"Tu impuesto es del 45%";
        }
        return 0;
 }
 