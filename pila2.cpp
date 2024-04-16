#include<iostream>
using namespace std;

struct Nodo{
   string dato;
   Nodo *siguiente;
};

void agregarPila(Nodo *&pila, string n){
  Nodo *nuevo_nodo=new Nodo();
  nuevo_nodo->dato=n;
  nuevo_nodo->siguiente=pila;
  pila=nuevo_nodo;
};
void sacarPila(Nodo *&pila, string &n){
 Nodo *aux = pila;
 n=aux->dato;
 pila=aux->siguiente;
 delete aux;
 cout<<"Eliminando "<<n<<" del nodo."<<endl;
};

int main(){
   Nodo *pila=NULL;
   string n;
   string n2;
   string n3;
   cout<<"ingrese el primer nombre a agregar: ";
   cin>>n;
   agregarPila(pila, n);
      cout<<"ingrese el segundo nombre a agregar: ";
      cin>>n2;
   agregarPila(pila, n2);
 cout<<"ingrese el tercer nombre a agregar: ";
      cin>>n3;
   agregarPila(pila, n3);

   while (pila!=NULL)
   {
      sacarPila(pila, n);
   }
   
  
   

   return 0;
}
