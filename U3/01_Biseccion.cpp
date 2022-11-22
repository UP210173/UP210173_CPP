#include <iostream>
#include <cmath>
using namespace std;

double fnecu1(double x)
{ // x^2 + 8x + 15

    return (pow(x, 2) - 8 * x + 15);
}
int main()
{
    double x1 = 4;
    double x2 = 7;
    double xnueva, r;

    double es = .0001;         // Error estandar o absoluto
    double er = abs(x2 - x1); // Error relativo

    int i = 1;

    while (er > es)
    {

        xnueva = (x1 + x2) / 2;

        if (fnecu1(x1) * fnecu1(xnueva) < 0)
        {

            x2 = xnueva;
        }
        else
        {
            x1 = xnueva;
        }

        er = abs(x2 - x1);
        i = i + 1;
    }
    cout << "i = " << i << "  raiz=  " << xnueva << endl;
    return 0;
}
