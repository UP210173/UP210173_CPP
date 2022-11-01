<h1 align="center"><strong><font face="Century Gothic"> UNIT 2 </font></strong></h1>  
<h1 align="center"><strong><font face="Century Gothic"> Control structures and cycles</font></strong></h1>  

<div align = "center">
<img src="/U2/U2Imagenes/c.gif" width="300">
</div>

---  
<h2 align="center"><strong><font face="Century Gothic"> Exercises </font></strong></h2>  

* [01_renta.cpp](https://github.com/UP210173/UP210173_CPP/blob/main/U2/01_renta.cpp)
* [02_Beneficios.cpp](https://github.com/UP210173/UP210173_CPP/blob/main/U2/02_Beneficios.cpp)
* [03_Juegos.cpp](https://github.com/UP210173/UP210173_CPP/blob/main/U2/03_Juegos.cpp)
* [04_Pizza.cpp](https://github.com/UP210173/UP210173_CPP/blob/main/U2/04_Pizza.cpp)
* [05_Temperaturas.cpp](https://github.com/UP210173/UP210173_CPP/blob/main/U2/05_Temperaturas.cpp)
* [06_Productos.cpp](https://github.com/UP210173/UP210173_CPP/blob/main/U2/06_Productos.cpp)
* [07_BinDec.cpp](https://github.com/UP210173/UP210173_CPP/blob/main/U2/07_BinDec.cpp)  

--- 
 <h2 align="center"><strong><font face="Century Gothic"> 01 RENTA </font></strong></h2>  

 ## Impuestos  
| Renta | Impuesto |  
| ----- | ------- |  
| Menos de $10,000 | 5 %|  
| Entre $10,000 y $20,000  | 15 % | 
| Entre $20,000 y $35,000 | 20 % |
| Entre $35,000 y $60,000 | 30 % |
| Mas de $60,000 | 45 % |

```  
#include <iostream>
using namespace std;

int main()
{
    int renta, desc, impuesto;
    cout << "Ingresa tu renta anual" << endl;
    cin >> renta;

    if (renta < 10000)
    {
        cout << "Tu impuesto es del 5%";
        desc = 5;
    }
    else if (renta <= 200000)
    {
        cout << "Tu impuesto es del 10%";
        desc = 10;
    }
    else if (renta <= 35000)
    {
        cout << "Tu impuesto es del 15%";
        desc = 15;
    }
    else if (renta <= 60000)
    {
        cout << "Tu impuesto es del 30%";
        desc = 30;
    }
    else if (renta > 60000)
    {
        cout << "Tu impuesto es del 45%";
        desc = 45;
    }
    impuesto = renta * desc / 100;
    cout << " \n Debes de pagar: $ " << impuesto << endl;
    
    return 0;
}  

## Renta = 65000
<div align = "center">
<img src="/U2/U2Imagenes/renta1.jpg" width="1000">
</div>  

## Renta = 36000
<div align = "center">
<img src="/U2/U2Imagenes/renta2.jpg" width="1000">
</div>

```  
--- 

<h2 align="center"><strong><font face="Century Gothic"> 02 Beneficios </font></strong></h2>  

## Puntuaciones 
| Nivel | Puntuación |  
| ----- | ------- |  
| Inaceptable | 0.0 |  
| Aceptable  | 0.4 | 
| Meritorio | 0.6 o más |  

```
#include <iostream>
#include <cmath>
using namespace std;
 int main()
 {
    float puntuacion;
    float inaceptable = 0.0;
    float aceptable = 0.4;
    float meritorio = 0.6;
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

## Puntuacion = 0.0  
<div align = "center">
<img src="/U2/U2Imagenes/ben1.jpg" width="1000">
</div>  

## Puntuacion = 0.6
<div align = "center">
<img src="/U2/U2Imagenes/ben2.jpg" width="1000">
</div>

 
``` 
---  
 <h2 align="center"><strong><font face="Century Gothic"> 03 Juegos </font></strong></h2>

 <h3 align="left"><strong><font face="Century Gothic"> Si el cliente es menor de 4 años puede entrar gratis, si tiene entre 4 y 18 años debe pagar $5 y si es mayor de 18 años, $10. </font></strong></h3> 

 ```  
#include <iostream>

using namespace std;

int main()
{
    int edad, cuota;

    // Pregunta para conocer la edad del usuario

    cout << "¿Cuantos años tienes? ";
    cin >> edad;

    // Proceso para calcular el precio de la entrada

    if (edad >= 4 && edad <= 18)
    {
        cuota = 5;
        if (edad > 18)
        {
            cuota = 10;
        }
        cout << "Deberas de pagar un total de: $" << cuota << endl;
    }
    else
    {
        cout << "Tu entrada es gratuita" << endl;
    }

    return 0;
}  

## Edad =  14 años
<div align = "center">
<img src="/U2/U2Imagenes/j1.jpg" width="1000">
</div>  

## Edad = 3 años
<div align = "center">
<img src="/U2/U2Imagenes/j2.jpg" width="1000">
</div>

 ```  
 ---  
 <h2 align="center"><strong><font face="Century Gothic"> 04 Pizzas </font></strong></h2>

 <h3 align="left"><strong><font face="Century Gothic"> La pizzería Bella Napoli ofrece pizzas vegetarianas y no vegetarianas a sus clientes. Los ingredientes para cada tipo de pizza aparecen a continuación.</font></strong></h3> 

 * Ingredientes vegetarianos: Pimiento y tofu.
 * Ingredientes no vegetarianos: Peperoni, Jamón y Salmón.  
  
  ```
  #include <iostream>


using namespace std;

int main(){

    int pizza;
    int ingrediente;

    cout << "Indique aqui la pizza que desea ordenar \n";
    cout << "1. Vegetariana \n";
    cout << "2. No vegetariana \n";
    cin >> pizza;
    
    if(pizza == 1){
        cout << "\nMENU VEGETARIANO \n"; 
        cout << "1. Pimiento \n";
        cout << "2. Tofu \n";

        cout << "\nEliga el ingrediente extra que desea agregar \n";
        cin >> ingrediente; 
        if(ingrediente == 1){
            cout << "\nPedido \n"; 
            cout << "Pizza vegetariana \n";
            cout << "Mozzarella y tomate \n";
            cout << "Ingrediente extra: \n";
            cout << "Pimiento";
        }else if(ingrediente == 2){
            cout << "\nPedido \n"; 
            cout << "Pizza vegetariana \n";
            cout << "Mozzarella y tomate \n";
            cout << "Ingrediente extra: \n";
            cout << "Tofu";
        }
    }else if(pizza == 2){
        cout << "\nMENU NO VEGETARIANO\n";
        cout << "1. Peperoni\n";
        cout << "2. Jamon\n";
        cout << "3. Salmon";

        cout << "\nEliga sus ingredientes\n";
        cin >> ingrediente; 
        if(ingrediente == 1){
            cout << "\nPedido \n"; 
            cout << "Pizza no vegetariana \n";
            cout << "Mozzarella y tomate \n";
            cout << "Ingrediente extra: \n";
            cout << "Peperoni";
        }else if(ingrediente == 2){
            cout << "\nPedido \n"; 
            cout << "Pizza no vegetariana \n";
            cout << "Mozzarella y tomate \n";
            cout << "Ingrediente extra: \n";
            cout << "Jamon";
        }else if(ingrediente == 3){
            cout << "\nPedido \n"; 
            cout << "Pizza no vegetariana \n";
            cout << "Mozzarella y tomate \n";
            cout << "Ingrediente extra: \n";
            cout << "Salmon";
        }
    }
    cout << endl;
    return 0;
}  

## Pizza Vegetariana
<div align = "center">
<img src="/U2/U2Imagenes/p1.jpg" width="1000">
</div>  

## Pizza No Vegetariana
<div align = "center">
<img src="/U2/U2Imagenes/p2.jpg" width="1000">
</div>

  ```  
  --- 

  <h2 align="center"><strong><font face="Century Gothic"> 05 Temperaturas </font></strong></h2>  
  <h3 align="left"><strong><font face="Century Gothic"> Hacer un programa en el que se ingresen 6 temperaturas y determine el promedio, la mas baja y la mas alta.</font></strong></h3>  

```  
#include <iostream>

using namespace std;

int main()
{
    float TAcumulada = 0, temperatura;
    int T_min = 9999, T_max = -9999, i = 0;

    cout << "Metereologo" << endl;

    do
    {
        cout << "Introduce la temperatura: " << endl;
        cin >> temperatura;
        TAcumulada = TAcumulada + temperatura;

        i ++;
        if (temperatura <= T_min)
        {
            T_min = temperatura;
        }
        if (temperatura >= T_max)
        {
            T_max = temperatura;
        }
    } while (i <=6);

    cout << "La temperatura de hoy es: " << TAcumulada / 6 << " ° "<<endl;
    cout << "La temperatura minima es: " << T_min << " ° " << endl;
    cout << "La temperatura maxima es: " << T_max << " ° "<< endl;
    
    return 0;
}  

## Temperaturas
<div align = "center">
<img src="/U2/U2Imagenes/t2.jpg" width="1000">
</div>  



```  
---  
<h2 align="center"><strong><font face="Century Gothic"> 06 Productos </font></strong></h2>

 <h3 align="left"><strong><font face="Century Gothic"> Realizar un programa que lea indefinidamente cantidades de productos y su precio, y al final indique el total de la factura. Para saber que se ha terminado con la compra, se deberá ingresar un 0 en la cantidad...</font></strong></h3>   

 ```  
 #include <iostream>

using namespace std; 
int main(){

    int cant; 
    float precio, total; 


    do{
        cout << "Cantidad de productos que vas a comprar: ";
        cin >> cant; 

        if(cant != 0){
            cout << "Precio de producto: ";
            cin >> precio;

            total = total + precio * cant;
        } 

    }while(cant != 0);
    cout << "Factura" << endl;
    cout<< "-----------------" << endl;
    cout << "Tienes que pagar la cantidad de: $"<< total;
    return 0;
}  

 ```  
 ---  
 <h2 align="center"><strong><font face="Century Gothic"> 07 Binario a Decimal </font></strong></h2>  
  <h3 align="left"><strong><font face="Century Gothic"> Realice un programa que realice la conversión de binario a decimal, solo para números enteros mayores a 0. El resultado puede ser mostrado mediante una variable entera o en un conjunto de caracteres</font></strong></h3>  

```  
#include <iostream>

using namespace std;

int main()
{
    int contador = 1;
    int numero = 0;
    string resultado;

    cout << "Ingresa un número: ";
    cin >> numero;

    if (numero > 0)
    {

        while (numero != 0)
        {

            resultado = (numero % 2 == 0) ? "0" + resultado : "1" + resultado;
            numero /= 2;
        }

        cout << "El numero binario es " << resultado << endl;
    }
    else if (numero == 0)
    {

        cout << "El numero en binario es 0. \n";
    }
    else
    {
        cout << "Solo puedes ingresar numeros iguales o mayores a 0. \n";
    }
    return 0;
}  

``` 






