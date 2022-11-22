
#include <iostream>
#include <math.h>
using namespace std;

#define n 5
double res(double num, double m)
{
    double res = pow(num - m,2);
    return res;
}

void llenar(double r[], int nt, double datos[], double m)
{
    for (int i = 0; i < nt; i++)
    {
        r[i] = res(datos[i], m);
    }
}
double media(double datos[n], int nt)
{
    int media = 0;
    for (int i = 0; i < nt; i++)
    {
        media += datos[i]; 
    }

    return media / nt;
}

double suma(double res[], double sumatoria, int nt)
{

    for (int i = 0; i < nt; i++)
    {
        sumatoria = sumatoria + res[i];
    }

    return sumatoria;
}

int main()
{
    double datos[] = {600, 470, 170, 430, 300};
    double m = media(datos, n);
    double r[n];
    double sumatoria, dep, dem;

    llenar(r, n, datos, m);
    sumatoria = suma(r, sumatoria, n);
    dep = sqrt(sumatoria / n);
    dem = sqrt(sumatoria / (n - 1));

    cout << "La desviacion estandar poblacional es: " << dep << endl;
    cout << "La desviacion estandar de la muestra es: " << dem << endl;

    return 0;
}