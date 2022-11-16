<h1 align="center"><strong><font face="Century Gothic"> UNIT 3 </font></strong></h1>  
<h1 align="center"><strong><font face="Century Gothic"> Functions </font></strong></h1>  

<div align = "center">
<img src="/U2/U2Imagenes/c.gif" width="300">
</div>

---  
<h2 align="center"><strong><font face="Century Gothic"> Exercises </font></strong></h2>  

* [01_Biseccion.cpp](https://github.com/UP210173/UP210173_CPP/blob/main/U3/01_Biseccion.cpp)
* [06_Monedas.cpp](https://github.com/UP210173/UP210173_CPP/blob/main/U3/06_Monedas.cpp)
* [07_Romanos.cpp](https://github.com/UP210173/UP210173_CPP/blob/main/U3/07_Romanos.cpp)  

--- 
 <h2 align="center"><strong><font face="Century Gothic"> 01 BISECCION </font></strong></h2>  

```  
#include <iostream>
#include <cmath>
using namespace std;

double fnecu1(double x)
{ // x^2 + 8x + 15

    return (pow(x, 2) - 8 * x + 15);
}
int main()
{
    double x1 = -10;
    double x2 = 4.5;
    double xnueva, r;

    double es = .0001;         // Error estandar o absoluto
    double er = abs(x2 - x1); // Error relativo

    int i = 1;

    while (er > es)
    {

        xnueva = (x1 + x2) / 2;

        if (fnecu1(x1) * fnecu1(xnueva) < 0)
        {

            x2 = xnueva;
        }
        else
        {
            x1 = xnueva;
        }

        er = abs(x2 - x1);
        i = i + 1;
    }
    cout << "i= " << i << "  raiz=  " << xnueva << endl;
    return 0;
}

```
## Corrida 1 
<div align = "center">
<img src="/U2/U2Imagenes/" width="1000">
</div>  

## Corrida 2
<div align = "center">
<img src="/U2/U2Imagenes/" width="1000">
</div>  
--- 

<h2 align="center"><strong><font face="Century Gothic"> 06 DESGLOCE DE MONEDAS </font></strong></h2>   

```
#include <iostream>

using namespace std;

void obtenerCambio(int); //cambio - monto
void obtenerMonedas(int);
void imprimirCambio();

//variables globales 
int quinientos = 0, doscientos = 0, cien = 0;
int cincuenta = 0, veinte = 0;
int diez = 0, cinco = 0, dos = 0, uno = 0;
int resi; 

int main(){

    int dinero; 

    cout << "Dame la cantidad de dinero: ";
    cin >> dinero;
    cout << "\n"; 
    
    obtenerCambio(dinero);
    imprimirCambio();

    cout << endl; 
    return 0;
}

void obtenerMonedas(int dinero){

    diez = resi/10;
    resi = resi%10;
    cinco = resi/5;
    resi = resi%5;
    dos = resi/2;
    resi = resi%2;
    uno = resi/1;
    resi = resi%1;
}

void obtenerCambio(int dinero){

    quinientos = dinero/500;
    resi = dinero%500;
    doscientos = resi/200;
    resi = resi%200;
    cien = resi/100;
    resi = resi%100;
    cincuenta = resi/50;
    resi = resi%50;
    veinte = resi/20;
    resi = resi%20;

    obtenerMonedas(resi);
}

void imprimirCambio(){

    cout << "Tu cambio es: " << "\n"; 
    cout << "Billetes de $500: \n" << quinientos << "\n";
    cout << "Billetes de $200: \n" << doscientos << "\n";
    cout << "Billetes de $100: \n" << cien << "\n"; 
    cout << "Billetes de $50: \n" << cincuenta << "\n";
    cout << "Billetes de $20: \n" << veinte << "\n"; 
    cout << "Monedas de $10: \n" << diez << "\n";
    cout << "Monedas de $5: \n" << cinco << "\n";
    cout << "Monedas de $2: \n" << dos << "\n";
    cout << "Monedas de $1: \n" << uno << "\n"; 
}

```  
## Primera cantidad de dinero 
<div align = "center">
<img src="/U2/U2Imagenes/" width="1000">
</div>  

## Segunda cantidad de dinero
<div align = "center">
<img src="/U2/U2Imagenes/" width="1000">
</div>  

---  
 <h2 align="center"><strong><font face="Century Gothic"> 07 NUMEROS ROMANOS </font></strong></h2>

 <h3 align="left"><strong><font face="Century Gothic">  </font></strong></h3> 

 ```  
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int valor[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string simbolo[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"}
          ,resultado="";
    int num,i=0;
    cout<<"Numero: ";
    cin>>num;
    if(num>=1 && num<=4000)
    {
        int temp = num;
        while(temp > 0)
        {
            while(temp >= valor[i])
            {
                resultado += simbolo[i];
                temp -= valor[i];
            }
            i++;
        }
        cout<<"Resultado: "<<resultado<<endl;
    }
    return 0;
}

 ```  
 ## Numero 
<div align = "center">
<img src="/U2/U2Imagenes/" width="1000">
</div>  

## Numero
<div align = "center">
<img src="/U2/U2Imagenes/" width="1000">
</div>  

 ---  