#include <iostream>
#include <cmath>
using namespace std;
 int main()
 {
    float puntuacion;
    float inaceptable = round(0.0);
    float aceptable = round (0.4);
    float meritorio = round(0.6);
    float dinero;

    cout<<"Ingresa tu puntuacion: "<<endl;
    cin>>puntuacion;

    if(puntuacion == inaceptable){
        cout<<"Tu puntuacion es inaceptable"<<endl;
        dinero = inaceptable * 2400;
         cout<<"Tu ganancia es de: "<< dinero <<endl;
     } else if(puntuacion == aceptable){
        cout<<"Tu puntuacion es aceptable"<<endl;
        dinero = aceptable * 2400;
         cout<<"Tu ganancia es de: "<< dinero <<endl;
     }else if(puntuacion >= meritorio){
        cout<<"Tu puntuacion es meritoria"<<endl;
        dinero = meritorio * 2400;
         cout<<"Tu ganancia es de: "<< dinero <<endl;
     }else{
        cout<<"Puntuacion inavlida"<<endl;
     }
     cout<<endl;
     return 0;
    }
 