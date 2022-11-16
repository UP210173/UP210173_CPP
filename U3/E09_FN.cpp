#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char letra = 'A';
    char texto[20] = "uni10ver20sida41d";
    char texto2[] = {'A', 'D', 'I', 'O', 'S'};

    for (int i = 0; texto[i] != '\0'; i++)
    {
        cout << texto[i] << " " << endl;
    }

    cout << endl;
    for (int i = 0; texto[i] != '\0'; i++)
    {
        if (texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u')
        {
            cout << texto[i] << endl;
        }
    }
    for (int i = 0; texto[i] != '\0'; i++)
    {
        if (isdigit(texto[i]))
        {
            cout << texto[i];
        }
    }
    cout << endl;
    for (int i = 0; texto[i] != '\0'; i++)
    {
        if (islower(texto[i]))
        {
            texto[i] = toupper(texto[i]);
            cout << texto[i] << " ";
        }
    }

    strcat(texto, "La mejor");
    cout << texto << endl;

    cout<< strchr(texto,' ');
    cout << endl;
    return 0;
}