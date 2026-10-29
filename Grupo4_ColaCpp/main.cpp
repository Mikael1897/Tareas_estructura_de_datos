#include <iostream>
#include "Operaciones.h"
using namespace std;

int main() {
    Nodo* frente = nullptr;
    Nodo* fin = nullptr;

    cout << "Insertar 10, 20 y 30:\n";
    insertar(frente, fin, 10);
    insertar(frente, fin, 20);
    insertar(frente, fin, 30);
    imprimir(frente);
    cout << "Cantidad de elementos en la cola: " << contarElementos(frente) << "\n\n";

    cout << "Buscar 20: ";
    if (buscar(frente, 20)) {
        cout << "encontrado\n";
    } else {
        cout << "no encontrado\n";
    }

    cout << "\nEliminar el primero (10):\n";
    eliminar(frente, fin);
    imprimir(frente);
    cout << "Cantidad de elementos en la cola: " << contarElementos(frente) << "\n\n";

    cout << "Buscar 10: ";
    if (buscar(frente, 10)) {
        cout << "encontrado\n";
    } else {
        cout << "no encontrado\n";
    }

    // Liberar todos los nodos antes de finalizar.
    cout << "\nVaciando la cola...\n";
    while (frente != nullptr) {
        eliminar(frente, fin);
    }
    imprimir(frente);
    cout << "Cantidad de elementos en la cola: " << contarElementos(frente) << "\n";
    return 0;
}