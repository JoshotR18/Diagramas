#include<iostream>
using namespace std;

struct Cliente
{
    string nombre;
    bool tieneReservacion;
    Cliente *siguiente;
};

         void insertarCliente(Cliente *&inicio, Cliente *&fin, string nombre, bool tieneReservacion){
            Cliente *nuevo_cliente = new Cliente();
            nuevo_cliente->nombre = nombre;
            nuevo_cliente->tieneReservacion = tieneReservacion;
            nuevo_cliente->siguiente = NULL;
            if(inicio == NULL){
               inicio = nuevo_cliente;
            }else{
               fin->siguiente = nuevo_cliente;
            }
            fin = nuevo_cliente;
}

         void atenderCliente(Cliente *&inicioConReservacion, Cliente *&finConReservacion, Cliente *&inicioSinReservacion, Cliente *&finSinReservacion){
            if(inicioConReservacion != NULL){
               Cliente *aux = inicioConReservacion;
               cout << "Atendiendo al cliente " << aux->nombre << " con reservacion." << endl;
               inicioConReservacion = inicioConReservacion->siguiente;
               delete aux;
            }else if(inicioSinReservacion != NULL){
               Cliente *aux = inicioSinReservacion;
               cout << "Atendiendo al cliente " << aux->nombre << " sin reservacion." << endl;
               inicioSinReservacion = inicioSinReservacion->siguiente;
               delete aux;
            }else{
               cout << "No hay clientes en la cola." << endl;
            }
         }

            int main(){
    Cliente *inicioConReservacion = NULL;
    Cliente *finConReservacion = NULL;
    Cliente *inicioSinReservacion = NULL;
    Cliente *finSinReservacion = NULL;
             insertarCliente(inicioConReservacion, finConReservacion, "Jose", true);
            insertarCliente(inicioSinReservacion, finSinReservacion, "Leom", false);
             insertarCliente(inicioConReservacion, finConReservacion, "Pedo", true);
                insertarCliente(inicioSinReservacion, finSinReservacion, "Maria", false);
             insertarCliente(inicioSinReservacion, finSinReservacion, "Sergio", true);
            insertarCliente(inicioSinReservacion, finSinReservacion, "juan", true);

      while(inicioConReservacion != NULL || inicioSinReservacion != NULL){
             atenderCliente(inicioConReservacion, finConReservacion, inicioSinReservacion, finSinReservacion);
    }

          return 0;
}
