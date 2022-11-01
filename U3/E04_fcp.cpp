#include <iostream>

using namespace std;

//Declarar metodo
long int factorial(int n);
long int permutacion(int n, int r); //5P2 = 20
long int combinacion(int n, int r); //5C5 = 10 
long int euler(int n;)

int main()
{
    long int r;
    r = factorial(4);
    int rp = permutacion(5,2);
    int cp = combinacion(5,2);
    //cout<< r << endl;

    cout <<"Permutacion =  "<< rp << endl;
    cout <<"Combinacion =  "<< cp << endl;
    return 0;
}

long int factorial(int n)
{
    long int ft = 1;
    int i;

    for (i = 1; i <= n; i++)
    {
        ft = ft * i;
    }

    return ft;
}

long int permutacion(int n, int r)
{
  
int p = factorial(n) / factorial(n-r);

return p;

}

long int combinacion(int n, int r)
{
  
int c = factorial(n) / factorial(n-r) / factorial(r);

return c;

}

