#include <iostream>
#include <cstdlib>

using namespace std;

int hanoi(int n)
{
    if(n == 1){ // Si el numero de discos es 1, indica que solo puede hacerse un movimiento
        return 1;

    }else{
        return 2 * hanoi(n-1) + 1; // Numero de movimientos necesarios a partir de dos discos
    }
}

int main()
{
    int discos ;
    cout<< "      HANOI  \n\n";
    
    cout<< "Numero de discos: "; //Numero de discos
    cin>> discos;

    cout<<"\nMovimientos necesarios: "; //Imprime los movimientos dependiendo del numero de discos
    cout<< hanoi(discos);
    
    return 0;
}