#include <iostream>
#include <memory>

// Ejercicio 1 — Arreglo dinámico manual
void arregloDinamico() {
    // TODO: leer n, reservar con new int[n], llenarlo, sumar, imprimir y delete[].
}

// Ejercicio 2 — Nodo con puntero (mini lista enlazada)
struct Nodo {
    int valor;
    Nodo* siguiente;
};

void listaEnlazada() {
    // TODO: construir con new una lista de 5 nodos, imprimirla y liberarla con delete.
}

// Ejercicio 3 — Migrar a unique_ptr
void arregloUniquePtr() {
    // TODO: repetir el ejercicio 1 usando std::unique_ptr<int[]>.
}

// Ejercicio 4 — Conteo de referencias con shared_ptr
void conteoSharedPtr() {
    // TODO: crear un shared_ptr<int>, copiarlo e imprimir use_count() en distintos momentos.
}

int main() {
    arregloDinamico();
    return 0;
}
