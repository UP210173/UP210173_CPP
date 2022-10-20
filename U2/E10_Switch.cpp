#include <iostream>

using namespace std;

int main()
{
    int a, b;
    int opc = 4;
    int r = 0;

    cout << "Elige una opcion"<<endl<<endl;
    cout << "Cual operacion? (1,2,3 o 4) =  ";
    cin >> opc;
    while (opc != 0)
    {
        cout << "Ingresa un número: ";cin>>a;
        cout << "Ingresa un segundo numero: "; cin>>b;

        switch (opc)
        {
        case 1:
            cout << "Suma" << endl;
            r = a + b;
            cout << "El resultado de la suma es: " << r << endl;
            break;
        case 2:
            cout << "Resta" << endl;
            r = a - b;
            cout << "El resultado de la resta es: " << r << endl;
            break;
        case 3:
            cout << "Multiplicacion" << endl;
            r = a * b;
            cout << "El resultado de la multiplicación es: " << r << endl;
            break;
        case 4:
            cout << "Division" << endl;
            if (b != 0)
            {
                r = a / b;
                cout << "El resultado de la division  es: " << r << endl;
            }
            else
            {
                cout << "Division invalidad" << endl;
            }

        default:
            cout << "Opcion invalida" << endl;
            break;
        }
        cout << "Elige una opcion";
        cout << "Cual operacion? (1,2,3 o 4)";
        cin >> opc;
    }
    return 0;
}