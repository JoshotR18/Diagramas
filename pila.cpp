#include <iostream>

using namespace std;
        struct Nodo
        {
            int dato;
            Nodo *siguiente;
        };
    void agregarPila(Nodo *&pila, int n){
        Nodo *nuevo_nodo = new Nodo();
        nuevo_nodo -> dato  =  n;
        nuevo_nodo -> siguiente = pila;
        pila=nuevo_nodo;
    }
        void sacarPila(Nodo *&pila, int &n){
            Nodo *aux =pila;
            n=aux->dato;
            pila=aux->siguiente;
            delete aux;
        }


int main(){
Nodo *pila=NULL;

int dato;
            for (int i = 0; i < 10; i++)
            {
                cout<<"ingrese el numero "<<i<<endl;
                cin>>dato;
                agregarPila(pila,dato);
            }


while (pila!=NULL)
{
    sacarPila(pila,dato);
            if (pila!=NULL){
                        cout<<dato<<", ";
            }else{
                cout<<dato<<" .";
            }
   
    
}





    return 0;
}