#include <iostream>
#include <math.h>
using namespace std;

bool esBisiesto(int a)
{
    if (a % 400 == 0 || (a % 4 == 0 && a % 100 != 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int a;
    cout << "Ingresa un año" << endl;
    cin >> a;

    if (esBisiesto(a) == true)
    {
        cout << "El año es bisiesto \n"
             << endl;
    }
    else
    {
        cout << "El año no es bisiesto \n"
             << endl;
    }
    return 0;
}