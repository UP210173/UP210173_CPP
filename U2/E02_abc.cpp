/* Unidad 2. Abecedario
    Autor: Cristian G Morales Pérez / UP210173
    28 de Septiembre de 2022
    Objetivo: Mostrara el abecedario

*/
#include<iostream>
using namespace std;

int main(){
    char letra = 90;
cout<<"Abecedario al reves";
cout<<endl;
    for (int i = 0; i < 26; i++)
    {
        cout<<letra<<"\t";
        letra=letra - 1;
    }


    letra='A';
    cout<<"Abecedario en Mayusculas";
    cout<<endl;
    for (int i = 0; i < 26; i++)
    {
        cout<<letra<<"\t";
        letra=letra + 1;
        cout<<endl;
    }
    letra='a';
    cout<<"Abecedario en minusculas";
    cout<<endl;
    for (int i = 0; i < 26; i++)
    {
        cout<<letra<<"\t";
        letra=letra + 1;
        cout<<endl;
    }

    cout<<"Numeros descendentes";
    cout<<endl;
    for (int i = 10; i > 0; i--)
    {
      cout<<endl<<i;
    }
    return 0;
}
