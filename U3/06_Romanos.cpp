
/*
Unidad 3. Funciones
Autor: Morales Pérez Cristian Guadalupe / UP210173
*/
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int valor[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string simbolo[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"}
          ,resultado="";
    int num,i=0;
    cout<<"Numero: ";
    cin>>num;
    if(num>=1 && num<=4000)
    {
        int temp = num;
        while(temp > 0)
        {
            while(temp >= valor[i])
            {
                resultado += simbolo[i];
                temp -= valor[i];
            }
            i++;
        }
        cout<<"Resultado: "<<resultado<<endl;
    }
    return 0;
}