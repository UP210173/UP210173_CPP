/* 
    Unidad 3. Euler
    Autor: Cristian G Morales Pérez / UP210173
    25 de Octubre de 2022
    Descripcion: Se muestra el valor de euler a partir de factoriales

*/


#include <iostream>

using namespace std;

long int factorial(int n); // 


int main()
{
    int s; //S es para la suma acumulada
    double e = 0; //    Utilizar variable double para el resultado de euler en decimal
    cout<<"Escribe un numero entre 1 y 10: "<<endl;
    cin>>s;

    for(int i = 0; i < s; i++){ //Contador
        double f = factorial(i);
        e += 1 / f; // Para la suma de los factoriales
    }
    cout << "Valor aproximado de euler de acuerdo a la base ingresada "<< s <<" entonces Euler es igual a:  " << e <<endl; //Imprime el valor de euler de acuerdo a la base ingresada
}

long int factorial(int n)
{
    int fact = n;
    if(fact > 1){ // El factorial debe de ser mayor a 1 
         return (fact = n * factorial(n-1)); //Para que regrese el factorial

    }else{
        return 1; // Sino se cumple el condicional regresa un 1.
    }

}
