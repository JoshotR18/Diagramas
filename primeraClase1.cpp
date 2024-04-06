#include <iostream>
using namespace std;

int main(){
    int numeros[10];
    int suma=0;
    int positivos=0;
    int pares=0;
    cout<<"ingrese 10 numeros: "<<endl;
    for (int i = 0; i < 10; i++)
    {

        
        cin>>numeros[i];
       suma=numeros[i]+suma;
        if (numeros[i]>0)
        {
          positivos++;
        }
        if (numeros[i]%2==0)
        {
           pares++;
        }
        
        
    }

    cout<<"La suma de los dies numeros es: "<<suma<<endl;
    cout<<"Cntidad de nuemros positivos: "<<positivos<<endl;
    cout<<"cantidad de numeros pares: "<<pares;
    return 0;
}