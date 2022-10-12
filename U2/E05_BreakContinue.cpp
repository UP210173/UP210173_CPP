#include <iostream>

using namespace std;

int main()
{
    int n = 5;
    int i = 1;
    for (int i = 0; i <= 10; i++)
    {
        if (i == 6)
        {
            break; //continue;
        }
        else
        {
            cout << i << endl;
        }
        cout << "Siguiente numero  "<< i << endl;
    }
    cout << "... Hecho"<< endl;
    return 0;
}
