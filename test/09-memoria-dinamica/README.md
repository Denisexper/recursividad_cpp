# 9. Memoria dinámica: `new`/`delete`, smart pointers

## Teoría

La memoria **dinámica** se pide y libera manualmente en tiempo de ejecución con `new` y `delete`:

```cpp
int* p = new int(5);     // reserva memoria para un int
std::cout << *p;
delete p;                 // libera la memoria

int* arr = new int[10];   // reserva un arreglo dinámico
delete[] arr;              // libera un arreglo (nota el [])
```

Olvidar el `delete` provoca una **fuga de memoria** (*memory leak*). Por eso C++ moderno prefiere **smart pointers** (`#include <memory>`), que liberan la memoria automáticamente:

```cpp
#include <memory>

std::unique_ptr<int> p = std::make_unique<int>(5); // dueño único, se libera solo al salir de scope
std::shared_ptr<int> s = std::make_shared<int>(5); // dueño compartido, cuenta referencias
```

Regla general: en código nuevo, evita `new`/`delete` directos y usa smart pointers o contenedores de la STL (`std::vector`, etc.) que gestionan su propia memoria.

## Ejercicios

### Ejercicio 1 — Arreglo dinámico manual

Lee `n`, reserva un arreglo dinámico de `n` enteros con `new int[n]`, llénalo leyendo `n` valores, imprime su suma, y libéralo correctamente con `delete[]`.

### Ejercicio 2 — Nodo con puntero (mini lista enlazada)

Define:

```cpp
struct Nodo {
    int valor;
    Nodo* siguiente;
};
```

Construye manualmente (con `new`) una lista enlazada de 5 nodos con valores `1,2,3,4,5`, recórrela imprimiendo sus valores, y luego libera cada nodo con `delete` para no dejar fugas de memoria.

### Ejercicio 3 — Migrar a `unique_ptr`

Reimplementa el Ejercicio 1 (arreglo dinámico) usando `std::unique_ptr<int[]>` en vez de `new`/`delete` manuales. Observa que ya no necesitas llamar a `delete[]` explícitamente.

### Ejercicio 4 — Conteo de referencias con `shared_ptr`

Crea un `std::shared_ptr<int>` y, usando `.use_count()`, imprime cuántas referencias existen antes y después de copiarlo a otra variable `shared_ptr`, y después de que una de esas copias salga de un bloque `{ ... }`.
