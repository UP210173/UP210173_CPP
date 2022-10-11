/* Unidad 2. Productos
    Autor: Cristian G Morales Pérez / UP210173
    09 de Octubre de 2022
    Descripcion: Muestra el precio total de n cantidad de productos

*/
#include <iostream>

using namespace std; 
int main(){

    int cant; 
    float precio, total; 


    do{
        cout << "Cantidad de productos que vas a comprar: ";
        cin >> cant; 

        if(cant != 0){
            cout << "Precio de producto: ";
            cin >> precio;

            total = total + precio * cant;
        } 

    }while(cant != 0);
    cout << "Factura" << endl;
    cout<< "-----------------" << endl;
    cout << "Tienes que pagar la cantidad de: $"<< total;
    return 0;
}