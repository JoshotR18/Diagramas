#include<iostream>
using namespace std;

    struct Nodo
    {
        int dato;
       Nodo *siguiente;
    };

          bool colaVacia(Nodo *frente){
     return (frente==NULL)? true : false;
      }

      void insertarCola(Nodo *&frente, Nodo *&fin, int n){
         Nodo *nuevo_nodo = new Nodo();
         nuevo_nodo->dato=n;
         nuevo_nodo->siguiente=NULL;
         if (colaVacia(frente)){
               frente = nuevo_nodo;
         }else{
          fin->siguiente=nuevo_nodo;
         }
          fin = nuevo_nodo; //fin va afuera porque debe cumplirse en ambos casos
        cout<<"Elemento "<<n<<" insertado"<<endl;
      }
      void eliminarCola(Nodo *&frente, Nodo *&fin, int &n){
       n = frente->dato;
       Nodo *aux = frente;
       if (frente==fin)
       {
         frente = NULL;
         fin = NULL;
       }else{
         frente=frente->siguiente;  
       }
       delete aux;
  cout<<"el elemento "<<n<<" ha sido eliminado"<<endl;
      }
   

int main(){
Nodo *frente=NULL;
Nodo *fin =NULL;
int dato;
for(int i=0; i<5;i++){
cout<<"ingrese un numero: "<<endl;
 cin>>dato;
 insertarCola(frente, fin, dato);
}

 

  cout<<"quitanto los elementos: "<<endl;
while (frente!=NULL)
{ 
    eliminarCola(frente, fin, dato);
 
}




   return 0;
}