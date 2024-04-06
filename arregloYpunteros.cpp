#include <iostream>
using namespace std;
int main(){
int numeros[]={1,2,45,78,56,98,0};
int *dir_numero;
dir_numero= numeros;
for(int i=0; i<7; i++){
    cout<<"En la direccion de memoria de: ["<<dir_numero<< "] se encuentra el numero: "<<*dir_numero++<<"  "<<"posicion del array: "<<i<<endl;
}


    return 0;
}