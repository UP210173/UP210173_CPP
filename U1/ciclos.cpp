#include <iostream>
using namespace std;

int main()
{
    int n = 10, s1 = 0, s2 = 0, total = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            s1 = s1 + i;
        }
            else
            {
                s2 = s2 + i;
            }
        total = s1 + s2;
    }
    printf("La suma de pares es: %d \n", s1);
    printf("La suma de impares es:  %d \n", s2);
    printf("La suma de total es: %d", total);
    return 0;
}