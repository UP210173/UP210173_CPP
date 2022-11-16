#include <iostream>

using namespace std;
int menorV(int x[], int N)
{
    int menor = x[0];

    for (int i = 0; i < N; i++)
    {
        if (x[i] < menor)
            menor = x[i];
    }
    return menor;
}

int mayor2(int x, int y)
{
    int mayor;
    mayor = (x > y) ? x : y; //if ternario
    /*
    if (x > y)
    {
        mayor = x;
    }
    else
    {
        mayor = y;
    }
    */
    return mayor;
}
int main()
{
    int n = 5;
    int cal[] = {10, 5, 6, -8, 7};

    //int menor = menorV(cal, 5);
    //cout << "Menor es igual: " << menor << endl;

    int mayor = mayor2(5,10);
    cout << "Mayor es igual: " << mayor << endl;
    /*
        int cal2[] = {10, 5, 6, 8, 7};
        int n = 5;
        double total = 0;
        for (int i = 0; i < n; i++)
        {
            total = total + cal2[i];
        }
        double promedio = total / n;
        cout << total << endl;
        cout << promedio << endl;

    */
    return 0;
}