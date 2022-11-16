#include <iostream>
#include <time.h>
#define f 2
#define c 3

using namespace std;

int main()
{

    srand(time(NULL)); // Generar una semilla
    int n;
    int matriz[f][c];
    int matrizT[c][f];
    cout << " Matriz Original " << endl;
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            n = 21 + rand() % (10);
            matriz[i][j] = n;
            cout << matriz[i][j] << "\t";
            matrizT[j][i] = matriz[i][j];
        }
        cout << endl;
        cout << endl;
    }
    cout << "Transpuesta" << endl;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < f; j++)
        {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}