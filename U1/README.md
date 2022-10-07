# <center> _**UNIT 2 Control structures and cycles**_  </center>  

# <center> _**Hello World**_  </center>
## Libraries
``` 
#include <iostream> 
``` 
## Processing 
```
int main(){
    cout<< "Hola mundos"<< endl;

    return 0;
}
```   
# <center> _**Par e Impar**_  
## Libraries
``` 
#include <iostream> 
``` 
## Processing 
```
int main()
{
    cout<< "Par o Impar"<< endl;

    return 0;
}
```  
# <center> _**Tipos de datos**_  
## Libraries  
``` 
#include <iostream>  
#include <stdio.h>
``` 
## Input  
``` 
#define PI 3.1416

using namespace std; //Para los nombre setsandar que maneja el cin y cout

const float pi = 3.1415;
int a = 45;

``` 
## Processing 
```
int main() //Regresa un valor entero
{
    int entero = 2147483647;
    float flotante = 3.4e38;
    double grande = 7.842765257;
    char caracter = 'C';
``` 
## Output  
```
cout<<"Este programa muestra los tipos de datos \n";
    cout<<"El numero entero es: "<< entero<< endl;
    cout<<"El tamaño del entero es "<< sizeof(entero) << " bytes" <<endl;
    cout<<"El caracter char es: " <<caracter<<endl;
    cout<<"El tamaño del char es "<< sizeof(caracter) << " bytes" <<endl;
    cout<<"El valor de PI es: "<< PI <<endl;
    cout<<"El valor de pi es: "<< pi <<endl;


   return 0;
}
``` 
# <center> _**Cycles**_  
## Libraries  
``` 
#include <iostream>  
``` 
## Processing 
```
int main()
{
    int n = 10, s1 = 0, s2 = 0, total = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            s1 = s1 + i;
        }
        else
        {
            s2 = s2 + i;
        }
        total = s1 + s2;
    }
``` 
## Output  
```
    printf("La suma de pares es: %d \n", s1);
    printf("La suma de impares es:  %d \n", s2);
    printf("La suma de total es: %d", total);
    return 0;
}

``` 
# <center> _**Ages**_  
## Libraries  
``` 
#include <iostream>  
``` 
## Input  
``` 
int main()
{
    int edad;
    cout << "Ingresa tu edad:  ";
    cin >> edad;
``` 
## Processing and Outputs
```
if (edad >= 1 && edad <= 150){
        if (edad <= 30){
            cout << "1ra edad" << endl;
        }
        else if (edad >= 31 && edad <= 60){
            cout << "2da edad" << endl;
        }
        else if (edad >= 61 && edad <= 90){
            cout << "3ra edad" << endl;
        }
        else if (edad >= 91 && edad <= 150){
            cout << "Horas extras" << endl;
        }
    }
    else
    {
        cout << "Edad inexistente" << endl;
    }
}
``` 
