#include <iostream>
#include <windows.h>
using namespace std;

#define c 4
#define f 4

void sumaF(int a[f][c], int r[f])
{
    cout << " Suma Filas " << endl;
    for (int i = 0; i < f; i++)
    {
         r[i] = 0;
        for (int j = 0; j < c; j++)
        {
            r[i] += a[i][j];
        }
         cout << r[i] << endl;
    }
   cout << endl;
}

void transpuesta(int x[f][c])
{
    cout << " Matriz Transpuesta " << endl;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < f; j++)
        {
            cout << x[j][i] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

void llenarM(int a[f][c])
{
    int contador = 1;
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            a[i][j] = contador;
            contador++;
        }
    }
}

void imprimirM(int x[f][c])
{
    cout << "Matriz" << endl;
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << x[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

void imprimirD(int m[f][c])
{
    cout << "La diagonal principal es" << endl;
    for (int i = 0; i < f; i++)
    {
        cout << m[i][i] << "\t";
        cout << endl;
    }
    cout << endl;
}

void sumaC(int a[f][c], int s[c]){
    cout << " Suma Columnas " << endl;
    for (int i = 0; i < c; i++)
    {
         s[i] = 0;
        for (int j = 0; j < f; j++)
        {
            s[i] += a[i][j];
        }
         cout << s[i] << endl;
    }
   cout << endl;
}
int main()
{
    // int f = 2;
    // int vector[] = {10,9,8,7};
    // int vector[4];
    // vector[i]=66;
    // int matriz[][c]= {{3, 2, 1}, {4, 5, 7}};//
    int matriz[f][c];
    int r[f];
    int s[c];
    llenarM(matriz);
    // imprimirV(vector, 4);
    imprimirM(matriz);
    imprimirD(matriz);
    sumaF(matriz, r);
    transpuesta(matriz);
    sumaC(matriz, s);
    return 0;
}
