/*
Unidad 3. Funciones
Autor: Morales Pérez Cristian Guadalupe / UP210173
*/
#include <iostream>
#include <math.h>
using namespace std;

#define n 6
#define PI 3.1416

long double factorial(int num)
{
    long double t= 1.0;
    for (int i = 1; i <= num; i++)
    {
        t *= i;
    }
    return t;
}

double rad(double grd)
{
    return grd * PI / 180;
}

double coseno(double x)
{
    double resultado = 0;
    for (int i = 0; i <= n; i++)
    {
        resultado = resultado + (pow(-1, i)*((pow(x, 2 * i)) / factorial(2 * i)));
    }
    return resultado;
}
int main()
{
    double angulo = rad(60), print;
    print = coseno(angulo);
    cout << "Coseno de 60 igual a  " << print << endl;
    return 0;
}