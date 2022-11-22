#include <iostream>
using namespace std;
long double factorial(int);
int main()
{
    int n;
    cout << "Introduzca un numero: ";
    cin >> n;
    cout << "Factorial: " << factorial(n) << endl;
}
long double factorial(int n)
{
    long double fact;
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}