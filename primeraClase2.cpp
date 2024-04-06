#include<iostream>
using namespace std;

int main(){

        int numeros[30];
        double promedio=0;
        int sumTotal=0;
        int mayor=0;

        cout<<"ingrese 30 numeros: "<<endl;

        for (int i = 0; i < 30; i++)
        {
            cin>>numeros[i];
            sumTotal=numeros[i]+sumTotal;
            if (numeros[i]>mayor)
            {
                mayor=numeros[i];
            }
            
      
        }
        promedio=sumTotal/30;
        cout<<"el promedio de los 30 numeros es: "<<promedio<<endl;
                cout<<"La suma de los numeros es: "<<sumTotal<<endl;
                          cout<<"El mayor de los numeros es: "<<mayor<<endl;






    return 0;
}