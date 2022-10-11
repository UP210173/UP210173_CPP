/* Unidad 2. Pizzeria
    Autor: Cristian G Morales Pérez / UP210173
    08 de Octubre de 2022
    Descripcion: Pizza vegetariana o no vegetariana
*/
#include <iostream>


using namespace std;

int main(){

    int pizza;
    int ingrediente;

    cout << "Indique aqui la pizza que desea ordenar \n";
    cout << "1. Vegetariana \n";
    cout << "2. No vegetariana \n";
    cin >> pizza;
    
    if(pizza == 1){
        cout << "\nMENU VEGETARIANO \n"; 
        cout << "1. Pimiento \n";
        cout << "2. Tofu \n";

        cout << "\nEliga el ingrediente extra que desea agregar \n";
        cin >> ingrediente; 
        if(ingrediente == 1){
            cout << "\nPedido \n"; 
            cout << "Pizza vegetariana \n";
            cout << "Mozzarella y tomate \n";
            cout << "Ingrediente extra: \n";
            cout << "Pimiento";
        }else if(ingrediente == 2){
            cout << "\nPedido \n"; 
            cout << "Pizza vegetariana \n";
            cout << "Mozzarella y tomate \n";
            cout << "Ingrediente extra: \n";
            cout << "Tofu";
        }
    }else if(pizza == 2){
        cout << "\nMENU NO VEGETARIANO\n";
        cout << "1. Peperoni\n";
        cout << "2. Jamon\n";
        cout << "3. Salmon";

        cout << "\nEliga sus ingredientes\n";
        cin >> ingrediente; 
        if(ingrediente == 1){
            cout << "\nPedido \n"; 
            cout << "Pizza no vegetariana \n";
            cout << "Mozzarella y tomate \n";
            cout << "Ingrediente extra: \n";
            cout << "Peperoni";
        }else if(ingrediente == 2){
            cout << "\nPedido \n"; 
            cout << "Pizza no vegetariana \n";
            cout << "Mozzarella y tomate \n";
            cout << "Ingrediente extra: \n";
            cout << "Jamon";
        }else if(ingrediente == 3){
            cout << "\nPedido \n"; 
            cout << "Pizza no vegetariana \n";
            cout << "Mozzarella y tomate \n";
            cout << "Ingrediente extra: \n";
            cout << "Salmon";
        }
    }
    cout << endl;
    return 0;
}