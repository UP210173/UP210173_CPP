<h1 align="center"><strong><font face="Century Gothic"> UNIT 3 </font></strong></h1>  
<h1 align="center"><strong><font face="Century Gothic"> Functions </font></strong></h1>  

<div align = "center">
<img src="/U2/U2Imagenes/c.gif" width="300">
</div>

---  
<h2 align="center"><strong><font face="Century Gothic"> Exercises </font></strong></h2>  

* [01_Biseccion.cpp](https://github.com/UP210173/UP210173_CPP/blob/main/U3/01_Biseccion.cpp)
* [02_Bisiesto.cpp](https://github.com/UP210173/UP210173_CPP/blob/main/U3/02_Bisiesto.cpp)
* [03_Coseno.cpp](https://github.com/UP210173/UP210173_CPP/blob/main/U3/03_Coseno.cpp)
* [04_DesviacionP.cpp](https://github.com/UP210173/UP210173_CPP/blob/main/U3/04_DesviacionP.cpp)
* [05_Monedas.cpp](https://github.com/UP210173/UP210173_CPP/blob/main/U3/05_Monedas.cpp)
* [06_Romanos.cpp](https://github.com/UP210173/UP210173_CPP/blob/main/U3/06_Romanos.cpp)
* [07_RFC.cpp](https://github.com/UP210173/UP210173_CPP/blob/main/U3/07_RFC.cpp)  
* [08_Vector.cpp](https://github.com/UP210173/UP210173_CPP/blob/main/U3/08_Vector.cpp)
* [09_FuncionRecursiva.cpp](https://github.com/UP210173/UP210173_CPP/blob/main/U3/09_FuncionRecursiva.cpp)

--- 
 <h2 align="center"><strong><font face="Century Gothic"> 01 BISECTION </font></strong></h2>  
 <h3 align="center"><strong><font face="Century Gothic"> In this program the square root will be found, based on an established margin of error </font></strong></h3> 

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
## First run
<div align = "center">
<img src="/U2/U2Imagenes/bis1.jpg" width="1000">
</div>  

## Second run
<div align = "center">
<img src="/U2/U2Imagenes/bis2.jpg" width="1000">
</div> 

--- 

 <h2 align="center"><strong><font face="Century Gothic"> 02 LEAP-YEAR </font></strong></h2>  
 <h3 align="center"><strong><font face="Century Gothic"> Leap years will be found in this program </font></strong></h3>  

---

```  
#include <iostream>
#include <math.h>
using namespace std;


bool esBisiesto(int año){
    if (año%400==0 || ( año%4==0 && año%100!=0 )){
        return true;
    }else{
        return false;
    }
}

int main()
{
    int a;
    cout << "Ingresa un año" << endl;
    cin >> a;

    if (esBisiesto(a)==true){
        cout << "El año es bisiesto \n" << endl;
    }else {
        cout << "El año no es bisiesto \n" << endl;
    }
    return 0;
}

```
## Year 2022
<div align = "center">
<img src="/U2/U2Imagenes/a1.jpg" width="1000">
</div>  

## Year 2024
<div align = "center">
<img src="/U2/U2Imagenes/a2.jpg" width="1000">
</div>  

---  

<h2 align="center"><strong><font face="Century Gothic"> 03 COSENO FUNCTION </font></strong></h2>  
<h3 align="center"><strong><font face="Century Gothic"> In this program, the cosine value of a specific angle will be given </font></strong></h3>  

---  

```  
#include <iostream>
#include <math.h>
using namespace std;

#define n 6
#define PI 3.1416

long double factorial(int num)
{
    long double t= 1.0;
    for (int i = 1; i <= num; i++)
    {
        t *= i;
    }
    return t;
}

double rad(double grd)
{
    return grd * PI / 180;
}

double coseno(double x)
{
    double resultado = 0;
    for (int i = 0; i <= n; i++)
    {
        resultado = resultado + (pow(-1, i)*((pow(x, 2 * i)) / factorial(2 * i)));
    }
    return resultado;
}
int main()
{
    double angulo = rad(60), print;
    print = coseno(angulo);
    cout << "Coseno de 60 igual a  " << print << endl;
    return 0;
}

```
## Coseno de 60 
<div align = "center">
<img src="/U2/U2Imagenes/cos1.jpg" width="1000">
</div>  
 
---  

<h2 align="center"><strong><font face="Century Gothic"> 04 STANDARD DEVIATION </font></strong></h2>  
<h3 align="center"><strong><font face="Century Gothic"> In this program, the standard deviation of specific values ​​in a population will be displayed. </font></strong></h3>  

---  

```  
#include <iostream>
#include <math.h>
using namespace std;

#define n 5
double res(double num, double m)
{
    double res = pow(num - m,2);
    return res;
}

void llenar(double r[], int nt, double datos[], double m)
{
    for (int i = 0; i < nt; i++)
    {
        r[i] = res(datos[i], m);
    }
}
double media(double datos[n], int nt)
{
    int media = 0;
    for (int i = 0; i < nt; i++)
    {
        media += datos[i]; 
    }

    return media / nt;
}

double suma(double res[], double sumatoria, int nt)
{

    for (int i = 0; i < nt; i++)
    {
        sumatoria = sumatoria + res[i];
    }

    return sumatoria;
}

int main()
{
    double datos[] = {600, 470, 170, 430, 300};
    double m = media(datos, n);
    double r[n];
    double sumatoria, dep, dem;

    llenar(r, n, datos, m);
    sumatoria = suma(r, sumatoria, n);
    dep = sqrt(sumatoria / n);
    dem = sqrt(sumatoria / (n - 1));

    cout << "La desviacion estandar poblacional es: " << dep << endl;
    cout << "La desviacion estandar de la muestra es: " << dem << endl;

    return 0;
}

```
## Standard Deviation
<div align = "center">
<img src="/U2/U2Imagenes/dp.jpg" width="1000">
</div>  

---  

<h2 align="center"><strong><font face="Century Gothic"> 05 COINS </font></strong></h2>  
<h3 align="center"><strong><font face="Century Gothic"> In this program from an amount of it will show how many bills or coins it will give you </font></strong></h3>  

---  
   
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
<img src="/U2/U2Imagenes/m1.jpg" width="1000">
</div>  

## Segunda cantidad de dinero
<div align = "center">
<img src="/U2/U2Imagenes/m2.jpg" width="1000">
</div>  

---  
 <h2 align="center"><strong><font face="Century Gothic"> 06 ROMAN NUMBERS </font></strong></h2>  
 <h3 align="center"><strong><font face="Century Gothic"> This program finds the Roman number from an Arabic number </font></strong></h3> 

 ---  

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

 ## Number 346
<div align = "center">
<img src="/U2/U2Imagenes/nr1.jpg" width="1000">
</div>  

## Number 777
<div align = "center">
<img src="/U2/U2Imagenes/nr2.jpg" width="1000">
</div>  

 ---  

  <h2 align="center"><strong><font face="Century Gothic"> 07 RFC </font></strong></h2>  
 <h3 align="center"><strong><font face="Century Gothic"> This program shows the rfc from personal data </font></strong></h3> 

 ---  
 
 ```  
#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

int main()
{
    char p1[100], p2[100], p3[100], rfc[100], p4[100];
    cout << "Ingresa el apellido paterno" << endl;
    cin >> p1;
    cout << "Ingresa el apellido materno " << endl;
    cin >> p2;
    cout << "Ingrese solo su primer nombre " << endl;
    cin >> p3;
    cout << "Ingresa tu fecha de nacimiento aaaa/mm/dd" << endl;
    cin >> p4;

    rfc[0] = p1[0];
    rfc[1] = p1[1];
    rfc[2] = p2[0];
    rfc[3] = p3[0];
    strcat(p1, p2);
    strcat(p2, p3);
    strcat(p3, p4);

    cout << rfc << p4 << endl;

    return 0;
}  

 ```  
 ## First RFC
<div align = "center">
<img src="/U2/U2Imagenes/rfc1.jpg" width="1000">
</div>  

## Second RFC
<div align = "center">
<img src="/U2/U2Imagenes/rfc2.jpg" width="1000">
</div>  

 ---  

  <h2 align="center"><strong><font face="Century Gothic"> 08 ORDERED VECTOR </font></strong></h2>  
 <h3 align="center"><strong><font face="Century Gothic"> This program orders vectors, using the bubble method </font></strong></h3> 

 ---  
 
 ```  
#include <stdio.h>
#define MAX 100

int main() {	
	int total;
	int vNumeros[MAX]; 
	int j, i, temp; 
	
	printf ("Cuantos numeros deseas ordenar? "); 
	scanf("%d", &total);
	
	/* Lee y almacena los datos en el arreglo */
	for (i = 0; i < total; i++) { 
		printf ("%d: ", i + 1); 
		scanf ("%d", &vNumeros[i]); 
	} 
	
	/* Método de búrbuja */
	for (i = 0; i < (total - 1); i++) { 
		for (j = i + 1; j < total; j++) { 
			if (vNumeros[j] < vNumeros[i]) { 
				temp = vNumeros[j]; 
				vNumeros[j] = vNumeros[i]; 
				vNumeros[i] = temp; 
			} 
		} 
	} 
	
	/* Números ordenados */
	printf ("Los numeros ordenados ascendentemente son:\n"); 
	for (i = 0; i < total; i++) { 
		printf("%d \n ", vNumeros[i]); 
	} 
	
	printf("\n"); 

}  

 ```  
 ## First Vector
<div align = "center">
<img src="/U2/U2Imagenes/v1.jpg" width="1000">
</div>  

## Second Vector
<div align = "center">
<img src="/U2/U2Imagenes/v2.jpg" width="1000">
</div>  

 ---  

  <h2 align="center"><strong><font face="Century Gothic"> 09 RECURSIVE FUNCTION </font></strong></h2>  
 <h3 align="center"><strong><font face="Century Gothic">Recursive function from the factorial of a number </font></strong></h3> 

 ---  
 
 ```  
#include <iostream>
using namespace std;
long double factorial(int);
int main()
{
    int n;
    cout << "Introduzca un numero: ";
    cin >> n;
    cout << "Factorial: " << factorial(n) << endl;
}
long double factorial(int n)
{
    long double fact;
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}  

 ```  
 ## First Recursive Function
<div align = "center">
<img src="/U2/U2Imagenes/fr1.jpg" width="1000">
</div>  

## Second Recursive Function
<div align = "center">
<img src="/U2/U2Imagenes/fr2.jpg" width="1000">
</div>  
