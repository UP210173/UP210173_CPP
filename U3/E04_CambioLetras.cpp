#include <iostream>
#include <cmath>
using namespace std;

string camello(string x)
{
    int lon = x.length();
    for (int i = 0; i < lon; i++)
    {
        if (islower(x[i]))
        {
            x[i] = toupper(x[i]);
        }
        else
        {
            x[i] = tolower(x[i]);
        }
    }
    return x;
}

char *camelloC(char *x)
{
    int i = 0;
    while (x[i] != '\0')
    {

        if (islower(x[i]))
        {
            x[i] = toupper(x[i]);
        }
        else
        {
            x[i] = tolower(x[i]);
        }
        cout << x[i] << " ";
        i++;
    }
    return x;
}

int main()
{
    /*
     string res = camello("Upa");
      cout << res << endl;
    return 0;
    */
    char texto[50] = "uPA";
    char *txt;
    txt = camelloC(texto);
    cout << "->  " << txt << endl;
    return 0;
}
