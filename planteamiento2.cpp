#include <iostream>
using namespace std;

int main() {
    int opcion;
    int n = 5;
    int matriz[5][5];

    cout << "Ingrese una opcion:"<<endl;
    cout << "0-salir"<<endl;
    cout << "1-matriz identidad"<<endl;
    cout << "2-matriz nula"<<endl;
    cout << "3-matriz escalar"<<endl;
    cin >> opcion;


// Matriz identidad
    if (opcion == 1) { 
        for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
        matriz[i][j] = (i == j);
            }
        }

        // Matriz nula
    } else if (opcion == 2) { 
    for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
     matriz[i][j] = 0;
            }
        }

        // Matriz escalar
    } else if (opcion == 3) { 
        int escalar = 2;
    for (int i = 0; i < n; ++i) {
     for (int j = 0; j < n; ++j) {
                matriz[i][j] = (i == j);
            }
        }
    }

    // Imprimir matriz
    if (opcion >= 1 && opcion <= 3) {
    for (int i = 0; i < n; ++i) {
     for (int j = 0; j < n; ++j) {
       cout << matriz[i][j] << " ";
            }
            cout << endl;
        }
    }else{
        cout<<"dato no validio" ;
    }

    return 0;
}