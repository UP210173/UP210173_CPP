/* Unidad 2. Puntuaciones
    Autor: Cristian G Morales Pérez / UP210173
    08 de Octubre de 2022
    Descripcion: Se mostra el dinero que gana dependiendo de la puntuacion.

*/
#include <iostream>
#include <cmath>
using namespace std;
 int main()
 {
    float puntuacion;
    float inaceptable = 0.0f;
    float aceptable = 0.4f;
    float meritorio = 0.6f;
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
 