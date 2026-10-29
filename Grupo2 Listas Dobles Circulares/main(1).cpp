#include <iostream>
#include "ListaDobleCircular.h"

using namespace std;

int main() {
    ListaDobleCircular<int> lista;

    // Pruebas de insercion
    lista.insertarAlFinal(20);
    lista.insertarAlFinal(30);
    lista.insertarAlFinal(40);
    lista.insertarAlInicio(10);

    cout << "ESTADO INICIAL" << endl;
    lista.imprimir();
    cout << "Tamanio: " << lista.getTamanio() << endl;

    cout << "\nPRUEBA DE OBTENER EN POSICION (DEBER 2)" << endl;
    cout << "Dato en posicion 0: " << lista.obtenerEnPosicion(0) << endl;
    cout << "Dato en posicion 2: " << lista.obtenerEnPosicion(2) << endl;
    cout << "Dato en posicion 3: " << lista.obtenerEnPosicion(3) << endl;

    cout << "\nBUSCANDO EL 30" << endl;
    Nodo<int>* encontrado = lista.buscar(30);
    if (encontrado != nullptr)
        cout << "Elemento " << encontrado->getDato() << " encontrado." << endl;
    else
        cout << "Elemento no encontrado." << endl;

    cout << "\nELIMINANDO UN VALOR EN MEDIO (20)" << endl;
    lista.eliminar(20);
    lista.imprimir();

    cout << "\nPRUEBA CON OTRO TIPO (string)" << endl;
    ListaDobleCircular<string> nombres;
    nombres.insertarAlFinal("Ana");
    nombres.insertarAlInicio("Luis");
    nombres.insertarAlFinal("Carlos");
    nombres.imprimir();
    cout << "Nombre en posicion 1: " << nombres.obtenerEnPosicion(1) << endl;

    return 0;
}