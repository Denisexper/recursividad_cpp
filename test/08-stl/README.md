# 8. STL: `vector`, `map`, `set`, algoritmos

## Teoría

La **STL** (Standard Template Library) ofrece contenedores y algoritmos genéricos listos para usar.

```cpp
#include <vector>
#include <map>
#include <set>
#include <algorithm>

std::vector<int> v = {5, 3, 1, 4};
v.push_back(10);              // agrega al final
std::sort(v.begin(), v.end()); // ordena ascendente

std::map<std::string, int> edades;
edades["Denis"] = 25;          // inserta o actualiza
if (edades.count("Denis")) { } // verifica existencia

std::set<int> s = {3, 1, 2, 1}; // {1, 2, 3} (sin duplicados, ordenado)
```

Recorrer con `for` basado en rango:

```cpp
for (int x : v) std::cout << x << " ";
for (auto& [clave, valor] : edades) std::cout << clave << "=" << valor << " ";
```

Algoritmos útiles de `<algorithm>`: `std::sort`, `std::max_element`, `std::min_element`, `std::find`, `std::reverse`, `std::count`.

## Ejercicios

### Ejercicio 1 — Ordenar y buscar

Lee `n` enteros en un `std::vector<int>`, ordénalos con `std::sort` e imprímelos. Luego lee un valor `x` y usa `std::find` para indicar si está presente (`SI`/`NO`).

### Ejercicio 2 — Frecuencia de palabras

Lee una línea de texto (varias palabras separadas por espacio) y usa un `std::map<std::string, int>` para contar cuántas veces aparece cada palabra. Imprime cada palabra con su frecuencia, en cualquier orden.

**Entrada:** `hola mundo hola`
**Salida (en algún orden):**
```
hola 2
mundo 1
```

### Ejercicio 3 — Eliminar duplicados

Lee `n` enteros y usa un `std::set<int>` para imprimirlos sin duplicados, en orden ascendente.

### Ejercicio 4 — Top-K más frecuentes (opcional, más difícil)

Lee `n` enteros, cuenta la frecuencia de cada uno con un `std::map`, y usando `std::sort` con un comparador personalizado, imprime los `k` valores más frecuentes (de mayor a menor frecuencia).
