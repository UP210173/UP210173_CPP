#include <iostream>
using namespace std;

int main()
{
    int edad;
    cout << "Ingresa tu edad:  ";
    cin >> edad;

    if (edad >= 1 & edad <= 150)
    {
        if (edad >= 1 & edad <= 30)
        {
            cout << "1ra edad" << endl;
        }
        if (edad >= 31 & edad <= 60)
        {
            cout << "2da edad" << endl;
        }
        if (edad >= 61 & edad <= 90)
        {
            cout << "3ra edad" << endl;
        }
        if (edad >= 91 & edad <= 150)
        {
            cout << "Horas extras" << endl;
        }
    }
    else
    {
        cout << "Edad inexistente" << endl;
    }
}