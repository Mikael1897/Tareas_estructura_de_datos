#include "Lista.h"
#include <iostream>

using namespace std;

int main() {
    ListaDoble miLista;

    cout << "=== INSERTANDO DATOS QUEMADOS ===\n";
    miLista.insertar("Carlos");
    miLista.insertar("Ana");
    miLista.insertar("Mateo");
    miLista.insertar("Sofia");

    cout << "\n=== MOSTRAR LISTA ORIGINAL ===\n";
    miLista.imprimirAdelante();
    miLista.imprimirAtras();

    cout << "\n=== PRUEBA DE INVERSION ===\n";
    miLista.invertir();

    cout << "\n=== LISTA DESPUES DE INVERTIR ===\n";
    miLista.imprimirAdelante();
    miLista.imprimirAtras();

    return 0;
}