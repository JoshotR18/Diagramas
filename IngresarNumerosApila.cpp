#include <iostream>

using namespace std;

struct Nodo {
    int dato;
    Nodo *siguiente;
};

void agregarPila(Nodo *&pila, int n) {
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;
}

void mostrarPila(Nodo *pila) {
    Nodo *aux = pila;
    while (aux != NULL) {
        cout << aux->dato << " ";
        aux = aux->siguiente;
    }
    cout << endl;
}

int main() {
    Nodo *pila = NULL;
    int num;
    char respuesta;

    do {
        cout << "Introduce un numero entero: ";
        cin >> num;
        agregarPila(pila, num);

        cout << "quieres agregar otro numero? (s/n): ";
        cin >> respuesta;
    } while (respuesta == 's' || respuesta == 'S');

    cout << "Valores ingresados: ";
    mostrarPila(pila);

    return 0;
}

