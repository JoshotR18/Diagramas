#include<iostream>
#include<unistd.h>
using namespace std;

struct Tarea
{
    string nombre;
    int tiempoEjecucion;
    Tarea *siguiente;
};

bool colaVacia(Tarea *frente){
    return (frente==NULL)? true : false;
}

void insertarCola(Tarea *&frente, Tarea *&fin, string nombre, int tiempoEjecucion){
    Tarea *nueva_tarea = new Tarea();
    nueva_tarea->nombre = nombre;
    nueva_tarea->tiempoEjecucion = tiempoEjecucion;
    nueva_tarea->siguiente = NULL;
    if (colaVacia(frente)){
        frente = nueva_tarea;
    }else{
        fin->siguiente = nueva_tarea;
    }
    fin = nueva_tarea;
    cout<<"Tarea "<<nombre<<" insertada"<<endl;
}

void eliminarCola(Tarea *&frente, Tarea *&fin, string &nombre, int &tiempoEjecucion){
    nombre = frente->nombre;
    tiempoEjecucion = frente->tiempoEjecucion;
    Tarea *aux = frente;
    if (frente == fin){
        frente = NULL;
        fin = NULL;
    }else{
        frente = frente->siguiente;  
    }
    delete aux;
    cout<<"La tarea "<<nombre<<" ha sido eliminada"<<endl;
}

int main(){
Tarea *frente = NULL;
Tarea *fin = NULL;
string nombre;
    int tiempoEjecucion;
    //5 tareas
         for(int i=0; i<5; i++){
            cout<<"Ingrese el nombre de la tarea: "<<endl;
            cin>>nombre;
            cout<<"Ingrese el tiempo estimado de ejecucion : "<<endl;
            cin>>tiempoEjecucion;
            insertarCola(frente, fin, nombre, tiempoEjecucion);
         }

    cout<<"Quitando las tareas: "<<endl;
    while (frente != NULL){ 
        eliminarCola(frente, fin, nombre, tiempoEjecucion);
        sleep(tiempoEjecucion);//slepp es una funcion de espera (en segundos)
    }

    return 0;
}
