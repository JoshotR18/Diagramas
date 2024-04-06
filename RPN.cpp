#include <iostream>
#include <sstream>

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

               void popPila(Nodo *&pila) {
                  Nodo *aux = pila;
                  pila = aux->siguiente;
                  delete aux;
               }

                        int main() {
               string expresion;
               cout << "Introduce una expresion(con los operadores) en notacion polaca inversa:" ;
               getline(cin, expresion);

            Nodo *pila = NULL;
            stringstream ss(expresion);
            string token;

    while (getline(ss, token, ' ')) {
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            int num2 = pila->dato;
            popPila(pila);
            int num1 = pila->dato;
            popPila(pila);

            if (token == "+") agregarPila(pila, num1 + num2);
            else if (token == "-") agregarPila(pila, num1 - num2);
            else if (token == "*") agregarPila(pila, num1 * num2);
            else agregarPila(pila, num1 / num2);
             } else {
            agregarPila(pila, stoi(token));
        }
    }

    cout << "El resultado es: " << pila->dato << endl;

    return 0;
}
