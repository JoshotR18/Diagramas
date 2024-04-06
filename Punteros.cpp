#include <iostream>
using namespace std;
int main(){
int num=0;
int *dir_memoria;
cout<<"ingrese un numero: ";
cin>>num;
dir_memoria=&num;
cout<<endl;
                 if (*dir_memoria%2==1)
{
         cout<<"El numero "<<num<<" es primo"<<endl;
         cout<<"Su posicion de memoria es: "<<dir_memoria<<endl;
}else{
            cout<<"El numero "<<num<<" no es primo"<<endl;
            cout<<"su direccion de memoria es: "<<dir_memoria;
}

    return 0;
}