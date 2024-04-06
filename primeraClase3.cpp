#include<iostream>
using namespace std;
int main(){

  int numeros[35];
        double promedio=0;
        int sumTotal=0;
        int mayor=0;
        int menor=1000000;
        int impar=0;

        cout<<"ingrese 35 numeros: "<<endl;

        for (int i = 0; i < 35; i++)
        {
            cin>>numeros[i];
            sumTotal=numeros[i]+sumTotal;
            if (numeros[i]>mayor)
            {
                mayor=numeros[i];
            }
            
            if (numeros[i]<menor)
            {
               menor=numeros[i];
            }
            if (numeros[i]%2==1)
            {
                impar++;
            }
            
            
      
        }
        promedio=sumTotal/35;
        cout<<"el promedio de los 35 numeros es: "<<promedio<<endl;
                cout<<"La suma de los numeros es: "<<sumTotal<<endl;
                          cout<<"El mayor de los numeros es: "<<mayor<<endl;
                                cout<<"El numero menor es: "<<menor<<endl;
                                    cout<<"la cantidad de impares es: "<<impar<<endl;



    return 0;
}