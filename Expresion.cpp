#include <iostream>

using namespace std;

struct Nodo {
    char dato;
    Nodo *siguiente;
};

void agregarPila(Nodo *&pila, char n) {
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;
}

void popPila(Nodo *&pila) {
    Nodo *aux = pila;
    pila = aux->siguiente;
    delete aux;
}

bool balance(string expresion) {
    Nodo *pila = NULL;
    for (char c : expresion) {
        if (c == '(') {
            agregarPila(pila, c);
        } else if (c == ')') {
            if (pila == NULL) {
                return false;
            }
            popPila(pila);
        }
    }
    return pila == NULL;
}

int main() {
    string expresion;
    cout << "Introduce una expresion que contenga parentesis: ";
    cin >> expresion;

    if (balance(expresion)) {
        cout << "La expresion esta balanceada." << endl;
    } else {
        cout << "La expresion no estaa balanceada." << endl;
    }

    return 0;
}
